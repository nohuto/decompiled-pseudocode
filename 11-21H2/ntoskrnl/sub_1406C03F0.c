/*
 * XREFs of sub_1406C03F0 @ 0x1406C03F0
 * Callers:
 *     sub_140687754 @ 0x140687754 (sub_140687754.c)
 *     sub_14092AC20 @ 0x14092AC20 (sub_14092AC20.c)
 *     sub_140967E00 @ 0x140967E00 (sub_140967E00.c)
 *     sub_1409AEC10 @ 0x1409AEC10 (sub_1409AEC10.c)
 * Callees:
 *     sub_1402443D8 @ 0x1402443D8 (sub_1402443D8.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14035EB3C @ 0x14035EB3C (sub_14035EB3C.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_14071147C @ 0x14071147C (sub_14071147C.c)
 *     sub_1409E2110 @ 0x1409E2110 (sub_1409E2110.c)
 *     sub_1409E6524 @ 0x1409E6524 (sub_1409E6524.c)
 */

char __fastcall sub_1406C03F0(ULONG_PTR a1, char a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  int ProcessSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
    return 0;
  v4 = sub_1402443D8(a1, a2);
  if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
  {
    sub_14035EB3C(a1);
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !v4 && (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    sub_1409E6524(0LL, CurrentThread, a1, 2LL);
  if ( a2 )
  {
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    *(_QWORD *)(a1 + 2224) = sub_1402F5718();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1080);
    sub_1402AFC00(a1 + 1080);
    sub_1402AC800((__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      sub_1406F83A0(22LL, a1, 1LL, &ProcessSessionId);
    }
    if ( (BYTE8(xmmword_140D06900) & 2) != 0 )
    {
      LOBYTE(v6) = 1;
      sub_1409E2110(a1, v6);
    }
    sub_14071147C(a1);
  }
  return 1;
}
