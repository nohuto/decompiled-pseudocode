/*
 * XREFs of ?PmFail@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmFail(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  a2->IoStatus.Status = -1073741808;
  IofCompleteRequest(a2, 0);
  return 3221225488LL;
}
