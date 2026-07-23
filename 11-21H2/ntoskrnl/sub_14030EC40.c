/*
 * XREFs of sub_14030EC40 @ 0x14030EC40
 * Callers:
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140270A00 @ 0x140270A00 (sub_140270A00.c)
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 *     sub_14030E390 @ 0x14030E390 (sub_14030E390.c)
 *     sub_140373BAC @ 0x140373BAC (sub_140373BAC.c)
 *     sub_140580028 @ 0x140580028 (sub_140580028.c)
 *     sub_1406CF50C @ 0x1406CF50C (sub_1406CF50C.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14030EC40(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
