/*
 * XREFs of sub_1800AF11C @ 0x1800AF11C
 * Callers:
 *     sub_1800AF160 @ 0x1800AF160 (sub_1800AF160.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 *     sub_180107837 @ 0x180107837 (sub_180107837.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AF11C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::VertexLayoutState::`vftable';
  sub_180010910((__int64)(a1 + 5));
  sub_180010910((__int64)(a1 + 3));
  return sub_180010910((__int64)(a1 + 1));
}
