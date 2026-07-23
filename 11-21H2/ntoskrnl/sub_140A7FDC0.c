/*
 * XREFs of sub_140A7FDC0 @ 0x140A7FDC0
 * Callers:
 *     sub_140A82328 @ 0x140A82328 (sub_140A82328.c)
 *     sub_140A9B2E4 @ 0x140A9B2E4 (sub_140A9B2E4.c)
 * Callees:
 *     sub_14055712C @ 0x14055712C (sub_14055712C.c)
 *     sub_140A7FD04 @ 0x140A7FD04 (sub_140A7FD04.c)
 */

void __fastcall sub_140A7FDC0(char a1)
{
  if ( (dword_140C29FC0 & 0x10) != 0 )
  {
    sub_14055712C(1, 1, 0);
    sub_140A7FD04(a1);
  }
}
