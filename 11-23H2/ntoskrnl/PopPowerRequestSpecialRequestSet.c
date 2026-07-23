/*
 * XREFs of PopPowerRequestSpecialRequestSet @ 0x140981BDC
 * Callers:
 *     PopPowerRequestActionInfo @ 0x1407A5EB4 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x140715900 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x14077F210 (PsChargeProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A70C4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestSpecialRequestSet(__int64 a1, int a2, ULONG_PTR a3)
{
  char v3; // r14
  int v5; // ebx
  PVOID v6; // rbp
  unsigned __int64 v7; // rsi
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v3 = 0;
  if ( a2 == 3 && *(_BYTE *)(a1 + 152) )
  {
    v5 = ObpReferenceObjectByHandleWithTag(a3, 0x2000, (__int64)PsProcessType, 1, 0x72506F50u, &Object, 0LL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = PsChargeProcessWakeCounter((__int64)Object, 0, 3u, a1);
      PopAcquirePowerRequestPushLock(1);
      if ( *(_QWORD *)(a1 + 136) )
      {
        v3 = 1;
        v5 = -1073741811;
      }
      else
      {
        *(_QWORD *)(a1 + 136) = v6;
        v5 = 0;
        *(_QWORD *)(a1 + 144) = v7;
      }
      PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
      if ( v3 )
      {
        if ( v7 )
          PsReleaseProcessWakeCounter(v7);
        ObfDereferenceObjectWithTag(v6, 0x72506F50u);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
