/*
 * XREFs of sub_1800B0810 @ 0x1800B0810
 * Callers:
 *     sub_1800B0850 @ 0x1800B0850 (sub_1800B0850.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800B0810(_QWORD *a1)
{
  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  sub_180010910((__int64)(a1 + 3));
  return sub_180010910((__int64)(a1 + 1));
}
