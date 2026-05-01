/*
 * XREFs of ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180105FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801060D8 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106354 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlLauncher::PublishServices(
        XamlLauncher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  char *v3; // rdi
  int v4; // eax
  volatile int *v5; // rdx
  unsigned int v6; // ebx
  char *v7; // rbx
  char *v8; // rax
  char *v9; // rcx
  const char *v11; // rdx
  struct wil::details::IFunctorHost *v12; // r8
  int v13; // [rsp+20h] [rbp-88h]
  char *v14; // [rsp+30h] [rbp-78h] BYREF
  char *v15; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-68h] BYREF
  struct DiagnosticsInfo v17; // [rsp+50h] [rbp-58h] BYREF
  const char *v18; // [rsp+58h] [rbp-50h]
  __int64 v19; // [rsp+60h] [rbp-48h]
  __int16 v20; // [rsp+68h] [rbp-40h]
  char v21[8]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v22; // [rsp+78h] [rbp-30h]
  int v23; // [rsp+84h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char *v25; // [rsp+B0h] [rbp+8h] BYREF

  v3 = (char *)this - 56;
  v4 = ((__int64 (__fastcall *)(struct IProfferService *, SID *, unsigned __int64, char *))a3->lpVtbl->ProfferService)(
         a3,
         &SID_ImmersiveLauncher,
         ((unsigned __int64)this - 8) & -(__int64)(this != (XamlLauncher *)56),
         (char *)this + 168);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27F,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4,
      v13);
    return v6;
  }
  else
  {
    v7 = 0LL;
    v25 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    if ( v3 )
    {
      v7 = v3;
      v25 = v3;
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 116), v5);
      v8 = v3;
      v9 = v3;
    }
    v14 = v3;
    v15 = v7;
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 116), v5);
    v17 = (struct DiagnosticsInfo)retaddr;
    v11 = "pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp";
    v18 = "pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp";
    v19 = 0LL;
    v20 = 643;
    LOBYTE(v11) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
      v11);
    v16[0] = off_1807CD978;
    v16[1] = &v14;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v21, 0x1B71C3Eu, &v17);
    wil::details::RunFunctor((wil::details *)v16, (struct wil::details::IFunctor *)v21, v12);
    if ( v22 )
      *(_DWORD *)(v22 + 16) = v23;
    if ( v15 )
      winrt::com_ptr<XamlLauncher>::unconditional_release_ref(&v15);
    if ( v7 )
      winrt::com_ptr<XamlLauncher>::unconditional_release_ref(&v25);
    return 0LL;
  }
}
