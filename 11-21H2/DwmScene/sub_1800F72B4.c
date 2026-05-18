/*
 * XREFs of sub_1800F72B4 @ 0x1800F72B4
 * Callers:
 *     sub_1800F72B4 @ 0x1800F72B4 (sub_1800F72B4.c)
 *     sub_1800F8FF0 @ 0x1800F8FF0 (sub_1800F8FF0.c)
 *     sub_1800F9BF0 @ 0x1800F9BF0 (sub_1800F9BF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 *     sub_1800F6144 @ 0x1800F6144 (sub_1800F6144.c)
 *     sub_1800F6190 @ 0x1800F6190 (sub_1800F6190.c)
 *     sub_1800F72B4 @ 0x1800F72B4 (sub_1800F72B4.c)
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800FA89C @ 0x1800FA89C (sub_1800FA89C.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 *     sub_1800FAC60 @ 0x1800FAC60 (sub_1800FAC60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800F72B4(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // xmm0_8
  struct _Mtx_internal_imp_t *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rdx
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  char **v16; // rdx
  __int64 *v17; // rax
  __int64 v19[5]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v20[4]; // [rsp+48h] [rbp-21h] BYREF
  char *v21[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v22; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v23; // [rsp+80h] [rbp+17h]

  v7 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v19[4] = a1 + 64;
  v8 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v8 )
    std::_Throw_C_error(v8);
  v9 = (*(__int64 (__fastcall **)(__int64, char **, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v21, a2);
  v10 = sub_1800F88AC(a1 + 144, v9);
  if ( v23 >= 8 )
    sub_180010884(v21[0], 2 * v23 + 2);
  v22 = 0LL;
  v23 = 7LL;
  LOWORD(v21[0]) = 0;
  v11 = a2;
  if ( a2[3] >= 8uLL )
    v11 = (_QWORD *)*a2;
  if ( !(unsigned __int8)sub_1800FAB78(v10, v11) )
  {
    sub_1800465B0(a1, v19);
    if ( v19[0] )
      v12 = sub_1800F72B4(v19[0], a2, a3);
    else
      v12 = 2;
    sub_180010910((__int64)v19);
    goto LABEL_25;
  }
  v13 = sub_1800129F4(v20, (__int64)a2);
  v14 = sub_1800FA89C(v10, v13);
  if ( (unsigned __int8)sub_1800FAC60(v14) )
  {
    sub_18001FB6C((__int64 *)v21, L"Value", v15);
    v16 = v21;
    if ( v23 >= 8 )
      v16 = (char **)v21[0];
    if ( (unsigned __int8)sub_1800FAB78(v14, v16) )
    {
      v17 = sub_1800129F4(v19, (__int64)v21);
      sub_1800FA89C(v14, v17);
      if ( (unsigned __int8)sub_1800F6190() )
      {
        sub_1800F6144();
        *a3 = v3;
        if ( v23 >= 8 )
          sub_180010884(v21[0], 2 * v23 + 2);
        v22 = 0LL;
        v23 = 7LL;
        LOWORD(v21[0]) = 0;
        v12 = 0;
        goto LABEL_25;
      }
    }
    if ( v23 >= 8 )
      sub_180010884(v21[0], 2 * v23 + 2);
    v22 = 0LL;
    v23 = 7LL;
    LOWORD(v21[0]) = 0;
    goto LABEL_24;
  }
  if ( !(unsigned __int8)sub_1800F6190() )
  {
LABEL_24:
    v12 = 1;
LABEL_25:
    Mtx_unlock(v7);
    return v12;
  }
  *a3 = *(_QWORD *)(v14 + 48);
  Mtx_unlock(v7);
  return 0LL;
}
