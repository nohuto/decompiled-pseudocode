/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x140779A08
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 * Callees:
 *     PiDqObjectManagerHandleObjectEvent @ 0x1406C7D58 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1406C7E48 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDcHandleObjectEvent @ 0x14076D7D4 (PiDcHandleObjectEvent.c)
 */

void __fastcall PiPnpRtlObjectEventDispatch(__int64 a1)
{
  struct _ERESOURCE *ObjectManagerForPnpObjectType; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    PiDcHandleObjectEvent(a1);
    ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( ObjectManagerForPnpObjectType )
      PiDqObjectManagerHandleObjectEvent((__int64)ObjectManagerForPnpObjectType, a1);
  }
}
