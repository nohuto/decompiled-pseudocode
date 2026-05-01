/*
 * XREFs of ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180143A70
 * Callers:
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E58B4 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x18043521C (wil--details--ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___--_ScopeExitFn__lambda_39f8.c)
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1801062DC (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _lambda_464faf368add579c73b162db1e562f2d_::operator() @ 0x1801447F0 (_lambda_464faf368add579c73b162db1e562f2d_--operator().c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1804394F4 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::Close(CToastCenterExperienceManager *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  bool v16; // dl
  int v17; // eax
  int v19[2]; // [rsp+20h] [rbp-30h] BYREF
  int v20; // [rsp+2Ch] [rbp-24h]
  unsigned int v21[2]; // [rsp+30h] [rbp-20h] BYREF
  const char *v22; // [rsp+38h] [rbp-18h]
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int16 v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  char *v26; // [rsp+60h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 53);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, *((unsigned int *)this + 108));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x179,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    else
      *((_DWORD *)this + 108) = 0;
  }
  v6 = *((_QWORD *)this + 79);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, *((unsigned int *)this + 144));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x181,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    else
      *((_DWORD *)this + 144) = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 79) + 32LL))(
           *((_QWORD *)this + 79),
           *((unsigned int *)this + 145));
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x186,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    else
      *((_DWORD *)this + 144) = 0;
  }
  v9 = *((_QWORD *)this + 80);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, *((unsigned int *)this + 146));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    else
      *((_DWORD *)this + 146) = 0;
  }
  if ( *((_DWORD *)this + 142) )
  {
    v11 = SmartCookie::Unregister((CToastCenterExperienceManager *)((char *)this + 448));
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x196,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = *((_QWORD *)this + 47);
  if ( v12 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v12);
    *((_QWORD *)this + 47) = 0LL;
  }
  v13 = *((_QWORD *)this + 45);
  if ( v13 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v13);
    *((_QWORD *)this + 45) = 0LL;
  }
  v14 = *((_QWORD *)this + 46);
  if ( v14 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v14);
    *((_QWORD *)this + 46) = 0LL;
  }
  v15 = *((_QWORD *)this + 84);
  if ( v15 )
  {
    a2 = *((_QWORD *)this + 86);
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
      *((_QWORD *)this + 86) = 0LL;
    }
  }
  v26 = (char *)this - 48;
  *(_QWORD *)v21 = retaddr;
  v22 = "pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp";
  v23 = 0LL;
  v24 = 435;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    a2,
    a3);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v19, v16);
  v17 = lambda_464faf368add579c73b162db1e562f2d_::operator()(&v26);
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
