/*
 * XREFs of sub_1800F69A0 @ 0x1800F69A0
 * Callers:
 *     sub_1800F99F0 @ 0x1800F99F0 (sub_1800F99F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800F6120 @ 0x1800F6120 (sub_1800F6120.c)
 *     sub_1800F6150 @ 0x1800F6150 (sub_1800F6150.c)
 *     sub_1800F619C @ 0x1800F619C (sub_1800F619C.c)
 *     sub_1800F6860 @ 0x1800F6860 (sub_1800F6860.c)
 *     sub_1800F8A14 @ 0x1800F8A14 (sub_1800F8A14.c)
 *     sub_1800F9A88 @ 0x1800F9A88 (sub_1800F9A88.c)
 *     sub_1800FA89C @ 0x1800FA89C (sub_1800FA89C.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 *     sub_1800FAC60 @ 0x1800FAC60 (sub_1800FAC60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800F69A0(__int64 a1, _QWORD *a2, char **a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r12
  _QWORD *v12; // rdx
  unsigned int v13; // edi
  __int64 *v14; // rax
  __int64 v15; // r14
  __int64 v16; // r8
  char **v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rcx
  char *v20; // rax
  char v21; // r12
  __int64 *v22; // rdi
  __int64 *v23; // rax
  unsigned __int64 v24; // rdx
  char *v26; // rax
  char v27; // r14
  __int64 *v28; // rdi
  __int64 *v29; // rax
  __int64 *v30; // rdi
  __int64 *v31; // rax
  __int64 v32[4]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v33[6]; // [rsp+50h] [rbp-79h] BYREF
  char *v34[3]; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-31h]
  char *v36[3]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int64 v37; // [rsp+B8h] [rbp-11h]
  char *v38[3]; // [rsp+C0h] [rbp-9h] BYREF
  unsigned __int64 v39; // [rsp+D8h] [rbp+Fh]

  v33[5] = (__int64)a3;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v33[4] = a1 + 64;
  v9 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v9 )
    std::_Throw_C_error(v9);
  (*(void (__fastcall **)(__int64, char **, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v38, a2);
  v10 = sub_1800F8A14(a1 + 144, v38);
  v11 = v10;
  v12 = a2;
  if ( a2[3] >= 8uLL )
    v12 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1800FAB78(v10, v12) )
  {
    v13 = 2;
    if ( a4 == 2 )
    {
      v13 = 3;
    }
    else
    {
      v14 = sub_1800129F4(v33, (__int64)a2);
      v15 = sub_1800FA89C(v11, v14);
      if ( (unsigned __int8)sub_1800FAC60(v15) )
      {
        sub_18001FB6C((__int64 *)v34, L"Value", v16);
        v17 = v34;
        if ( v35 >= 8 )
          v17 = (char **)v34[0];
        if ( (unsigned __int8)sub_1800FAB78(v15, v17)
          && (v18 = sub_1800129F4(v32, (__int64)v34), sub_1800FA89C(v15, v18), (unsigned __int8)sub_1800F619C()) )
        {
          v20 = (char *)sub_1800F6150((__int64)v36, v19);
          v21 = sub_1800F6120(v20, a3);
          if ( v37 >= 8 )
            sub_180010884(v36[0], 2 * v37 + 2);
          if ( v21 )
          {
            v22 = sub_1800129F4(v32, (__int64)a3);
            v23 = sub_1800129F4((__int64 *)v36, (__int64)v34);
            sub_1800F6860(v15, (__int64)v23, (__int64)v22);
            v13 = 1;
          }
        }
        else
        {
          v13 = 5;
        }
        if ( v35 >= 8 )
          sub_180010884(v34[0], 2 * v35 + 2);
      }
      else if ( (unsigned __int8)sub_1800F619C() )
      {
        v26 = (char *)sub_1800F6150((__int64)v36, v15);
        v27 = sub_1800F6120(v26, a3);
        if ( v37 >= 8 )
          sub_180010884(v36[0], 2 * v37 + 2);
        if ( v27 )
        {
          v28 = sub_1800129F4(v32, (__int64)a3);
          v29 = sub_1800129F4(v33, (__int64)a2);
          sub_1800F6860(v11, (__int64)v29, (__int64)v28);
          v13 = 1;
        }
      }
      else
      {
        v13 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v30 = sub_1800129F4(v32, (__int64)a3);
    v31 = sub_1800129F4(v33, (__int64)a2);
    sub_1800F6860(v11, (__int64)v31, (__int64)v30);
    v13 = 0;
  }
  else
  {
    v13 = 4;
  }
  if ( v39 >= 8 )
    sub_180010884(v38[0], 2 * v39 + 2);
  v38[2] = 0LL;
  v39 = 7LL;
  LOWORD(v38[0]) = 0;
  Mtx_unlock(v8);
  if ( v13 <= 1 )
    sub_1800F9A88(a1, a2);
  v24 = (unsigned __int64)a3[3];
  if ( v24 >= 8 )
    sub_180010884(*a3, 2 * v24 + 2);
  a3[2] = 0LL;
  a3[3] = (char *)7;
  *(_WORD *)a3 = 0;
  return v13;
}
