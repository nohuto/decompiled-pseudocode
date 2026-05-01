/*
 * XREFs of ?ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z @ 0x18017D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117C2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::ShutdownServices(XamlLauncher *this, struct IProfferService *a2)
{
  int v3; // eax
  __int64 v4; // r9
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
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

  try
  {
    v3 = ((__int64 (*)(void))a2->lpVtbl->RevokeService)();
    v5 = v3;
    if ( v3 >= 0 )
    {
      *((_DWORD *)this + 40) = 0;
      v18 = (char *)this - 56;
      v10 = (struct DiagnosticsInfo)retaddr;
      v11 = "pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp";
      v12 = 0LL;
      v13 = 993;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
        1u,
        3u,
        v4);
      v9[0] = off_180643988;
      v9[1] = &v18;
      wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v14, 28777534, &v10);
      wil::details::RunFunctor((wil::details *)v9, (struct wil::details::IFunctor *)v14, v8);
      if ( v15 )
        *(_DWORD *)(v15 + 16) = v16;
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DE,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v3);
      result = v5;
    }
  }
  catch ( ... )
  {
    LODWORD(v18) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x3F2,
                     (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                     v6);
    return (unsigned int)v18;
  }
  return result;
}
