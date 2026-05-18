/*
 * XREFs of sub_1800AF3B0 @ 0x1800AF3B0
 * Callers:
 *     sub_1800AF3F0 @ 0x1800AF3F0 (sub_1800AF3F0.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 *     sub_1801077AB @ 0x1801077AB (sub_1801077AB.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800AF3B0(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ShaderState::`vftable';
  sub_180010910((__int64)(a1 + 5));
  sub_180010910((__int64)(a1 + 3));
  return sub_180010910((__int64)(a1 + 1));
}
