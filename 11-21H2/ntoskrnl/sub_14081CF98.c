/*
 * XREFs of sub_14081CF98 @ 0x14081CF98
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1408288D4 @ 0x1408288D4 (sub_1408288D4.c)
 *     sub_140858C40 @ 0x140858C40 (sub_140858C40.c)
 *     sub_14098C27C @ 0x14098C27C (sub_14098C27C.c)
 *     sub_14098FB30 @ 0x14098FB30 (sub_14098FB30.c)
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140811764 @ 0x140811764 (sub_140811764.c)
 */

LONG __fastcall sub_14081CF98(int a1)
{
  LONG result; // eax

  qword_140C20728 = 0LL;
  dword_140C20720 = 0;
  result = KeSetEvent(&stru_140C20740, 0, 0);
  if ( a1 != 7 )
    return sub_140811764(9, 0LL);
  return result;
}
