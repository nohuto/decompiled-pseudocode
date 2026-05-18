/*
 * XREFs of sub_180078CD0 @ 0x180078CD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_18001FE44 @ 0x18001FE44 (sub_18001FE44.c)
 *     sub_180020E2C @ 0x180020E2C (sub_180020E2C.c)
 *     sub_180079984 @ 0x180079984 (sub_180079984.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180078CD0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 *v6; // rax
  char v7; // bl
  char result; // al
  __int64 *v9; // rax
  char v10; // di
  struct _Mtx_internal_imp_t *v11; // rbx
  int v12; // eax
  char *v13[2]; // [rsp+28h] [rbp-51h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-41h]
  unsigned __int64 v15; // [rsp+40h] [rbp-39h]
  char *v16[3]; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-19h]
  char *v18[3]; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+7h]
  char *v20; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp+27h]

  sub_18001FB6C((__int64 *)v18, L"Camera.", a3);
  sub_18001FB6C((__int64 *)v13, L"/Internal/Camera.", v5);
  v6 = sub_180020E2C(a2, (__int64 *)&v20, 0LL, (unsigned __int64)v18[2]);
  v7 = 1;
  result = sub_18001FE44((char *)v6, v18);
  if ( result
    || (v9 = sub_180020E2C(a2, (__int64 *)v16, 0LL, v14),
        v7 = 3,
        result = sub_18001FE44((char *)v9, v13),
        v10 = 0,
        result) )
  {
    v10 = 1;
  }
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v17 >= 8 )
      result = sub_180010884(v16[0], 2 * v17 + 2);
    v16[2] = 0LL;
    v17 = 7LL;
    LOWORD(v16[0]) = 0;
  }
  if ( (v7 & 1) != 0 && v21 >= 8 )
    result = sub_180010884(v20, 2 * v21 + 2);
  if ( v10 )
  {
    v11 = (struct _Mtx_internal_imp_t *)(*(_QWORD *)(a1 + 8) + 1552LL);
    v12 = Mtx_lock(v11);
    if ( v12 )
      std::_Throw_C_error(v12);
    sub_180079984(*(_QWORD *)(a1 + 8) + 1488LL, v16, a2);
    result = Mtx_unlock(v11);
  }
  if ( v15 >= 8 )
    result = sub_180010884(v13[0], 2 * v15 + 2);
  v14 = 0LL;
  v15 = 7LL;
  LOWORD(v13[0]) = 0;
  if ( v19 >= 8 )
    return sub_180010884(v18[0], 2 * v19 + 2);
  return result;
}
