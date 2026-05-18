/*
 * XREFs of sub_1800973E0 @ 0x1800973E0
 * Callers:
 *     sub_18006FE4C @ 0x18006FE4C (sub_18006FE4C.c)
 *     sub_18006FFA4 @ 0x18006FFA4 (sub_18006FFA4.c)
 *     sub_180070754 @ 0x180070754 (sub_180070754.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18009702C @ 0x18009702C (sub_18009702C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800973E0(__int64 a1, __int64 a2)
{
  sub_18009702C((__int64 *)a1, *(char **)a2, *(char **)(a2 + 8));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_18001246C((_QWORD *)(a1 + 32), (_QWORD *)(a2 + 32));
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 48));
  Mtx_unlock((_Mtx_t)(a1 + 48));
  return a1;
}
