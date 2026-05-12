/*
 * XREFs of sub_1C00A1390 @ 0x1C00A1390
 * Callers:
 *     sub_1C0015DDC @ 0x1C0015DDC (sub_1C0015DDC.c)
 * Callees:
 *     sub_1C0023100 @ 0x1C0023100 (sub_1C0023100.c)
 */

void __fastcall sub_1C00A1390(__int64 *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( !sub_1C0023100(a1[3]) )
  {
    v2 = (void *)a1[72];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x4D546152u);
    v3 = (void *)a1[64];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x4D546152u);
  }
}
