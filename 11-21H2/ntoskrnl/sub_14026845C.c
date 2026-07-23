/*
 * XREFs of sub_14026845C @ 0x14026845C
 * Callers:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140277580 @ 0x140277580 (sub_140277580.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_140325830 @ 0x140325830 (sub_140325830.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14038E608 @ 0x14038E608 (sub_14038E608.c)
 *     sub_1403C9C90 @ 0x1403C9C90 (sub_1403C9C90.c)
 *     sub_1403CA0E4 @ 0x1403CA0E4 (sub_1403CA0E4.c)
 *     sub_1403CB284 @ 0x1403CB284 (sub_1403CB284.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 * Callees:
 *     sub_140268620 @ 0x140268620 (sub_140268620.c)
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 */

__int64 __fastcall sub_14026845C(__int64 a1, __int64 a2)
{
  char v2; // r8
  char v3; // al
  __int64 v4; // rax
  ULONG_PTR v5; // r9

  v2 = *(_BYTE *)(a1 + 34);
  if ( (v2 & 7) == 6 )
  {
    *(_BYTE *)(a1 + 34) = v2 & 0xF8 | 5;
    v2 = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v3 = *(_BYTE *)(a1 + 35) & 0xDF;
  *(_BYTE *)(a1 + 34) = v2 & 0xC7;
  *(_BYTE *)(a1 + 35) = v3;
  *(_BYTE *)(a1 + 35) = v3 & 0xEF;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  v4 = *(_DWORD *)(a1 + 16) & 0x3E0;
  *(_WORD *)(a1 + 32) = 0;
  sub_140268620(a1, a2, (unsigned int)(v4 != 0) + 1, 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  return sub_1402C6EB0(v5);
}
