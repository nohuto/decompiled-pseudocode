/*
 * XREFs of TtmpDispatchSetDisplayTimeouts @ 0x1409A6D68
 * Callers:
 *     TtmDispatchApi @ 0x1409A6270 (TtmDispatchApi.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1409A37AC (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A651C (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1409A8628 (TtmiLogError.c)
 */

__int64 __fastcall TtmpDispatchSetDisplayTimeouts(__int64 a1)
{
  int v2; // eax
  _DWORD *v3; // rsi
  unsigned int v4; // edi
  PVOID v5; // rbx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  Object = 0LL;
  v2 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 8), 1, 1, &v7, &Object);
  v3 = (_DWORD *)v7;
  v4 = v2;
  v5 = Object;
  if ( v2 >= 0 )
  {
    if ( !*((_DWORD *)Object + 7) )
      *(_BYTE *)(v7 + 240) = 0;
    TtmiTerminalSetDisplayTimeouts(v3, (__int64)v5, *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
    v4 = 0;
  }
  else
  {
    TtmiLogError("TtmpDispatchSetDisplayTimeouts", 543LL, (unsigned int)v2, (unsigned int)v2);
  }
  if ( v3 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  return v4;
}
