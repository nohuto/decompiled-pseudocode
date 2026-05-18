/*
 * XREFs of sub_1800F6DE4 @ 0x1800F6DE4
 * Callers:
 *     sub_1800F99A0 @ 0x1800F99A0 (sub_1800F99A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_18001FB6C @ 0x18001FB6C (sub_18001FB6C.c)
 *     sub_1800F6178 @ 0x1800F6178 (sub_1800F6178.c)
 *     sub_1800F61A8 @ 0x1800F61A8 (sub_1800F61A8.c)
 *     sub_1800F6D10 @ 0x1800F6D10 (sub_1800F6D10.c)
 *     sub_1800F8A14 @ 0x1800F8A14 (sub_1800F8A14.c)
 *     sub_1800F9A88 @ 0x1800F9A88 (sub_1800F9A88.c)
 *     sub_1800FA89C @ 0x1800FA89C (sub_1800FA89C.c)
 *     sub_1800FAB78 @ 0x1800FAB78 (sub_1800FAB78.c)
 *     sub_1800FAC60 @ 0x1800FAC60 (sub_1800FAC60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F6DE4(__int64 a1, _QWORD *a2, char a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r12
  _QWORD *v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r8
  char **v17; // rdx
  __int64 *v18; // rax
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 v24; // r8
  __int64 v26[5]; // [rsp+28h] [rbp-71h] BYREF
  __int64 v27[4]; // [rsp+50h] [rbp-49h] BYREF
  char *v28[3]; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-11h]
  char *v30[3]; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp+Fh]

  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v26[4] = a1 + 64;
  v9 = Mtx_lock((_Mtx_t)(a1 + 64));
  v10 = 0;
  if ( v9 )
    std::_Throw_C_error(v9);
  (*(void (__fastcall **)(__int64, char **, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v30, a2);
  v11 = sub_1800F8A14(a1 + 144, v30);
  v12 = v11;
  v13 = a2;
  if ( a2[3] >= 8uLL )
    v13 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1800FAB78(v11, v13) )
  {
    v10 = 2;
    if ( a4 == 2 )
    {
      v10 = 3;
    }
    else
    {
      v14 = sub_1800129F4(v27, (__int64)a2);
      v15 = sub_1800FA89C(v12, v14);
      if ( (unsigned __int8)sub_1800FAC60(v15) )
      {
        sub_18001FB6C((__int64 *)v28, L"Value", v16);
        v17 = v28;
        if ( v29 >= 8 )
          v17 = (char **)v28[0];
        if ( (unsigned __int8)sub_1800FAB78(v15, v17)
          && (v18 = sub_1800129F4(v26, (__int64)v28), sub_1800FA89C(v15, v18), (unsigned __int8)sub_1800F61A8()) )
        {
          if ( (unsigned __int8)sub_1800F6178() != a3 )
          {
            v19 = sub_1800129F4(v26, (__int64)v28);
            LOBYTE(v20) = a3;
            sub_1800F6D10(v15, (char *)v19, v20);
            v10 = 1;
          }
        }
        else
        {
          v10 = 5;
        }
        if ( v29 >= 8 )
          sub_180010884(v28[0], 2 * v29 + 2);
      }
      else if ( (unsigned __int8)sub_1800F61A8() )
      {
        if ( (unsigned __int8)sub_1800F6178() != a3 )
        {
          v21 = sub_1800129F4(v26, (__int64)a2);
          LOBYTE(v22) = a3;
          sub_1800F6D10(v12, (char *)v21, v22);
          v10 = 1;
        }
      }
      else
      {
        v10 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v23 = sub_1800129F4(v26, (__int64)a2);
    LOBYTE(v24) = a3;
    sub_1800F6D10(v12, (char *)v23, v24);
  }
  else
  {
    v10 = 4;
  }
  if ( v31 >= 8 )
    sub_180010884(v30[0], 2 * v31 + 2);
  v30[2] = 0LL;
  v31 = 7LL;
  LOWORD(v30[0]) = 0;
  Mtx_unlock(v8);
  if ( v10 <= 1 )
    sub_1800F9A88(a1, a2);
  return v10;
}
