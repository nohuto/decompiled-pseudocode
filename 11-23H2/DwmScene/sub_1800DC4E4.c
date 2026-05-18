/*
 * XREFs of sub_1800DC4E4 @ 0x1800DC4E4
 * Callers:
 *     sub_1800DEF50 @ 0x1800DEF50 (sub_1800DEF50.c)
 *     sub_1800DEF60 @ 0x1800DEF60 (sub_1800DEF60.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_1800DC124 @ 0x1800DC124 (sub_1800DC124.c)
 *     sub_1800DC170 @ 0x1800DC170 (sub_1800DC170.c)
 *     sub_1800DC450 @ 0x1800DC450 (sub_1800DC450.c)
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DF000 @ 0x1800DF000 (sub_1800DF000.c)
 *     sub_1800DFA18 @ 0x1800DFA18 (sub_1800DFA18.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 *     sub_1800DFC44 @ 0x1800DFC44 (sub_1800DFC44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DC4E4(__int64 a1, _QWORD *a2, double a3, int a4)
{
  double v4; // xmm0_8
  struct _Mtx_internal_imp_t *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r15
  _QWORD *v11; // rdx
  unsigned int v12; // edi
  _QWORD *v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD v21[5]; // [rsp+30h] [rbp-81h] BYREF
  _QWORD v22[4]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v23[4]; // [rsp+78h] [rbp-39h] BYREF
  _BYTE v24[32]; // [rsp+98h] [rbp-19h] BYREF

  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v21[4] = a1 + 64;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 64));
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v24, a2);
  v9 = (_QWORD *)sub_1800DDA48(a1 + 144, v23, v24);
  v10 = *v9 + 64LL;
  v11 = a2;
  if ( a2[3] >= 8uLL )
    v11 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1800DFB78(*v9 + 64LL, v11) )
  {
    v12 = 2;
    if ( a4 == 2 )
    {
      v12 = 3;
    }
    else
    {
      v13 = sub_180012440(v22, (__int64)a2);
      v14 = sub_1800DFA18(v10, v13);
      if ( (unsigned __int8)sub_1800DFC44(v14) )
      {
        sub_18001E3BC(v23, (__int64)L"Value");
        v15 = v23;
        if ( v23[3] >= 8uLL )
          v15 = (_QWORD *)v23[0];
        if ( (unsigned __int8)sub_1800DFB78(v14, v15)
          && (v16 = sub_180012440(v21, (__int64)v23), sub_1800DFA18(v14, v16), (unsigned __int8)sub_1800DC170()) )
        {
          sub_1800DC124();
          if ( v4 != a3 )
          {
            v17 = sub_180012440(v21, (__int64)v23);
            sub_1800DC450(v14, v17, a3);
            v12 = 1;
          }
        }
        else
        {
          v12 = 5;
        }
        sub_180013348((__int64)v23);
      }
      else if ( (unsigned __int8)sub_1800DC170() )
      {
        sub_1800DC124();
        if ( v4 != a3 )
        {
          v18 = sub_180012440(v21, (__int64)a2);
          sub_1800DC450(v10, v18, a3);
          v12 = 1;
        }
      }
      else
      {
        v12 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v19 = sub_180012440(v21, (__int64)a2);
    sub_1800DC450(v10, v19, a3);
    v12 = 0;
  }
  else
  {
    v12 = 4;
  }
  sub_180013348((__int64)v24);
  Mtx_unlock(v8);
  if ( v12 <= 1 )
    sub_1800DF000(a1, a2);
  return v12;
}
