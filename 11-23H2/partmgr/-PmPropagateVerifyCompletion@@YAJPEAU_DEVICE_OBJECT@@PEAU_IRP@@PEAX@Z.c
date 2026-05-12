/*
 * XREFs of ?PmPropagateVerifyCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000EE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmPropagateVerifyCompletion(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3)
{
  IoFreeIrp(a2);
  return 3221225494LL;
}
