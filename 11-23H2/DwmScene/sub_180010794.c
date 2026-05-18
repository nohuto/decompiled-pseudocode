/*
 * XREFs of sub_180010794 @ 0x180010794
 * Callers:
 *     sub_18001071C @ 0x18001071C (sub_18001071C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010C7C @ 0x180010C7C (sub_180010C7C.c)
 *     sub_180011060 @ 0x180011060 (sub_180011060.c)
 *     sub_180011C00 @ 0x180011C00 (sub_180011C00.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180010794(_QWORD *a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  _QWORD v6[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v11; // [rsp+88h] [rbp+20h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  v11 = a1 + 2;
  sub_180011C7C(a1 + 2);
  v9 = _std_type_info_hash(&qword_1801C8C30);
  sub_180011C00(a1, &v10, &v9);
  if ( v10 == *a1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180011060(v10 + 40, v7);
    sub_180010C7C(v6, v7);
    *a2 = v6[0];
    a2[1] = v6[1];
    if ( v8 )
      sub_180010530(v8);
  }
  Mtx_unlock(v4);
  return a2;
}
