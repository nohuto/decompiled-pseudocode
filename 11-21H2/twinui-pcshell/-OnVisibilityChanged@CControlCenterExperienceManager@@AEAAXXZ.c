/*
 * XREFs of ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x18004DBD8
 * Callers:
 *     ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180042340 (-OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180042670 (-OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803542A0 (-OnViewDestroyed@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004CF88 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x18004D420 (-SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x18004E13C (--$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@U.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180117B98 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180117CC0 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_STUC@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     _lambda_47c0868eeef6d2db2a8f89db045b20e4_::__lambda_47c0868eeef6d2db2a8f89db045b20e4_ @ 0x180191D70 (_lambda_47c0868eeef6d2db2a8f89db045b20e4_--__lambda_47c0868eeef6d2db2a8f89db045b20e4_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___ @ 0x180193EE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CControlCenterExperienceManager::OnVisibilityChanged(CControlCenterExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rdx
  struct wil::details::IFunctorHost *v10; // r8
  const char *v11; // r9
  int v12[2]; // [rsp+20h] [rbp-88h] BYREF
  bool *v13; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-78h] BYREF
  DiagnosticsInfo v15; // [rsp+40h] [rbp-68h] BYREF
  const char *v16; // [rsp+48h] [rbp-60h]
  __int64 v17; // [rsp+50h] [rbp-58h]
  __int16 v18; // [rsp+58h] [rbp-50h]
  _BYTE v19[8]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v20; // [rsp+68h] [rbp-40h]
  int v21; // [rsp+74h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  bool v23; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+10h] BYREF
  CControlCenterExperienceManager *v25; // [rsp+C0h] [rbp+18h] BYREF
  char v26; // [rsp+C8h] [rbp+20h] BYREF

  v23 = *((_DWORD *)this + 40) == 2;
  if ( v23 )
  {
    v2 = CControlCenterExperienceManager::SetWindowRegion(this);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C6,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2,
        v12[0]);
  }
  v3 = CControlCenterExperienceManager::RaisePropertyChangedEvent(this, L"Ready", v23);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4CA,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      v12[0]);
  v24 = 0LL;
  v25 = this;
  v4 = (__int64 *)wil::com_weak_query<CControlCenterExperienceManager *>(&v26, &v25);
  v5 = *v4;
  *v4 = 0LL;
  v24 = v5;
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v26);
  *(_QWORD *)v12 = this;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v13, &v24);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___(
         v7,
         v6,
         *((unsigned int *)this + 101),
         v12);
  lambda_47c0868eeef6d2db2a8f89db045b20e4_::__lambda_47c0868eeef6d2db2a8f89db045b20e4_(v12);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4DB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v12[0]);
  *(_QWORD *)v12 = this;
  v13 = &v23;
  v15 = (DiagnosticsInfo)retaddr;
  v16 = "pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp";
  v17 = 0LL;
  v18 = 1247;
  LOBYTE(v9) = 1;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_STUC>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_STUC>::GetImpl'::`2'::impl,
      v9);
    v14[0] = &off_18064BC48;
    v14[1] = v12;
    wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v19, 0x1C537D7u, &v15);
    wil::details::RunFunctor((wil::details *)v14, (struct wil::details::IFunctor *)v19, v10);
    if ( v20 )
      *(_DWORD *)(v20 + 16) = v21;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4EC,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      v11);
  }
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v24);
}
