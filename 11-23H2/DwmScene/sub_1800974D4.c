/*
 * XREFs of sub_1800974D4 @ 0x1800974D4
 * Callers:
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 *     sub_1800973B4 @ 0x1800973B4 (sub_1800973B4.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800974D4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx

  sub_1800973B4((__int64 *)a1, a2);
  *(_QWORD *)(a1 + 24) = a2;
  sub_18001246C((_QWORD *)(a1 + 32), a3);
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_180027964((__int64 *)a1);
  Mtx_unlock((_Mtx_t)(a1 + 48));
  v6 = a3[1];
  if ( v6 )
    sub_180010530(v6);
  return a1;
}
