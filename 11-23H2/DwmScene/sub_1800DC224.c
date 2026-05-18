/*
 * XREFs of sub_1800DC224 @ 0x1800DC224
 * Callers:
 *     sub_1800DEF80 @ 0x1800DEF80 (sub_1800DEF80.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18001E3BC @ 0x18001E3BC (sub_18001E3BC.c)
 *     sub_1800DC118 @ 0x1800DC118 (sub_1800DC118.c)
 *     j_?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x1800DC164 (j_-IsContext@WorkItem@details@Concurrency@@QEBA_NXZ.c)
 *     sub_1800DC194 @ 0x1800DC194 (sub_1800DC194.c)
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DF000 @ 0x1800DF000 (sub_1800DF000.c)
 *     sub_1800DFA18 @ 0x1800DFA18 (sub_1800DFA18.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 *     sub_1800DFC44 @ 0x1800DFC44 (sub_1800DFC44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DC224(__int64 a1, _QWORD *a2, int a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rdx
  unsigned int v12; // edi
  _QWORD *v13; // rax
  __int64 v14; // rsi
  Concurrency::details::WorkItem *v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  Concurrency::details::WorkItem *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD v23[5]; // [rsp+28h] [rbp-71h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v25[4]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v26[32]; // [rsp+90h] [rbp-9h] BYREF

  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v23[4] = a1 + 64;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 64));
  (*(void (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v26, a2);
  v9 = (_QWORD *)sub_1800DDA48(a1 + 144, v25, v26);
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
      v13 = sub_180012440(v24, (__int64)a2);
      v14 = sub_1800DFA18(v10, v13);
      if ( (unsigned __int8)sub_1800DFC44(v14) )
      {
        sub_18001E3BC(v25, (__int64)L"Value");
        v16 = v25;
        if ( v25[3] >= 8uLL )
          v16 = (_QWORD *)v25[0];
        if ( (unsigned __int8)sub_1800DFB78(v14, v16)
          && (v17 = sub_180012440(v23, (__int64)v25),
              v18 = (Concurrency::details::WorkItem *)sub_1800DFA18(v14, v17),
              Concurrency::details::WorkItem::IsContext(v18)) )
        {
          if ( (unsigned int)sub_1800DC118() != a3 )
          {
            v19 = sub_180012440(v23, (__int64)v25);
            sub_1800DC194(v14, v19, a3);
            v12 = 1;
          }
        }
        else
        {
          v12 = 5;
        }
        sub_180013348((__int64)v25);
      }
      else if ( Concurrency::details::WorkItem::IsContext(v15) )
      {
        if ( (unsigned int)sub_1800DC118() != a3 )
        {
          v20 = sub_180012440(v23, (__int64)a2);
          sub_1800DC194(v10, v20, a3);
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
    v21 = sub_180012440(v23, (__int64)a2);
    sub_1800DC194(v10, v21, a3);
    v12 = 0;
  }
  else
  {
    v12 = 4;
  }
  sub_180013348((__int64)v26);
  Mtx_unlock(v8);
  if ( v12 <= 1 )
    sub_1800DF000(a1, a2);
  return v12;
}
