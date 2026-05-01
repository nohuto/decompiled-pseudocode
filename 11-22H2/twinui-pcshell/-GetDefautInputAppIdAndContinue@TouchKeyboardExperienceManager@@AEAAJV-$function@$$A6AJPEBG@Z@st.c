/*
 * XREFs of ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18050FEF8
 * Callers:
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18050D570 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180515C70 (-RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a09f288fb701b6a3bb133eb64dd6b836___ @ 0x1802058C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_a09f288fb701b6a3bb133eb64dd6b836___.c)
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::_lambda_a09f288fb701b6a3bb133eb64dd6b836_ @ 0x180206538 (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--_lambda_a09f288fb701b6a3bb133eb64dd6b836_.c)
 *     _lambda_a09f288fb701b6a3bb133eb64dd6b836_::__lambda_a09f288fb701b6a3bb133eb64dd6b836_ @ 0x18020678C (_lambda_a09f288fb701b6a3bb133eb64dd6b836_--__lambda_a09f288fb701b6a3bb133eb64dd6b836_.c)
 *     ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DA95A (--1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??$?0AEAU?$atomic@I@std@@@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAU?$atomic@I@std@@@Z @ 0x18050820C (--$-0AEAU-$atomic@I@std@@@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::GetDefautInputAppIdAndContinue(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  int v5; // eax
  int v6; // esi
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[320]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19[50]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v17[1] = a2;
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::GetDefautInputAppIdAndContinue(
    (__int64)v18,
    a2,
    (int *)(a1 + 928));
  v15 = 0LL;
  v16 = &v15;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
  v5 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>(a1, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v17[0] = a1;
    v9 = lambda_a09f288fb701b6a3bb133eb64dd6b836_::_lambda_a09f288fb701b6a3bb133eb64dd6b836_(
           v19,
           &v15,
           v17,
           (__int64)v18,
           a2);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_a09f288fb701b6a3bb133eb64dd6b836___(
           v11,
           v10,
           *(_DWORD *)(a1 + 972),
           v9);
    lambda_a09f288fb701b6a3bb133eb64dd6b836_::__lambda_a09f288fb701b6a3bb133eb64dd6b836_(v19, v12);
    if ( v6 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = (unsigned int)v6;
    v8 = 1892LL;
  }
  else
  {
    v7 = (unsigned int)v5;
    v8 = 1810LL;
  }
  *(_BYTE *)(a1 + 1012) = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v7);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue((TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)v18);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    a2,
    v13);
  return (unsigned int)v6;
}
