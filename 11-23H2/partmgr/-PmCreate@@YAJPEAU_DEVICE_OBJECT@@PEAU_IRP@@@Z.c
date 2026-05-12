/*
 * XREFs of ?PmCreate@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0026800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmCreate(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  unsigned int v2; // ebx

  v2 = (a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options & 1) != 0 ? 0xC0000103 : 0;
  a2->IoStatus.Status = v2;
  IofCompleteRequest(a2, 0);
  return v2;
}
