/*
 * XREFs of sub_140B0348C @ 0x140B0348C
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1402501A0 @ 0x1402501A0 (sub_1402501A0.c)
 *     sub_140B270C4 @ 0x140B270C4 (sub_140B270C4.c)
 *     sub_140B271D8 @ 0x140B271D8 (sub_140B271D8.c)
 */

void __fastcall sub_140B0348C(int a1)
{
  __int64 v1; // rcx

  if ( a1 )
  {
    if ( a1 == 3 && (int)sub_140B270C4() >= 0 )
      sub_1402501A0(v1, 2uLL);
  }
  else
  {
    sub_140B271D8();
  }
}
