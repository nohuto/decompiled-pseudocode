/*
 * XREFs of sub_14081AB2C @ 0x14081AB2C
 * Callers:
 *     sub_1403B423C @ 0x1403B423C (sub_1403B423C.c)
 *     sub_14081AA90 @ 0x14081AA90 (sub_14081AA90.c)
 *     sub_1409DE1A0 @ 0x1409DE1A0 (sub_1409DE1A0.c)
 * Callees:
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14081AB2C(__int64 *P, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = P;
    v4 = a2;
    do
    {
      sub_1402E0164(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(P, 0x70696D57u);
}
