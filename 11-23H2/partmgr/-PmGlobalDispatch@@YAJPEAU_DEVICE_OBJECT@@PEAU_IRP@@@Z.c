/*
 * XREFs of ?PmGlobalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0001F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PmGlobalDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  return (*(__int64 (**)(void))(*(_QWORD *)a1->DeviceExtension
                              + 8LL * a2->Tail.Overlay.CurrentStackLocation->MajorFunction))();
}
