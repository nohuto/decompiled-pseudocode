/*
 * XREFs of sub_180081A24 @ 0x180081A24
 * Callers:
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 *     sub_1800829AC @ 0x1800829AC (sub_1800829AC.c)
 *     sub_180084E14 @ 0x180084E14 (sub_180084E14.c)
 * Callees:
 *     sub_180081CA4 @ 0x180081CA4 (sub_180081CA4.c)
 */

void __fastcall sub_180081A24(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rcx
  __int64 v5; // rax

  v2 = *a1;
  v4 = (a1[1] - *a1) >> 2;
  if ( a2 >= v4 )
  {
    if ( a2 <= v4 )
      return;
    if ( a2 > (a1[2] - v2) >> 2 )
    {
      sub_180081A84(a1);
      return;
    }
    v5 = sub_180081CA4(a1[1], a2 - v4);
  }
  else
  {
    v5 = v2 + 4 * a2;
  }
  a1[1] = v5;
}
