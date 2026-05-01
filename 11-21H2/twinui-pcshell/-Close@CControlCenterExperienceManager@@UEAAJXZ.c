/*
 * XREFs of ?Close@CControlCenterExperienceManager@@UEAAJXZ @ 0x1800A05C0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___::_ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___ @ 0x1803532D8 (wil--details--ScopeExitFn__lambda_c60841e68e91d5e89d5e2eb800f0fc70___--_ScopeExitFn__lambda_c608.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800A6B84 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIToastCenterExperien.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??BSmartCookie@@QEBA_NXZ @ 0x18034D36C (--BSmartCookie@@QEBA_NXZ.c)
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
  struct wil::details::IFunctorHost *v13; // r8
  SmartCookie *v14; // rcx
  int v15; // eax
  _QWORD v16[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v17; // [rsp+30h] [rbp-50h] BYREF
  const char *v18; // [rsp+38h] [rbp-48h]
  __int64 v19; // [rsp+40h] [rbp-40h]
  __int16 v20; // [rsp+48h] [rbp-38h]
  _BYTE v21[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+64h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v25; // [rsp+A0h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 39);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *((unsigned int *)this + 80));
    if ( v4 >= 0 )
      *((_DWORD *)this + 80) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15E,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4,
        v16[0]);
  }
  v5 = *((_QWORD *)this + 43);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *((unsigned int *)this + 82));
    if ( v6 >= 0 )
      *((_DWORD *)this + 82) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x166,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v16[0]);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 32LL))(
           *((_QWORD *)this + 43),
           *((unsigned int *)this + 83));
    if ( v7 >= 0 )
      *((_DWORD *)this + 82) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16B,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v16[0]);
  }
  v8 = *((_QWORD *)this + 44);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, *((unsigned int *)this + 84));
    if ( v9 >= 0 )
      *((_DWORD *)this + 84) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x173,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        v16[0]);
  }
  if ( *((_QWORD *)this + 47) )
  {
    if ( *((_QWORD *)this + 81) )
    {
      v25 = 0LL;
      v10 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
              (char *)this + 376,
              &v25);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17E,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
        return v11;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 72LL))(v25, *((_QWORD *)this + 81));
      *((_QWORD *)this + 81) = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    }
    a2 = *((_QWORD *)this + 82);
    if ( a2 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 64LL))(*((_QWORD *)this + 47));
      *((_QWORD *)this + 82) = 0LL;
    }
  }
  v25 = (__int64)this - 64;
  v17 = (struct DiagnosticsInfo)retaddr;
  v18 = "pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp";
  v19 = 0LL;
  v20 = 394;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
    a2);
  v16[0] = off_18064BC40;
  v16[1] = &v25;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v21, 0x1C537D7u, &v17);
  wil::details::RunFunctor((wil::details *)v16, (struct wil::details::IFunctor *)v21, v13);
  if ( v22 )
    *(_DWORD *)(v22 + 16) = v23;
  if ( (unsigned __int8)SmartCookie::operator bool((char *)this + 392) )
  {
    v15 = SmartCookie::Unregister(v14);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x194,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v15,
        v16[0]);
  }
  return 0LL;
}
