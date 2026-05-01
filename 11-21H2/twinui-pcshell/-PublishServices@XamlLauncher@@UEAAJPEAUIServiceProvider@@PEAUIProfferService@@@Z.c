/*
 * XREFs of ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18012FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117C2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x18012FF18 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x180133C08 (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_::__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_ @ 0x1801AA1E4 (_lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_--__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PublishServices(
        XamlLauncher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  char *v3; // rbx
  int v4; // eax
  volatile int *v5; // rdx
  unsigned int v6; // edi
  const char *v7; // r9
  __int64 result; // rax
  __int64 v9; // r9
  char *v10; // rdi
  __int64 v11; // r9
  struct wil::details::IFunctorHost *v12; // r8
  char *v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-68h] BYREF
  struct DiagnosticsInfo v16; // [rsp+50h] [rbp-58h] BYREF
  const char *v17; // [rsp+58h] [rbp-50h]
  __int64 v18; // [rsp+60h] [rbp-48h]
  __int16 v19; // [rsp+68h] [rbp-40h]
  _BYTE v20[8]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v21; // [rsp+78h] [rbp-30h]
  int v22; // [rsp+84h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char *v24; // [rsp+B0h] [rbp+8h] BYREF

  v3 = (char *)this - 56;
  try
  {
    v4 = ((__int64 (*)(void))a3->lpVtbl->ProfferService)();
    v6 = v4;
    if ( v4 >= 0 )
    {
      v9 = 0LL;
      v24 = 0LL;
      v10 = 0LL;
      if ( v3 )
      {
        v24 = v3;
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 116), v5);
        v10 = v3;
      }
      v13 = v3;
      v14 = v9;
      Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef(&v14);
      v16 = (struct DiagnosticsInfo)retaddr;
      v17 = "pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp";
      v18 = 0LL;
      v19 = 559;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
        1u,
        3u,
        v11);
      v15[0] = off_180643980;
      v15[1] = &v13;
      wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v20, 28777534, &v16);
      wil::details::RunFunctor((wil::details *)v15, (struct wil::details::IFunctor *)v20, v12);
      if ( v21 )
        *(_DWORD *)(v21 + 16) = v22;
      lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_::__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_(&v13);
      if ( v10 )
        winrt::com_ptr<XamlLauncher>::unconditional_release_ref(&v24);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22B,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v4);
      result = v6;
    }
  }
  catch ( ... )
  {
    LODWORD(v24) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x251,
                     (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                     v7);
    return (unsigned int)v24;
  }
  return result;
}
