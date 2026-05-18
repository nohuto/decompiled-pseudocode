/*
 * XREFs of sub_180097460 @ 0x180097460
 * Callers:
 *     sub_18006FD7C @ 0x18006FD7C (sub_18006FD7C.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 *     sub_1800973B4 @ 0x1800973B4 (sub_1800973B4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180097460(__int64 a1, __int64 a2)
{
  sub_1800973B4((__int64 *)a1, a2);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_180027964((__int64 *)a1);
  Mtx_unlock((_Mtx_t)(a1 + 48));
  return a1;
}
