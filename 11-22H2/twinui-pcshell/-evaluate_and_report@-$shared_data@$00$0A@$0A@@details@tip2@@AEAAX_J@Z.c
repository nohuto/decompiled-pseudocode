/*
 * XREFs of ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x18046C7E4
 * Callers:
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1801B3F00 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800133CC (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x18008686C (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x180086C9C (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     TestReport @ 0x1800BCD68 (TestReport.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?evaluate@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18046C204 (-evaluate@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<1,0,0>::evaluate_and_report(__int64 a1, __int64 a2)
{
  char v4; // cl
  unsigned __int8 v5; // al
  char v6; // dl
  int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // rsi
  int v10; // ecx
  const struct wil::FailureInfo *error; // rax
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  int v15; // [rsp+40h] [rbp-C0h]
  __int128 v16; // [rsp+44h] [rbp-BCh]
  int v17; // [rsp+54h] [rbp-ACh]
  char v18; // [rsp+58h] [rbp-A8h]
  __int16 v19; // [rsp+5Ah] [rbp-A6h]
  __int64 v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  int v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int16 v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+9Ch] [rbp-64h]
  int v27; // [rsp+A0h] [rbp-60h]
  LPVOID pv; // [rsp+B0h] [rbp-50h] BYREF
  char v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+B9h] [rbp-47h] BYREF
  char v31; // [rsp+BDh] [rbp-43h]
  char v32; // [rsp+BEh] [rbp-42h] BYREF
  char v33; // [rsp+8B9h] [rbp+7B9h] BYREF
  int *v34; // [rsp+8C0h] [rbp+7C0h]
  char *v35; // [rsp+8C8h] [rbp+7C8h]
  char *v36; // [rsp+8D0h] [rbp+7D0h]

  if ( !*(_BYTE *)(a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 8),
         *(const struct tip2::test_state **)(a1 + 40),
         *(const struct tip2::test_requirement **)(a1 + 56),
         *(const struct tip2::test_requirement **)(a1 + 48)) )
  {
    tip2::details::shared_data<1,0,0>::evaluate(a1);
  }
  v4 = *(_BYTE *)(a1 + 160);
  if ( v4 )
  {
    if ( (unsigned __int8)(v4 - 2) > 1u && ((*(_DWORD *)(a1 + 20) & 0x1000) == 0 || v4 == 4) )
      goto LABEL_11;
  }
  else
  {
    *(_BYTE *)(a1 + 160) = 3;
    *(_WORD *)(a1 + 162) = 16394;
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x800) != 0 )
  {
    v5 = 1;
    goto LABEL_12;
  }
LABEL_11:
  v5 = 0;
LABEL_12:
  v6 = v5;
  v7 = v5 | 2;
  if ( (*(_DWORD *)(a1 + 20) & 0x200) == 0 )
    v7 = v5;
  pv = 0LL;
  v29 = 0;
  v34 = &v30;
  v36 = &v33;
  v30 = -2143256512;
  v31 = 0;
  v35 = &v32;
  if ( (*(_DWORD *)(a1 + 20) & 0x200) != 0 )
    v6 = 1;
  v8 = v7 | 4;
  if ( !v6 )
    v8 = v7;
  v9 = tip2::details::shared_data<1,0,0>::serialize_data((__int64 *)a1, (struct tson::write_buffer *)&pv, v8);
  memset_0(&v13, 0, 0x78uLL);
  v10 = *(_DWORD *)(a1 + 180);
  if ( v10 )
    v13 = *(_DWORD *)(a1 + 180);
  else
    v13 = *(_DWORD *)(a1 + 16);
  v14 = *(_QWORD *)(a1 + 24);
  v15 = *(_DWORD *)(a1 + 20);
  v16 = *(_OWORD *)(a1 + 144);
  v17 = *(_DWORD *)(a1 + 64) | 0x200000;
  v18 = *(_BYTE *)(a1 + 160);
  v19 = *(_WORD *)(a1 + 162);
  v20 = *(_QWORD *)(a1 + 168);
  v21 = a2;
  v22 = v9;
  v26 = *(_DWORD *)(a1 + 176);
  if ( v10 )
    v27 = *(_DWORD *)(a1 + 16);
  else
    v27 = 0;
  error = tip2::test_state::last_error((tip2::test_state *)(a1 + 8));
  if ( error )
  {
    v23 = *((_DWORD *)error + 2);
    v24 = *((_QWORD *)error + 7);
    v25 = *((_WORD *)error + 32);
  }
  TestReport((__int64)&v13);
  v12 = *(_QWORD *)a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v12, 0LL, 0LL, 0LL, &v13) )
    {
      v19 = 16398;
      v18 = 3;
      TestReport((__int64)&v13);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 24LL))(v12, &v13);
  }
  if ( pv )
    CoTaskMemFree(pv);
}
