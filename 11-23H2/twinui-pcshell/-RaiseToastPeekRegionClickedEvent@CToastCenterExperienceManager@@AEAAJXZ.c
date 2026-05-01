/*
 * XREFs of ?RaiseToastPeekRegionClickedEvent@CToastCenterExperienceManager@@AEAAJXZ @ 0x1804391D8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_41a63a9143889946bda68e2f9d1ff7d6___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable___::Invoke @ 0x180436610 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180436610.c)
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1801062DC (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     _lambda_527ad20aa16d56b88e42a79a9a93120f_::operator() @ 0x180435784 (_lambda_527ad20aa16d56b88e42a79a9a93120f_--operator().c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1804394F4 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CToastCenterExperienceManager::RaiseToastPeekRegionClickedEvent(
        CToastCenterExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r9
  bool v6; // dl
  int v7; // eax
  int v8; // ebx
  int v10[2]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v12[2]; // [rsp+30h] [rbp-28h] BYREF
  const char *v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]
  __int16 v15; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CToastCenterExperienceManager *v17; // [rsp+68h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v17 = this;
  *(_QWORD *)v12 = retaddr;
  v13 = "pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp";
  v14 = 0LL;
  v15 = 823;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
    1u,
    3u,
    v5);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v10, v6);
  v7 = lambda_527ad20aa16d56b88e42a79a9a93120f_::operator()((__int64 *)&v17);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v7,
      (int)v10,
      (struct wil::ThreadErrorContext *)0x1C53B1D,
      (unsigned int)v12,
      *(const struct DiagnosticsInfo **)v10);
  if ( *(_QWORD *)v10 )
    *(_DWORD *)(*(_QWORD *)v10 + 16LL) = v11;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
