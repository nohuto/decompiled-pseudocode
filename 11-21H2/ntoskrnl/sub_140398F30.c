/*
 * XREFs of sub_140398F30 @ 0x140398F30
 * Callers:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B2460 @ 0x1403B2460 (sub_1403B2460.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140398F30(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx

  v2 = (void *)a2[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(a2, 0);
}
