/*
 * XREFs of ?ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z @ 0x1801AF320
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106354 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::ShutdownServices(XamlLauncher *this, struct IProfferService *a2)
{
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  struct wil::details::IFunctorHost *v8; // r8
  _QWORD v9[2]; // [rsp+20h] [rbp-68h] BYREF
  struct DiagnosticsInfo v10; // [rsp+30h] [rbp-58h] BYREF
  const char *v11; // [rsp+38h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-48h]
  __int16 v13; // [rsp+48h] [rbp-40h]
  _BYTE v14[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+64h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v18; // [rsp+90h] [rbp+8h] BYREF

  v3 = ((__int64 (__fastcall *)(struct IProfferService *, _QWORD))a2->lpVtbl->RevokeService)(
         a2,
         *((unsigned int *)this + 42));
  v6 = v3;
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 42) = 0;
    v18 = (char *)this - 56;
    v10 = (struct DiagnosticsInfo)retaddr;
    v11 = "pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp";
    v12 = 0LL;
    v13 = 1128;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
      1u,
      v4,
      v5);
    v9[0] = off_1807CEE80;
    v9[1] = &v18;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v14, 28777534, &v10);
    wil::details::RunFunctor((wil::details *)v9, (struct wil::details::IFunctor *)v14, v8);
    if ( v15 )
      *(_DWORD *)(v15 + 16) = v16;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x465,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
    return v6;
  }
}
