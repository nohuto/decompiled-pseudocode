/*
 * XREFs of ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180092014
 * Callers:
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180092450 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800730FC (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x180092220 (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     ?GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z @ 0x1800922CC (-GetActivationId@VoiceAssistantPositionerTelemetry@@CA_KPEAUIUnknown@@@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::StartActivity(
        VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  const WCHAR *CensoredAumidFromView; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // rax
  __int64 v13; // r8
  const GUID *v14; // r9
  const GUID *v15; // r8
  __int64 v16; // rax
  int v17; // ecx
  REGHANDLE v18; // rcx
  bool v19; // [rsp+30h] [rbp-89h] BYREF
  DWORD v20; // [rsp+34h] [rbp-85h] BYREF
  RTL_SRWLOCK *v21; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 ActivationId; // [rsp+40h] [rbp-79h] BYREF
  __int64 v23; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-59h] BYREF
  void *v26; // [rsp+70h] [rbp-49h]
  int v27; // [rsp+78h] [rbp-41h]
  int v28; // [rsp+7Ch] [rbp-3Dh]
  __int64 *v29; // [rsp+80h] [rbp-39h]
  __int64 v30; // [rsp+88h] [rbp-31h]
  DWORD *v31; // [rsp+90h] [rbp-29h]
  __int64 v32; // [rsp+98h] [rbp-21h]
  const WCHAR *v33; // [rsp+A0h] [rbp-19h]
  int v34; // [rsp+A8h] [rbp-11h]
  int v35; // [rsp+ACh] [rbp-Dh]
  bool *v36; // [rsp+B0h] [rbp-9h]
  __int64 v37; // [rsp+B8h] [rbp-1h]
  unsigned __int64 *p_ActivationId; // [rsp+C0h] [rbp+7h]
  __int64 v39; // [rsp+C8h] [rbp+Fh]

  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v21);
  v6 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                    v7,
                    _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1] <= 5u )
    *(_OWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  *(_DWORD *)v6 = 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v21);
  v9 = wil::details::static_lazy<WindowManagementLogging>::get(
         v8,
         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v9 > 5u )
  {
    ActivationId = VoiceAssistantPositionerTelemetry::GetActivationId(a3);
    v19 = a3 != 0LL;
    CensoredAumidFromView = VoiceAssistantPositionerTelemetry::GetCensoredAumidFromView(a2);
    CurrentThreadId = GetCurrentThreadId();
    v23 = 50331648LL;
    v20 = CurrentThreadId;
    v12 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v13 = *((_QWORD *)this + 6);
    v14 = (const GUID *)v12;
    v39 = 8LL;
    v37 = 1LL;
    p_ActivationId = &ActivationId;
    v15 = (const GUID *)(v13 + 8);
    v36 = &v19;
    if ( CensoredAumidFromView )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( CensoredAumidFromView[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      CensoredAumidFromView = &LocaleName;
      v17 = 2;
    }
    v34 = v17;
    v31 = &v20;
    v33 = CensoredAumidFromView;
    v29 = &v23;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    v35 = 0;
    v32 = 4LL;
    v30 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v26 = &unk_1806C17E8;
    UserData.Reserved = 2;
    v18 = *(_QWORD *)(v9 + 32);
    v27 = 121;
    v28 = 1;
    LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v18, &EventDescriptor, v15, v14, 7u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)((char *)this + 8));
}
