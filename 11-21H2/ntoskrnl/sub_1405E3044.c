/*
 * XREFs of sub_1405E3044 @ 0x1405E3044
 * Callers:
 *     sub_1405E30A0 @ 0x1405E30A0 (sub_1405E30A0.c)
 *     sub_140928158 @ 0x140928158 (sub_140928158.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405E3044(char *P, int a2)
{
  int v2; // edi
  PVOID *v4; // rbx

  if ( P )
  {
    v2 = a2;
    if ( a2 )
    {
      v4 = (PVOID *)&P[16 * a2];
      do
      {
        v4 -= 2;
        ExFreePoolWithTag(*v4, 0);
        --v2;
      }
      while ( v2 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
