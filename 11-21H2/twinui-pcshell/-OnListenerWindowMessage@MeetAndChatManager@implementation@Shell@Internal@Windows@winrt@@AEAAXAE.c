/*
 * XREFs of ?OnListenerWindowMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z @ 0x18003D410
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180044994 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x1800C74C4 (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800C7878 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1800C7A94 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x1800C7F64 (--1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800C805C (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x1801D1460 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     ?TryGetHighResolutionTimerValue@Utils@@YA_JXZ @ 0x1801D3A88 (-TryGetHighResolutionTimerValue@Utils@@YA_JXZ.c)
 *     ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805CF0C8 (-SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::OnListenerWindowMessage(
        RTL_SRWLOCK *this,
        const struct IInspectable *a2,
        const struct IInspectable *a3)
{
  __int64 p_AddRef; // rcx
  Utils *v5; // rcx
  __int64 HighResolutionTimerValue; // rdi
  char Ptr; // bl
  const struct CorrelationVector *v8; // rax
  void *v9; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v10; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v11[40]; // [rsp+30h] [rbp-D0h] BYREF

  p_AddRef = (__int64)&a3->lpVtbl->AddRef;
  if ( !a3->lpVtbl )
    p_AddRef = 24LL;
  if ( *(_DWORD *)p_AddRef == 1026 )
  {
    v10 = (RTL_SRWLOCK *)operator new(0x90uLL);
    v9 = (void *)TraceLoggingCorrelationVector::TraceLoggingCorrelationVector(v10);
    wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
    v11[0] = &MeetAndChatTelemetry::MeetAndChatManagerOperation::`vftable';
    MeetAndChatTelemetry::MeetAndChatManagerOperation::StartActivity(v11, 0LL, &v9);
    HighResolutionTimerValue = Utils::TryGetHighResolutionTimerValue(v5);
    AcquireSRWLockShared(this + 14);
    v10 = this + 14;
    Ptr = (char)this[26].Ptr;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v10);
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
