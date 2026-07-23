/*
 * XREFs of MiCreateInitialSystemWsles @ 0x140B456F8
 * Callers:
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146B4 (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiInitializeLargePfnList @ 0x1402E9228 (MiInitializeLargePfnList.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rax
  __int64 v1; // rsi
  __int32 v2; // edx
  volatile LONG *SharedVm; // rbx
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  __m128i v8[11]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v9[46]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v9, 0, 0x168uLL);
  MiInitializeLargePfnList(v9);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v8[2].m128i_i64[1] = -1LL;
  v1 = (__int64)AnyMultiplexedVm;
  v8[1].m128i_i64[1] = (__int64)AnyMultiplexedVm;
  v8[10].m128i_i64[1] = (__int64)v9;
  v8[0].m128i_i32[0] = v2;
  v8[9].m128i_i64[1] = (__int64)MiCreatePteWsle;
  SharedVm = (volatile LONG *)MiGetSharedVm((__int64)AnyMultiplexedVm);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  v8[0].m128i_i8[7] = v4;
  LODWORD(SharedVm) = MiWalkPageTables(v8);
  MiUnlockWorkingSetExclusive(v1, v8[0].m128i_u8[7], v5, v6);
  return (_DWORD)SharedVm != 5;
}
