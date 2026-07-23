/*
 * XREFs of sub_140A0F8CC @ 0x140A0F8CC
 * Callers:
 *     sub_1407E17A4 @ 0x1407E17A4 (sub_1407E17A4.c)
 *     sub_140A0F1D4 @ 0x140A0F1D4 (sub_140A0F1D4.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A0F8CC(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( P )
  {
    v2 = (void *)P[5];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v3 = (void *)P[7];
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
