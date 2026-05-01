/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18008660C
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x180086434 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x18008686C (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180086A50 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x180086C9C (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     TestReport @ 0x1800BCD68 (TestReport.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<0,0,0>::evaluate_and_report(__int64 a1, __int64 a2)
{
  void (__fastcall ***v4)(_QWORD); // rcx
  char v5; // cl
  unsigned __int8 v6; // al
  char v7; // dl
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // ecx
  const struct wil::FailureInfo *error; // rax
  void (__fastcall ***v13)(_QWORD); // rcx
  const struct tip2::test_requirement *v14; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h]
  int v17; // [rsp+40h] [rbp-C0h]
  __int128 v18; // [rsp+44h] [rbp-BCh]
  int v19; // [rsp+54h] [rbp-ACh]
  char v20; // [rsp+58h] [rbp-A8h]
  __int16 v21; // [rsp+5Ah] [rbp-A6h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int16 v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+9Ch] [rbp-64h]
  int v29; // [rsp+A0h] [rbp-60h]
  LPVOID pv; // [rsp+B0h] [rbp-50h] BYREF
  char v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+B9h] [rbp-47h] BYREF
  char v33; // [rsp+BDh] [rbp-43h]
  char v34; // [rsp+BEh] [rbp-42h] BYREF
  char v35; // [rsp+8B9h] [rbp+7B9h] BYREF
  int *v36; // [rsp+8C0h] [rbp+7C0h]
  char *v37; // [rsp+8C8h] [rbp+7C8h]
  char *v38; // [rsp+8D0h] [rbp+7D0h]

  if ( !*(_BYTE *)(a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 8),
         *(const struct tip2::test_state **)(a1 + 40),
         *(const struct tip2::test_requirement **)(a1 + 56),
         *(const struct tip2::test_requirement **)(a1 + 48),
         v14) )
  {
    v4 = *(void (__fastcall ****)(_QWORD))a1;
    if ( tip2::details::g_test_interface_exception_guard )
    {
      if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v4, 0LL, 0LL, 0LL, 0LL)
        && !*(_BYTE *)(a1 + 160) )
      {
        *(_BYTE *)(a1 + 160) = 3;
        *(_WORD *)(a1 + 162) = 16395;
        *(_QWORD *)(a1 + 168) = 0LL;
      }
    }
    else
    {
      (**v4)(v4);
    }
  }
  v5 = *(_BYTE *)(a1 + 160);
  if ( v5 )
  {
    if ( (unsigned __int8)(v5 - 2) > 1u && ((*(_DWORD *)(a1 + 20) & 0x1000) == 0 || v5 == 4) )
      goto LABEL_28;
  }
  else
  {
    *(_BYTE *)(a1 + 160) = 3;
    *(_WORD *)(a1 + 162) = 16394;
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x800) != 0 )
  {
    v6 = 1;
    goto LABEL_11;
  }
LABEL_28:
  v6 = 0;
LABEL_11:
  v7 = v6;
  v8 = v6 | 2;
  if ( (*(_DWORD *)(a1 + 20) & 0x200) == 0 )
    v8 = v6;
  pv = 0LL;
  v31 = 0;
  v36 = &v32;
  v38 = &v35;
  v32 = -2143256512;
  v33 = 0;
  v37 = &v34;
  if ( (*(_DWORD *)(a1 + 20) & 0x200) != 0 )
    v7 = 1;
  v9 = v8 | 4;
  if ( !v7 )
    v9 = v8;
  v10 = tip2::details::shared_data<0,0,0>::serialize_data(a1, &pv, v9);
  memset_0(&v15, 0, 0x78uLL);
  v11 = *(_DWORD *)(a1 + 180);
  if ( v11 )
    v15 = *(_DWORD *)(a1 + 180);
  else
    v15 = *(_DWORD *)(a1 + 16);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(_DWORD *)(a1 + 20);
  v18 = *(_OWORD *)(a1 + 144);
  v19 = *(_DWORD *)(a1 + 64) | 0x200000;
  v20 = *(_BYTE *)(a1 + 160);
  v21 = *(_WORD *)(a1 + 162);
  v22 = *(_QWORD *)(a1 + 168);
  v23 = a2;
  v24 = v10;
  v28 = *(_DWORD *)(a1 + 176);
  if ( v11 )
    v29 = *(_DWORD *)(a1 + 16);
  else
    v29 = 0;
  error = tip2::test_state::last_error((tip2::test_state *)(a1 + 8));
  if ( error )
  {
    v25 = *((_DWORD *)error + 2);
    v26 = *((_QWORD *)error + 7);
    v27 = *((_WORD *)error + 32);
  }
  TestReport(&v15);
  v13 = *(void (__fastcall ****)(_QWORD))a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v13, 0LL, 0LL, 0LL, &v15) )
    {
      v21 = 16398;
      v20 = 3;
      TestReport(&v15);
    }
  }
  else
  {
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD), int *))(*v13)[3])(v13, &v15);
  }
  if ( pv )
    CoTaskMemFree(pv);
}
