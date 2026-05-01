/*
 * XREFs of _lambda_b5a77111c728e18e017b33cb0f4bfddb_::operator() @ 0x1801C5310
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b5a77111c728e18e017b33cb0f4bfddb__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1801CE960 (std--_Func_impl_no_alloc__lambda_b5a77111c728e18e017b33cb0f4bfddb__void_winrt--Wind_ea_1801CE960.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1801806C8 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     ??$DashboardInteracted@Uguid@winrt@@I_NPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAI$$QEA_N$$QEAPEBG@Z @ 0x1801C1C74 (--$DashboardInteracted@Uguid@winrt@@I_NPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QE.c)
 *     ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x1801D0188 (-value@-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGBAAEBW4Das.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_b5a77111c728e18e017b33cb0f4bfddb_::operator()(__int64 a1, IUnknown **a2)
{
  int v4; // eax
  HRESULT v5; // eax
  __int64 v6; // rsi
  __int64 v7; // r8
  int v8; // r14d
  __int16 v9; // r15
  __int16 v10; // r12
  char v11; // r13
  IUnknown *v12; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  unsigned int v14; // eax
  _QWORD *v15; // rdi
  int v16; // [rsp+20h] [rbp-40h]
  __int16 v17; // [rsp+24h] [rbp-3Ch]
  char v18; // [rsp+26h] [rbp-3Ah]
  char v19[9]; // [rsp+27h] [rbp-39h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  IUnknown **v21; // [rsp+40h] [rbp-20h] BYREF
  __int128 v22; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v21 = a2;
  if ( *(_BYTE *)(a1 + 64) )
  {
    v4 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x49C,
        (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = CoAllowSetForegroundWindow(*a2, 0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x49D,
        (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  v6 = a1 + 24;
  v7 = *(unsigned int *)std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>::value(a1 + 24);
  v8 = *(_DWORD *)(a1 + 8);
  LODWORD(v22) = v8;
  v9 = *(_WORD *)(a1 + 12);
  WORD2(v22) = v9;
  v10 = *(_WORD *)(a1 + 14);
  WORD3(v22) = v10;
  v11 = *(_BYTE *)(a1 + 16);
  BYTE8(v22) = v11;
  LOBYTE(v16) = *(_BYTE *)(a1 + 17);
  BYTE9(v22) = v16;
  BYTE1(v16) = *(_BYTE *)(a1 + 18);
  BYTE10(v22) = BYTE1(v16);
  BYTE2(v16) = *(_BYTE *)(a1 + 19);
  BYTE11(v22) = BYTE2(v16);
  HIBYTE(v16) = *(_BYTE *)(a1 + 20);
  BYTE12(v22) = HIBYTE(v16);
  LOBYTE(v17) = *(_BYTE *)(a1 + 21);
  BYTE13(v22) = v17;
  HIBYTE(v17) = *(_BYTE *)(a1 + 22);
  BYTE14(v22) = HIBYTE(v17);
  v18 = *(_BYTE *)(a1 + 23);
  HIBYTE(v22) = v18;
  v12 = *a2;
  lpVtbl = (*a2)->lpVtbl;
  v20 = v22;
  v14 = ((__int64 (__fastcall *)(IUnknown *, __int128 *, __int64))lpVtbl[2].Release)(v12, &v20, v7);
  winrt::check_hresult(v14);
  v15 = (_QWORD *)(a1 + 32);
  if ( v15[3] >= 8uLL )
    v15 = (_QWORD *)*v15;
  *(_QWORD *)&v22 = v15;
  v19[0] = 1;
  LODWORD(v21) = *(_DWORD *)std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>::value(v6);
  LODWORD(v20) = v8;
  WORD2(v20) = v9;
  WORD3(v20) = v10;
  BYTE8(v20) = v11;
  *(_DWORD *)((char *)&v20 + 9) = v16;
  *(_WORD *)((char *)&v20 + 13) = v17;
  HIBYTE(v20) = v18;
  DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool,unsigned short const *>(
    &v20,
    (int *)&v21,
    v19,
    (__int64 *)&v22);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)a2);
}
