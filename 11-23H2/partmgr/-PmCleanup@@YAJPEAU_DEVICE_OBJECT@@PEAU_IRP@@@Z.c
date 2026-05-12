/*
 * XREFs of ?PmCleanup@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00266F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmCleanup(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
