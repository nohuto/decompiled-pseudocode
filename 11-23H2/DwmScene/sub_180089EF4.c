/*
 * XREFs of sub_180089EF4 @ 0x180089EF4
 * Callers:
 *     sub_180089E7C @ 0x180089E7C (sub_180089E7C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011060 @ 0x180011060 (sub_180011060.c)
 *     sub_180011C00 @ 0x180011C00 (sub_180011C00.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18008A6A4 @ 0x18008A6A4 (sub_18008A6A4.c)
 */

_QWORD *__fastcall sub_180089EF4(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  _QWORD v6[2]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  v11 = a1 + 16;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 16));
  v9 = _std_type_info_hash(&qword_1801C9C40);
  sub_180011C00((__int64 *)a1, (__int64)&v10, (unsigned __int64 *)&v9);
  if ( v10 == *(_QWORD *)a1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180011060(v10 + 40, (__int64)v7);
    sub_18008A6A4(v6, v7);
    *a2 = v6[0];
    a2[1] = v6[1];
    if ( v8 )
      sub_180010530(v8);
  }
  Mtx_unlock(v4);
  return a2;
}
