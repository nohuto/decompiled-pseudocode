/*
 * XREFs of sub_140A8C8EC @ 0x140A8C8EC
 * Callers:
 *     sub_140AA6270 @ 0x140AA6270 (sub_140AA6270.c)
 *     sub_140AA69F0 @ 0x140AA69F0 (sub_140AA69F0.c)
 *     sub_140AA6C20 @ 0x140AA6C20 (sub_140AA6C20.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 */

PDRIVER_INITIALIZE __fastcall sub_140A8C8EC(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_INITIALIZE *v2; // rax
  PDRIVER_INITIALIZE result; // rax

  if ( !MmIsDriverVerifying(a1) )
    return a1->DriverInit;
  v2 = *(PDRIVER_INITIALIZE **)&a1->DriverExtension[1].ServiceKeyName.Length;
  if ( !v2 )
    return a1->DriverInit;
  result = *v2;
  if ( !result )
    return a1->DriverInit;
  return result;
}
