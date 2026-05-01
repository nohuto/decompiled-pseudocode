/*
 * XREFs of ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x180012F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004D718 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x180098AF8 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x1800BA728 (--1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800BA82C (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x1800BB51C (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800BB7BC (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1800BB9D8 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ?TryGetHighResolutionTimerValue@Utils@@YA_JXZ @ 0x1801AC5E8 (-TryGetHighResolutionTimerValue@Utils@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806C0C38 (-SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::OnListenerWindowMessage(
        RTL_SRWLOCK *this,
        const struct IInspectable *a2,
        const struct IInspectable *a3)
{
  __int64 p_AddRef; // rax
  Utils *v5; // rcx
  __int64 HighResolutionTimerValue; // rbp
  char Ptr; // si
  const struct CorrelationVector *v8; // rax
  void *v9; // [rsp+20h] [rbp-168h] BYREF
  void *v10; // [rsp+28h] [rbp-160h]
  _QWORD v11[40]; // [rsp+30h] [rbp-158h] BYREF

  p_AddRef = (__int64)&a3->lpVtbl->AddRef;
  if ( !a3->lpVtbl )
    p_AddRef = 24LL;
  if ( *(_DWORD *)p_AddRef == 1026 )
  {
    v10 = operator new(0x90uLL);
    v9 = (void *)TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v10);
    wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
    v11[0] = &MeetAndChatTelemetry::MeetAndChatManagerOperation::`vftable';
    MeetAndChatTelemetry::MeetAndChatManagerOperation::StartActivity(v11, 0LL, &v9);
    HighResolutionTimerValue = Utils::TryGetHighResolutionTimerValue(v5);
    AcquireSRWLockShared(this + 14);
    Ptr = (char)this[26].Ptr;
    if ( this != (RTL_SRWLOCK *)-112LL )
      ReleaseSRWLockShared(this + 14);
    v8 = CorrelationVector::Increment((CorrelationVector *)&v9);
    winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun(
      Ptr == 0,
      HighResolutionTimerValue,
      v8);
    if ( Ptr )
      winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SwitchToApplicationFlyoutIfNeeded((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)this);
    wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v11);
    MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation((MeetAndChatTelemetry::MeetAndChatManagerOperation *)v11);
    if ( v9 )
      operator delete(v9, 0x90uLL);
  }
}
