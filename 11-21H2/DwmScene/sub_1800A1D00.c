/*
 * XREFs of sub_1800A1D00 @ 0x1800A1D00
 * Callers:
 *     sub_1800A1D80 @ 0x1800A1D80 (sub_1800A1D80.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

unsigned __int64 __fastcall sub_1800A1D00(_QWORD *a1)
{
  __int64 v2; // rdx

  *a1 = &Spectre::Engine::ViewerCamera::`vftable';
  sub_180010910((__int64)(a1 + 223));
  sub_180010910((__int64)(a1 + 221));
  return sub_180061488((__int64)a1, v2);
}
