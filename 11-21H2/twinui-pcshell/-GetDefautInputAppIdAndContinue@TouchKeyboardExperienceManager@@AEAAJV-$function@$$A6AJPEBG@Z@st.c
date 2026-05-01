/*
 * XREFs of ?GetDefautInputAppIdAndContinue@TouchKeyboardExperienceManager@@AEAAJV?$function@$$A6AJPEBG@Z@std@@@Z @ 0x18045E318
 * Callers:
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18045BB50 (-ActivateInputApp@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804647B0 (-RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BF134 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3f7c4ca579c2955647d5fca56c9af8c5___ @ 0x1801AE980 (Windows--Internal--ComTaskPool--QueueTask__lambda_3f7c4ca579c2955647d5fca56c9af8c5___.c)
 *     _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::_lambda_3f7c4ca579c2955647d5fca56c9af8c5_ @ 0x1801AF080 (_lambda_3f7c4ca579c2955647d5fca56c9af8c5_--_lambda_3f7c4ca579c2955647d5fca56c9af8c5_.c)
 *     _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::__lambda_3f7c4ca579c2955647d5fca56c9af8c5_ @ 0x1801AF3B8 (_lambda_3f7c4ca579c2955647d5fca56c9af8c5_--__lambda_3f7c4ca579c2955647d5fca56c9af8c5_.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18022DB04 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AD6C (--1GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXH@Z @ 0x18046537C (-StartActivity@GetDefautInputAppIdAndContinue@TouchKeyboardExperienceTelemetryLogger@@QEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=4
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
  _QWORD v18[40]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19[50]; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v17[1] = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"GetDefautInputAppIdAndContinue");
  v18[0] = &TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::`vftable';
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)v18,
    *(_DWORD *)(a1 + 1128));
  v15 = 0LL;
  v16 = &v15;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
  v5 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>(a1, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v17[0] = a1;
    v9 = lambda_3f7c4ca579c2955647d5fca56c9af8c5_::_lambda_3f7c4ca579c2955647d5fca56c9af8c5_(
           v19,
           &v15,
           v17,
           (__int64)v18,
           a2);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_3f7c4ca579c2955647d5fca56c9af8c5___(
           v11,
           v10,
           *(_DWORD *)(a1 + 1172),
           v9);
    lambda_3f7c4ca579c2955647d5fca56c9af8c5_::__lambda_3f7c4ca579c2955647d5fca56c9af8c5_(v19, v12);
    if ( v6 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = (unsigned int)v6;
    v8 = 2153LL;
  }
  else
  {
    v7 = (unsigned int)v5;
    v8 = 2074LL;
  }
  *(_BYTE *)(a1 + 1204) = 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v7);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue::~GetDefautInputAppIdAndContinue((TouchKeyboardExperienceTelemetryLogger::GetDefautInputAppIdAndContinue *)v18);
  std::_Func_class<void,>::_Tidy(a2, v13);
  return (unsigned int)v6;
}
