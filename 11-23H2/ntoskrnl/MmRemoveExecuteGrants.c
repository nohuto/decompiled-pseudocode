/*
 * XREFs of MmRemoveExecuteGrants @ 0x14036E20C
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  __m128i v1[11]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v2[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v2, 0, 0xB8uLL);
  memset(v1, 0, sizeof(v1));
  Process = KeGetCurrentThread()->ApcState.Process;
  v1[10].m128i_i64[1] = (__int64)v2;
  Process = (_KPROCESS *)((char *)Process + 1664);
  v1[0].m128i_i32[0] = 32774;
  v1[9].m128i_i64[1] = (__int64)MiRevokeExecutePte;
  v1[1].m128i_i64[1] = (__int64)Process;
  v1[10].m128i_i64[0] = (__int64)PdcCreateWatchdogAroundClientCall;
  v1[2].m128i_i64[1] = 0xFFFF7FFFFFFFFFFFuLL;
  WORD2(v2[0]) = 0;
  v2[2] = 0LL;
  v2[3] = 0LL;
  LODWORD(v2[0]) = 1;
  LODWORD(v2[1]) = 20;
  v1[0].m128i_i8[7] = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables(v1);
  MiUnlockWorkingSetShared((__int64)Process, v1[0].m128i_u8[7]);
  MiFlushTbList((int *)v2);
}
