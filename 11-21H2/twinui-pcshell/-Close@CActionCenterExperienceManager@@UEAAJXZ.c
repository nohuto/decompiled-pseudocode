/*
 * XREFs of ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x1800A03A0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___ @ 0x18034CA10 (wil--details--ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___--_ScopeExitFn__lambda_d721.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??BSmartCookie@@QEBA_NXZ @ 0x18034D36C (--BSmartCookie@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::Close(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  struct wil::details::IFunctorHost *v10; // r8
  SmartCookie *v11; // rcx
  int v12; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v15; // [rsp+30h] [rbp-50h] BYREF
  const char *v16; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-40h]
  __int16 v18; // [rsp+48h] [rbp-38h]
  _BYTE v19[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h]
  int v21; // [rsp+64h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  char *v23; // [rsp+90h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 48);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 40LL))(v2, *((unsigned int *)this + 98));
    if ( v3 >= 0 )
      *((_DWORD *)this + 98) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x176,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3,
        v14[0]);
  }
  v4 = *((_QWORD *)this + 71);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *((unsigned int *)this + 139));
    if ( v5 >= 0 )
      *((_DWORD *)this + 139) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17E,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        v14[0]);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 71) + 32LL))(
           *((_QWORD *)this + 71),
           *((unsigned int *)this + 140));
    if ( v6 >= 0 )
      *((_DWORD *)this + 139) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x183,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v14[0]);
  }
  v7 = *((_QWORD *)this + 72);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *((unsigned int *)this + 141));
    if ( v8 >= 0 )
      *((_DWORD *)this + 141) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18B,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        v14[0]);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 81);
  v23 = (char *)this - 80;
  v15 = (struct DiagnosticsInfo)retaddr;
  v16 = "pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp";
  v17 = 0LL;
  v18 = 403;
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
    v9);
  v14[0] = off_18064BB88;
  v14[1] = &v23;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v19, 0x1C537D7u, &v15);
  wil::details::RunFunctor((wil::details *)v14, (struct wil::details::IFunctor *)v19, v10);
  if ( v20 )
    *(_DWORD *)(v20 + 16) = v21;
  if ( (unsigned __int8)SmartCookie::operator bool((char *)this + 424) )
  {
    v12 = SmartCookie::Unregister(v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19D,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v12,
        v14[0]);
  }
  return 0LL;
}
