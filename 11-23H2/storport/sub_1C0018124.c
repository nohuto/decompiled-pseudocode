/*
 * XREFs of sub_1C0018124 @ 0x1C0018124
 * Callers:
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 *     sub_1C00144AC @ 0x1C00144AC (sub_1C00144AC.c)
 *     sub_1C0017CC0 @ 0x1C0017CC0 (sub_1C0017CC0.c)
 *     sub_1C001FA9C @ 0x1C001FA9C (sub_1C001FA9C.c)
 *     sub_1C00266DA @ 0x1C00266DA (sub_1C00266DA.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0057C30 @ 0x1C0057C30 (sub_1C0057C30.c)
 *     sub_1C005F5A4 @ 0x1C005F5A4 (sub_1C005F5A4.c)
 *     sub_1C005FAB4 @ 0x1C005FAB4 (sub_1C005FAB4.c)
 *     sub_1C0061F7C @ 0x1C0061F7C (sub_1C0061F7C.c)
 *     sub_1C0062A44 @ 0x1C0062A44 (sub_1C0062A44.c)
 *     DoScreenSave_0 @ 0x1C0062D50 (DoScreenSave_0.c)
 *     sub_1C00630BC @ 0x1C00630BC (sub_1C00630BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0018124(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_1C001AA20;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  v5 = IofCallDriver(DeviceObject, Irp);
  if ( v5 == 259 )
  {
    v5 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v5;
}
