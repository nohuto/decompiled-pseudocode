/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x140788E10
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1407889E0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140788CDC (PiPnpRtlEndOperation.c)
 * Callees:
 *     PiDqObjectManagerHandleObjectEvent @ 0x140788430 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x14078851C (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDcHandleObjectEvent @ 0x140788574 (PiDcHandleObjectEvent.c)
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
