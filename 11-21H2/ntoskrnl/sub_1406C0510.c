/*
 * XREFs of sub_1406C0510 @ 0x1406C0510
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1406C05A4 @ 0x1406C05A4 (sub_1406C05A4.c)
 *     sub_140751880 @ 0x140751880 (sub_140751880.c)
 */

__int64 __fastcall sub_1406C0510(__int64 a1, __int64 a2, int a3)
{
  unsigned int ProcessSessionId; // eax
  __int64 v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  ExAcquireFastMutex(&stru_140C237C0);
  ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
  v7 = sub_140751880(a1, ProcessSessionId);
  if ( v7 )
  {
    v9 = sub_1406C05A4(v7, a2 + 4, (unsigned int)(a3 - 4), a2);
    KeReleaseGuardedMutex(&stru_140C237C0);
    return v9;
  }
  else
  {
    KeReleaseGuardedMutex(&stru_140C237C0);
    return 3221225485LL;
  }
}
