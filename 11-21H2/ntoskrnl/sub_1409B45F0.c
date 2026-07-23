/*
 * XREFs of sub_1409B45F0 @ 0x1409B45F0
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 *     sub_14097AB60 @ 0x14097AB60 (sub_14097AB60.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __fastcall sub_1409B45F0(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // r14
  int v6; // eax
  _QWORD *v7; // r15
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  NTSTATUS result; // eax
  __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v13[14]; // [rsp+40h] [rbp-A8h] BYREF

  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = (signed __int64 *)(a1 + 48);
  ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  v6 = *(_DWORD *)(a1 + 44);
  if ( v6 )
  {
    if ( (a2 & 4) == 0 && v6 == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 2;
      ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
      *(_DWORD *)(a1 + 72) = 0;
      v7 = (_QWORD *)(a1 + 56);
      while ( 1 )
      {
        v8 = (_QWORD *)*v7;
        if ( (_QWORD *)*v7 == v7 )
          break;
        v9 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        *v8 = 0LL;
        *((_DWORD *)v8 + 10) = -1073740526;
        KeSetEvent((PRKEVENT)(v8 + 2), 0, 0);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 112);
      sub_1402AFC00(a1 + 112);
      if ( a2 >= 0 )
      {
        memset(v13, 0, 0x68uLL);
        v13[1] = *(_QWORD *)(a1 + 24);
        sub_140358A20(2u, 50, 0, (__int64)v13);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  sub_1402AFC00((ULONG_PTR)v5);
  KeLeaveCriticalRegion();
  if ( a2 < 0 )
    return 0;
  result = KeWaitForSingleObject(
             (PVOID)(a1 + 80),
             Executive,
             *((_BYTE *)KeGetCurrentThread() + 562),
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v12 & -(__int64)((a2 & 5) != 0)));
  if ( result == 258 )
    return (a2 & 4) != 0 ? -1073740527 : 259;
  return result;
}
