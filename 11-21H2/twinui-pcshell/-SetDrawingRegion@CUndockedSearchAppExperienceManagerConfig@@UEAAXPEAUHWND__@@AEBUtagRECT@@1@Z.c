/*
 * XREFs of ?SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x180023F40
 * Callers:
 *     <none>
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b9b326c89cb8166a780ad4ef449f4933___ @ 0x180199CB4 (Windows--Internal--ComTaskPool--QueueTask__lambda_b9b326c89cb8166a780ad4ef449f4933___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fbed9b0dbceac467dbc3ac26d82f2743___ @ 0x18019A054 (Windows--Internal--ComTaskPool--QueueTask__lambda_fbed9b0dbceac467dbc3ac26d82f2743___.c)
 *     ??$Start@AEBUtagRECT@@AEBU1@@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@SA?AV01@AEBUtagRECT@@0@Z @ 0x18019A150 (--$Start@AEBUtagRECT@@AEBU1@@UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperience.c)
 *     _lambda_b9b326c89cb8166a780ad4ef449f4933_::_lambda_b9b326c89cb8166a780ad4ef449f4933_ @ 0x18019B2B0 (_lambda_b9b326c89cb8166a780ad4ef449f4933_--_lambda_b9b326c89cb8166a780ad4ef449f4933_.c)
 *     _lambda_b9b326c89cb8166a780ad4ef449f4933_::__lambda_b9b326c89cb8166a780ad4ef449f4933_ @ 0x18019B920 (_lambda_b9b326c89cb8166a780ad4ef449f4933_--__lambda_b9b326c89cb8166a780ad4ef449f4933_.c)
 *     ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18019BEE4 (--1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details@wil@@QEAA_NXZ @ 0x1801A2398 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CUndockedSearchAppExperienceManagerConfig::SetDrawingRegion(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  const char *v16; // r9
  HWND v17; // [rsp+30h] [rbp-318h] BYREF
  HWND v18; // [rsp+38h] [rbp-310h] BYREF
  struct tagRECT v19; // [rsp+40h] [rbp-308h]
  struct tagRECT v20; // [rsp+50h] [rbp-2F8h]
  _BYTE v21[320]; // [rsp+60h] [rbp-2E8h] BYREF
  _BYTE v22[368]; // [rsp+1A0h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+0h]

  v8 = IsRectEmpty(a3) ? (void *)2 : 0LL;
  v17 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl) )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::Start<tagRECT const &,tagRECT const &>(
      (SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v21,
      a3,
      a4);
    v11 = lambda_b9b326c89cb8166a780ad4ef449f4933_::_lambda_b9b326c89cb8166a780ad4ef449f4933_(
            (unsigned int)v22,
            (unsigned int)&v17,
            (_DWORD)a3,
            (_DWORD)a4,
            (__int64)v21);
    v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_b9b326c89cb8166a780ad4ef449f4933___(
            v13,
            v12,
            *((unsigned int *)this + 2),
            v11);
    winrt::check_hresult(v14);
    lambda_b9b326c89cb8166a780ad4ef449f4933_::__lambda_b9b326c89cb8166a780ad4ef449f4933_(v22);
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *)v21);
  }
  else
  {
    v18 = a2;
    v19 = *a3;
    v20 = *a4;
    v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_fbed9b0dbceac467dbc3ac26d82f2743___(
            v10,
            v9,
            *((unsigned int *)this + 2),
            &v18);
    winrt::check_hresult(v15);
  }
  if ( !SetPropW(a2, L"UIA_WindowVisibilityOverridden", v8) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x17A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v16);
}
