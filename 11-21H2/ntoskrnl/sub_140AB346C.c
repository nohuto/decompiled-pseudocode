/*
 * XREFs of sub_140AB346C @ 0x140AB346C
 * Callers:
 *     sub_140AB23B0 @ 0x140AB23B0 (sub_140AB23B0.c)
 *     sub_140AB26C8 @ 0x140AB26C8 (sub_140AB26C8.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 * Callees:
 *     sub_140AB2008 @ 0x140AB2008 (sub_140AB2008.c)
 *     sub_140AB3760 @ 0x140AB3760 (sub_140AB3760.c)
 */

__int64 __fastcall sub_140AB346C(__int64 a1, __int64 a2, volatile void *a3, char a4, char a5, _BYTE *a6)
{
  int v7; // r8d

  v7 = sub_140AB2008(a2, a6, a3, a4, a5, *(_BYTE *)(a1 + 1) >> 3, 0);
  if ( v7 >= 0 )
    *(_QWORD *)a6 = sub_140AB3760(a1, *(_QWORD *)a6);
  return (unsigned int)v7;
}
