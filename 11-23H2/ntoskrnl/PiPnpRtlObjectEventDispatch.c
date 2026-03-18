/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x140788900
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1407884D0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1407887CC (PiPnpRtlEndOperation.c)
 * Callees:
 *     PiDqObjectManagerHandleObjectEvent @ 0x140787F20 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x14078800C (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDcHandleObjectEvent @ 0x140788064 (PiDcHandleObjectEvent.c)
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
