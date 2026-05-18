/*
 * XREFs of sub_18006C83C @ 0x18006C83C
 * Callers:
 *     sub_18006CCD0 @ 0x18006CCD0 (sub_18006CCD0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18006C764 @ 0x18006C764 (sub_18006C764.c)
 */

__int64 __fastcall sub_18006C83C(__int64 a1)
{
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 1552));
  sub_180010884(*(char **)(a1 + 1512), (*(_QWORD *)(a1 + 1520) - *(_QWORD *)(a1 + 1512)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 1512) = 0LL;
  *(_QWORD *)(a1 + 1520) = 0LL;
  *(_QWORD *)(a1 + 1528) = 0LL;
  sub_18006C764((char **)(a1 + 1496));
  return sub_180033018(a1);
}
