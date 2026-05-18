/*
 * XREFs of sub_18007007C @ 0x18007007C
 * Callers:
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 * Callees:
 *     sub_180030EEC @ 0x180030EEC (sub_180030EEC.c)
 *     sub_18006FD7C @ 0x18006FD7C (sub_18006FD7C.c)
 *     sub_1800706D8 @ 0x1800706D8 (sub_1800706D8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18007007C(__int64 a1, __int64 *a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  sub_18006FD7C((__int64 *)a1, a2);
  Mtx_init_in_situ((_Mtx_t)(a1 + 24), 2);
  Mtx_init_in_situ((_Mtx_t)(a1 + 104), 2);
  sub_180030EEC((__int64 *)(a1 + 184));
  sub_180030EEC((__int64 *)(a1 + 200));
  *(_DWORD *)(a1 + 216) = 0;
  sub_1800706D8(a1);
  return a1;
}
