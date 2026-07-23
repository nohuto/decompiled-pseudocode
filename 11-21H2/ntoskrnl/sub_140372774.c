/*
 * XREFs of sub_140372774 @ 0x140372774
 * Callers:
 *     sub_140372644 @ 0x140372644 (sub_140372644.c)
 *     sub_1403C68CC @ 0x1403C68CC (sub_1403C68CC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_140372774(__int64 a1)
{
  return *(_DWORD *)(a1 + 12) == 124 && *(_WORD *)(a1 + 8) != 127;
}
