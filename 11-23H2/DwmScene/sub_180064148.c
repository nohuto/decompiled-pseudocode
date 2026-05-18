/*
 * XREFs of sub_180064148 @ 0x180064148
 * Callers:
 *     sub_180064AE0 @ 0x180064AE0 (sub_180064AE0.c)
 * Callees:
 *     sub_18006405C @ 0x18006405C (sub_18006405C.c)
 */

__int64 __fastcall sub_180064148(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 1552));
  sub_18006405C(a1 + 1488);
  return sub_180031D44(a1);
}
