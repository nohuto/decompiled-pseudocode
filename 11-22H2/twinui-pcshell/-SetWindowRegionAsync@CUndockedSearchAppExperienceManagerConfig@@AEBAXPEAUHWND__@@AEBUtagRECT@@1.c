/*
 * XREFs of ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x18046A530
 * Callers:
 *     ?SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x18046A400 (-SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BAEA4 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1800BB0EC (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___ @ 0x1801E64F0 (Windows--Internal--ComTaskPool--QueueTask__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___.c)
 *     _lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_ @ 0x1801E7E58 (_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_--_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_.c)
 *     _lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::__lambda_0190d4b48233ee3d7e5c167dfa5e03d8_ @ 0x1801E85F0 (_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_--__lambda_0190d4b48233ee3d7e5c167dfa5e03d8_.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAAXAEBUtagRECT@@0@Z @ 0x18046A82C (-StartActivity@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceM_ea_18046A82C.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  signed int v10; // eax
  int v11[2]; // [rsp+30h] [rbp-2E8h] BYREF
  _QWORD v12[40]; // [rsp+40h] [rbp-2D8h] BYREF
  int v13[92]; // [rsp+180h] [rbp-198h] BYREF

  *(_QWORD *)v11 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)"UndockedSearchAppExperienceManager_SetWindowRgn");
  v12[0] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::StartActivity(
    (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v12,
    a3,
    a4);
  v7 = lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_(
         (__int64)v13,
         v11,
         (__int128 *)&a3->left,
         (__int128 *)&a4->left,
         (struct SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v12);
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___(
          v9,
          v8,
          *((_DWORD *)this + 2),
          v7);
  if ( v10 < 0 )
    winrt::throw_hresult(v10);
  lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::__lambda_0190d4b48233ee3d7e5c167dfa5e03d8_((__int64)v13);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v12);
}
