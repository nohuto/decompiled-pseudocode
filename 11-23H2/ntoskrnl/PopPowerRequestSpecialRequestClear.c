/*
 * XREFs of PopPowerRequestSpecialRequestClear @ 0x140981B00
 * Callers:
 *     PopPowerRequestActionInfo @ 0x1407A5EB4 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PsReleaseProcessWakeCounter @ 0x140715900 (PsReleaseProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestSpecialRequestClear(__int64 a1, int a2)
{
  void *v3; // rbp
  __int64 v4; // rsi
  char v5; // r14
  void *v6; // rax
  unsigned int v7; // ebx

  if ( a2 == 3 && *(_BYTE *)(a1 + 152) )
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0;
    PopAcquirePowerRequestPushLock(1);
    v6 = *(void **)(a1 + 136);
    if ( v6 )
    {
      v4 = *(_QWORD *)(a1 + 144);
      v5 = 1;
      *(_QWORD *)(a1 + 144) = 0LL;
      v3 = v6;
      *(_QWORD *)(a1 + 136) = 0LL;
      v7 = 0;
    }
    else
    {
      v7 = -1073741811;
    }
    PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
    if ( v5 )
    {
      if ( v4 )
        PsReleaseProcessWakeCounter(v4);
      ObfDereferenceObjectWithTag(v3, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
