/*
 * XREFs of sub_1800B0AC8 @ 0x1800B0AC8
 * Callers:
 *     sub_1800B0B10 @ 0x1800B0B10 (sub_1800B0B10.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 *     sub_18010781E @ 0x18010781E (sub_18010781E.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800B0AC8(_QWORD *a1)
{
  *a1 = &Spectre::Engine::IndexBufferState::`vftable';
  sub_180010910((__int64)(a1 + 5));
  sub_180010910((__int64)(a1 + 3));
  return sub_180010910((__int64)(a1 + 1));
}
