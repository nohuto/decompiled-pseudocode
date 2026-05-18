/*
 * XREFs of sub_1800F7828 @ 0x1800F7828
 * Callers:
 *     sub_1800F7828 @ 0x1800F7828 (sub_1800F7828.c)
 *     sub_1800F8FB0 @ 0x1800F8FB0 (sub_1800F8FB0.c)
 *     sub_1800F9BE0 @ 0x1800F9BE0 (sub_1800F9BE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800465B0 @ 0x1800465B0 (sub_1800465B0.c)
 *     sub_1800F6178 @ 0x1800F6178 (sub_1800F6178.c)
 *     sub_1800F61A8 @ 0x1800F61A8 (sub_1800F61A8.c)
 *     sub_1800F7828 @ 0x1800F7828 (sub_1800F7828.c)
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800FA89C @ 0x1800FA89C (sub_1800FA89C.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 *     sub_1800FAC60 @ 0x1800FAC60 (sub_1800FAC60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F7828(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rdx
  unsigned int v11; // edi
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r8
  char **v15; // rdx
  __int64 *v16; // rax
  __int64 v18[5]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v19[4]; // [rsp+48h] [rbp-21h] BYREF
  char *v20[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v21; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v22; // [rsp+80h] [rbp+17h]

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v18[4] = a1 + 64;
  v7 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = (*(__int64 (__fastcall **)(__int64, char **, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v20, a2);
  v9 = sub_1800F88AC(a1 + 144, v8);
  if ( v22 >= 8 )
    sub_180010884(v20[0], 2 * v22 + 2);
  v21 = 0LL;
  v22 = 7LL;
  LOWORD(v20[0]) = 0;
  v10 = a2;
  if ( a2[3] >= 8uLL )
    v10 = (_QWORD *)*a2;
  if ( !(unsigned __int8)sub_1800FAB78(v9, v10) )
  {
    sub_1800465B0(a1, v18);
    if ( v18[0] )
      v11 = sub_1800F7828(v18[0], a2, a3);
    else
      v11 = 2;
    sub_180010910((__int64)v18);
    goto LABEL_25;
  }
  v12 = sub_1800129F4(v19, (__int64)a2);
  v13 = sub_1800FA89C(v9, v12);
  if ( (unsigned __int8)sub_1800FAC60(v13) )
  {
    sub_18001FB6C((__int64 *)v20, L"Value", v14);
    v15 = v20;
    if ( v22 >= 8 )
      v15 = (char **)v20[0];
    if ( (unsigned __int8)sub_1800FAB78(v13, v15) )
    {
      v16 = sub_1800129F4(v18, (__int64)v20);
      sub_1800FA89C(v13, v16);
      if ( (unsigned __int8)sub_1800F61A8() )
      {
        *a3 = sub_1800F6178();
        if ( v22 >= 8 )
          sub_180010884(v20[0], 2 * v22 + 2);
        v21 = 0LL;
        v22 = 7LL;
        LOWORD(v20[0]) = 0;
        v11 = 0;
        goto LABEL_25;
      }
    }
    if ( v22 >= 8 )
      sub_180010884(v20[0], 2 * v22 + 2);
    v21 = 0LL;
    v22 = 7LL;
    LOWORD(v20[0]) = 0;
    goto LABEL_24;
  }
  if ( !(unsigned __int8)sub_1800F61A8() )
  {
LABEL_24:
    v11 = 1;
LABEL_25:
    Mtx_unlock(v6);
    return v11;
  }
  *a3 = *(_BYTE *)(v13 + 60);
  Mtx_unlock(v6);
  return 0LL;
}
