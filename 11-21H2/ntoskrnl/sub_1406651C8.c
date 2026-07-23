/*
 * XREFs of sub_1406651C8 @ 0x1406651C8
 * Callers:
 *     sub_1406623D0 @ 0x1406623D0 (sub_1406623D0.c)
 *     sub_140662780 @ 0x140662780 (sub_140662780.c)
 *     sub_1406647E0 @ 0x1406647E0 (sub_1406647E0.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     NtAdjustPrivilegesToken @ 0x14079DC50 (NtAdjustPrivilegesToken.c)
 *     sub_14079E490 @ 0x14079E490 (sub_14079E490.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406651C8(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
