/*
 * XREFs of ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1804215EC
 * Callers:
 *     ?OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421260 (-OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1804212E0 (-OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180421370 (-OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x180136FEC (--$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@U.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18018F8E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_27afb1af1e683999fcadd1218557daf7___ @ 0x1801DD968 (Windows--Internal--ComTaskPool--QueueTask__lambda_27afb1af1e683999fcadd1218557daf7___.c)
 *     _lambda_37bafbeb3dd0776f24b59a9d11710915_::__lambda_37bafbeb3dd0776f24b59a9d11710915_ @ 0x1801DDC34 (_lambda_37bafbeb3dd0776f24b59a9d11710915_--__lambda_37bafbeb3dd0776f24b59a9d11710915_.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180422598 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x180422F24 (-SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CControlCenterExperienceManager::OnVisibilityChanged(
        CControlCenterExperienceManager *this,
        const unsigned __int16 *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  struct wil::details::IFunctorHost *v12; // r8
  const char *v13; // r9
  int v14[2]; // [rsp+20h] [rbp-88h] BYREF
  bool *v15; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-78h] BYREF
  struct DiagnosticsInfo v17; // [rsp+40h] [rbp-68h] BYREF
  const char *v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int16 v20; // [rsp+58h] [rbp-50h]
  _BYTE v21[8]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v22; // [rsp+68h] [rbp-40h]
  int v23; // [rsp+74h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  bool v25; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+10h] BYREF
  CControlCenterExperienceManager *v27; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+20h] BYREF

  v25 = *((_DWORD *)this + 40) == 2;
  if ( v25 )
  {
    v3 = CControlCenterExperienceManager::SetWindowRegion(this);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5D8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = CControlCenterExperienceManager::RaisePropertyChangedEvent(this, a2, v25);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5DC,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v26 = 0LL;
  v27 = this;
  v5 = wil::com_weak_query<CControlCenterExperienceManager *>(&v28, (__int64 *)&v27);
  v6 = *v5;
  *v5 = 0LL;
  v26 = v6;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
  *(_QWORD *)v14 = this;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)&v15,
    &v26);
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_27afb1af1e683999fcadd1218557daf7___(
         v8,
         v7,
         *((_DWORD *)this + 115),
         v14);
  lambda_37bafbeb3dd0776f24b59a9d11710915_::__lambda_37bafbeb3dd0776f24b59a9d11710915_((__int64)v14);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5ED,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  *(_QWORD *)v14 = this;
  v15 = &v25;
  v17 = (struct DiagnosticsInfo)retaddr;
  v18 = "pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp";
  v19 = 0LL;
  v20 = 1521;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
      1u,
      v10,
      v11);
    v16[0] = &off_1807C4758;
    v16[1] = v14;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v21, 29702103, &v17);
    wil::details::RunFunctor((wil::details *)v16, (struct wil::details::IFunctor *)v21, v12);
    if ( v22 )
      *(_DWORD *)(v22 + 16) = v23;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x5FE,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      v13);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
}
