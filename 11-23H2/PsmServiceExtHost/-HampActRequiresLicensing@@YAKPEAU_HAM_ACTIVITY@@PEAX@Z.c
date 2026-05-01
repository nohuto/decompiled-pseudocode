/*
 * XREFs of ?HampActRequiresLicensing@@YAKPEAU_HAM_ACTIVITY@@PEAX@Z @ 0x18007BA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampActRequiresLicensing(struct _HAM_ACTIVITY *a1, void *a2)
{
  return (*((_DWORD *)a1 + 28) & 0x1800000) != 0;
}
