/*
 * XREFs of sub_140B2E564 @ 0x140B2E564
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_1403DCCD8 @ 0x1403DCCD8 (sub_1403DCCD8.c)
 *     sub_140B4EC40 @ 0x140B4EC40 (sub_140B4EC40.c)
 */

__int64 __fastcall sub_140B2E564(int a1, __int64 a2)
{
  if ( a1 )
    return sub_1403DCCD8();
  else
    return sub_140B4EC40(a2);
}
