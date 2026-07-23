/*
 * XREFs of sub_140778370 @ 0x140778370
 * Callers:
 *     sub_140776E5C @ 0x140776E5C (sub_140776E5C.c)
 *     sub_140777D40 @ 0x140777D40 (sub_140777D40.c)
 *     sub_140778100 @ 0x140778100 (sub_140778100.c)
 * Callees:
 *     sub_140779620 @ 0x140779620 (sub_140779620.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140778370(_QWORD *P)
{
  void *v2; // rcx
  __int64 v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)P[2];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = P[4];
    if ( v3 )
      sub_140779620(*((unsigned int *)P + 6), v3, 1483763280LL);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
