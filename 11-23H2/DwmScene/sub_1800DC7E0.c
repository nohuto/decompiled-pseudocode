/*
 * XREFs of sub_1800DC7E0 @ 0x1800DC7E0
 * Callers:
 *     sub_1800DEF90 @ 0x1800DEF90 (sub_1800DEF90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_1800DC0D8 @ 0x1800DC0D8 (sub_1800DC0D8.c)
 *     sub_1800DC130 @ 0x1800DC130 (sub_1800DC130.c)
 *     sub_1800DC17C @ 0x1800DC17C (sub_1800DC17C.c)
 *     sub_1800DC718 @ 0x1800DC718 (sub_1800DC718.c)
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DF000 @ 0x1800DF000 (sub_1800DF000.c)
 *     sub_1800DFA18 @ 0x1800DFA18 (sub_1800DFA18.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 *     sub_1800DFC44 @ 0x1800DFC44 (sub_1800DFC44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800DC7E0(__int64 a1, _QWORD *a2, __int64 **a3, int a4)
{
  __int64 v7; // r14
  struct _Mtx_internal_imp_t *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r13
  _QWORD *v11; // rdx
  unsigned int v12; // esi
  _QWORD *v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  char v19; // di
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  char v23; // di
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  _QWORD v30[5]; // [rsp+38h] [rbp-91h] BYREF
  _QWORD v31[5]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v32[4]; // [rsp+88h] [rbp-41h] BYREF
  _QWORD v33[4]; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v34[32]; // [rsp+C8h] [rbp-1h] BYREF

  v7 = a1;
  v31[4] = a3;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v30[4] = a1 + 64;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 64));
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v7 + 56LL))(v7, v34, a2);
  v9 = (_QWORD *)sub_1800DDA48(v7 + 144, v33, v34);
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
      v13 = sub_180012440(v31, (__int64)a2);
      v14 = sub_1800DFA18(v10, v13);
      if ( (unsigned __int8)sub_1800DFC44(v14) )
      {
        sub_18001E3BC(v33, (__int64)L"Value");
        v15 = v33;
        if ( v33[3] >= 8uLL )
          v15 = (_QWORD *)v33[0];
        if ( (unsigned __int8)sub_1800DFB78(v14, v15)
          && (v16 = sub_180012440(v30, (__int64)v33), sub_1800DFA18(v14, v16), (unsigned __int8)sub_1800DC17C()) )
        {
          v18 = (_QWORD *)sub_1800DC130((__int64)v32, v17);
          v19 = sub_1800DC0D8(v18, a3);
          sub_180013348((__int64)v32);
          if ( v19 )
          {
            v20 = sub_180012440(v32, (__int64)a3);
            v21 = sub_180012440(v30, (__int64)v33);
            sub_1800DC718(v14, v21, (__int64)v20);
            v12 = 1;
          }
        }
        else
        {
          v12 = 5;
        }
        sub_180013348((__int64)v33);
      }
      else if ( (unsigned __int8)sub_1800DC17C() )
      {
        v22 = (_QWORD *)sub_1800DC130((__int64)v32, v14);
        v23 = sub_1800DC0D8(v22, a3);
        sub_180013348((__int64)v32);
        if ( v23 )
        {
          v24 = sub_180012440(v32, (__int64)a3);
          v25 = sub_180012440(v30, (__int64)a2);
          sub_1800DC718(v10, v25, (__int64)v24);
          v12 = 1;
        }
      }
      else
      {
        v12 = 5;
      }
      v7 = a1;
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v26 = sub_180012440(v32, (__int64)a3);
    v27 = sub_180012440(v30, (__int64)a2);
    sub_1800DC718(v10, v27, (__int64)v26);
    v12 = 0;
  }
  else
  {
    v12 = 4;
  }
  sub_180013348((__int64)v34);
  Mtx_unlock(v8);
  if ( v12 <= 1 )
    sub_1800DF000(v7, a2);
  sub_180013348((__int64)a3);
  return v12;
}
