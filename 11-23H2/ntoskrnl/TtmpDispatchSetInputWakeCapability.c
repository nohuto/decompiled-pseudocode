/*
 * XREFs of TtmpDispatchSetInputWakeCapability @ 0x1409A6B40
 * Callers:
 *     TtmDispatchApi @ 0x1409A5F8C (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     TtmiSetInputWakeCapability @ 0x1409A2F18 (TtmiSetInputWakeCapability.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A6238 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1409A8344 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetInputWakeCapability(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v6, &Object);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = TtmiSetInputWakeCapability(v6, (__int64)Object, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
  else
    TtmiLogError("TtmpDispatchSetInputWakeCapability", 938LL, (unsigned int)v2, (unsigned int)v2);
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v3;
}
