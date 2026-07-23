/*
 * XREFs of sub_1409D054C @ 0x1409D054C
 * Callers:
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 *     sub_1409D1D04 @ 0x1409D1D04 (sub_1409D1D04.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409D054C(_QWORD *P)
{
  void *v2; // rcx

  if ( P )
  {
    v2 = (void *)P[1];
    if ( v2 )
    {
      if ( !*(_BYTE *)P )
        ExFreePoolWithTag(v2, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}
