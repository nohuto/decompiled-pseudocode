/*
 * XREFs of sub_1800A6C80 @ 0x1800A6C80
 * Callers:
 *     sub_1800A6CC0 @ 0x1800A6CC0 (sub_1800A6CC0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

unsigned __int64 __fastcall sub_1800A6C80(_QWORD *a1)
{
  *a1 = &Spectre::Engine::Aimer::`vftable';
  sub_180010910((__int64)(a1 + 12));
  return sub_180048280((__int64)a1);
}
