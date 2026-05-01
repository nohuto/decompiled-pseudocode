/*
 * XREFs of ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x180143C40
 * Callers:
 *     ?RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801057B0 (-RuntimeClassInitialize@CControlCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___::_ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___ @ 0x18041DAC4 (wil--details--ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___--_ScopeExitFn__lambda_c608.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180144188 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIToastCenterExperien.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018F8E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::Close(CControlCenterExperienceManager *this, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  struct wil::details::IFunctorHost *v14; // r8
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v16; // [rsp+30h] [rbp-50h] BYREF
  const char *v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int16 v19; // [rsp+48h] [rbp-38h]
  _BYTE v20[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h]
  int v22; // [rsp+64h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v24; // [rsp+A0h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 46);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *((unsigned int *)this + 94));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x178,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    else
      *((_DWORD *)this + 94) = 0;
  }
  v5 = *((_QWORD *)this + 50);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *((unsigned int *)this + 96));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x180,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    else
      *((_DWORD *)this + 96) = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 50) + 32LL))(
           *((_QWORD *)this + 50),
           *((unsigned int *)this + 97));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x185,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    else
      *((_DWORD *)this + 96) = 0;
  }
  v8 = *((_QWORD *)this + 51);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, *((unsigned int *)this + 98));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18D,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    else
      *((_DWORD *)this + 98) = 0;
  }
  if ( *((_QWORD *)this + 54) )
  {
    if ( *((_QWORD *)this + 93) )
    {
      v24 = 0LL;
      v10 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
              (char *)this + 432,
              &v24);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x198,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
        return v11;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 72LL))(v24, *((_QWORD *)this + 93));
      *((_QWORD *)this + 93) = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
    }
    a2 = *((_QWORD *)this + 94);
    if ( a2 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 64LL))(*((_QWORD *)this + 54));
      *((_QWORD *)this + 94) = 0LL;
    }
  }
  v24 = (__int64)this - 64;
  v16 = (struct DiagnosticsInfo)retaddr;
  v17 = "pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp";
  v18 = 0LL;
  v19 = 420;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
    a2);
  v15[0] = off_1807D3470;
  v15[1] = &v24;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v20, 29702103, &v16);
  wil::details::RunFunctor((wil::details *)v15, (struct wil::details::IFunctor *)v20, v14);
  if ( v21 )
    *(_DWORD *)(v21 + 16) = v22;
  if ( *((_DWORD *)this + 142) )
  {
    v12 = SmartCookie::Unregister((CControlCenterExperienceManager *)((char *)this + 448));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AE,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
  return 0LL;
}
