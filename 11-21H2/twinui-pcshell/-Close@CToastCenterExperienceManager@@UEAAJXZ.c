/*
 * XREFs of ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180168660
 * Callers:
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800DB1F8 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x1803622E0 (wil--details--ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___--_ScopeExitFn__lambda_39f8.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x180117BE4 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     _lambda_bc1ea76c9a22cd8feb059e07d72d9c7e_::operator() @ 0x180196A58 (_lambda_bc1ea76c9a22cd8feb059e07d72d9c7e_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180364EF4 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Close(
        CToastCenterExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v19[2]; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+2Ch] [rbp-24h]
  unsigned int v21[2]; // [rsp+30h] [rbp-20h] BYREF
  const char *v22; // [rsp+38h] [rbp-18h]
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int16 v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  char *v26; // [rsp+60h] [rbp+10h] BYREF

  v5 = *((_QWORD *)this + 50);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, *((unsigned int *)this + 102));
    if ( v6 >= 0 )
      *((_DWORD *)this + 102) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 77);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *((unsigned int *)this + 140));
    if ( v8 >= 0 )
      *((_DWORD *)this + 140) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x172,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 77) + 32LL))(
           *((_QWORD *)this + 77),
           *((unsigned int *)this + 141));
    if ( v9 >= 0 )
      *((_DWORD *)this + 140) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x177,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
  v10 = *((_QWORD *)this + 78);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, *((unsigned int *)this + 142));
    if ( v11 >= 0 )
      *((_DWORD *)this + 142) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17F,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
  }
  if ( *((_DWORD *)this + 138) )
  {
    v12 = SmartCookie::Unregister((CToastCenterExperienceManager *)((char *)this + 432));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x187,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
  v13 = *((_QWORD *)this + 44);
  if ( v13 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v13);
    *((_QWORD *)this + 44) = 0LL;
  }
  v14 = *((_QWORD *)this + 42);
  if ( v14 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v14);
    *((_QWORD *)this + 42) = 0LL;
  }
  v15 = *((_QWORD *)this + 43);
  if ( v15 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v15);
    *((_QWORD *)this + 43) = 0LL;
  }
  v16 = *((_QWORD *)this + 82);
  if ( v16 && *((_QWORD *)this + 84) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
    *((_QWORD *)this + 84) = 0LL;
  }
  v26 = (char *)this - 48;
  *(_QWORD *)v21 = retaddr;
  v22 = "pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp";
  v23 = 0LL;
  v24 = 421;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v19);
  v17 = lambda_bc1ea76c9a22cd8feb059e07d72d9c7e_::operator()(&v26);
  if ( v17 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v17,
      (int)v19,
      (struct wil::ThreadErrorContext *)0x1C53B1D,
      (unsigned int)v21,
      *(const struct DiagnosticsInfo **)v19);
  if ( *(_QWORD *)v19 )
    *(_DWORD *)(*(_QWORD *)v19 + 16LL) = v20;
  return 0LL;
}
