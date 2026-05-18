/*
 * XREFs of sub_180097570 @ 0x180097570
 * Callers:
 *     sub_18007048C @ 0x18007048C (sub_18007048C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 *     sub_180097288 @ 0x180097288 (sub_180097288.c)
 *     sub_1800973B4 @ 0x1800973B4 (sub_1800973B4.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180097570(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rcx

  sub_1800973B4((__int64 *)a1, a2);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_180027964((__int64 *)a1);
  v6 = *(_QWORD **)(a1 + 8);
  if ( v6 == *(_QWORD **)(a1 + 16) )
  {
    sub_180097288((char **)a1, *(char **)(a1 + 8), a3);
  }
  else
  {
    sub_18001246C(v6, a3);
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  Mtx_unlock((_Mtx_t)(a1 + 48));
  v7 = a3[1];
  if ( v7 )
    sub_180010530(v7);
  return a1;
}
