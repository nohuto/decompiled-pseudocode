/*
 * XREFs of SepSetTokenClaims @ 0x1407CF918
 * Callers:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     SepCompareClaimAttributes @ 0x1407C7908 (SepCompareClaimAttributes.c)
 *     SepCreateClaimAttributes @ 0x1407CF994 (SepCreateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x1409D146C (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepSetTokenClaims(__int64 a1)
{
  char v2; // bp
  __int64 result; // rax
  unsigned int v4; // r14d
  PVOID v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  v2 = 0;
  result = SepCreateClaimAttributes(P);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = P[0];
    if ( !P[0] )
    {
      *(_QWORD *)(a1 + 1096) = 0LL;
      return result;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
      v7 = *(_QWORD *)(a1 + 216);
      if ( !*(_QWORD *)(v7 + 112) )
      {
        v2 = 1;
        *(PVOID *)(v7 + 112) = P[0];
      }
      v8 = *(_QWORD *)(a1 + 216);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 104));
      KeAbPostRelease(v8 + 104);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v5 = P[0];
      if ( v2 )
        goto LABEL_13;
    }
    if ( SepCompareClaimAttributes((unsigned int *)v5, *(unsigned int **)(*(_QWORD *)(a1 + 216) + 112LL)) )
    {
LABEL_13:
      *(_QWORD *)(a1 + 1096) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 112LL);
      if ( !v2 )
        SepDeleteClaimAttributes(v5);
    }
    else
    {
      *(_DWORD *)(a1 + 200) |= 0x8000u;
      *(_QWORD *)(a1 + 1096) = v5;
    }
  }
  return v4;
}
