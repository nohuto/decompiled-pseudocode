/*
 * XREFs of ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180092450
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800730FC (-LockExclusive@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x180091E60 (-Stop@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180092014 (-StartActivity@VAPositioner_ShouldHandleActivationActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 *     ?IsVoiceActivation@PositionerPropertySetHelpers@@YAJV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z @ 0x18014735C (-IsVoiceActivation@PositionerPropertySetHelpers@@YAJV-$ComPtr@UIPropertySet@Collections@Foundati.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801750E0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag__ea_1801750E0.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?SetUnhandledException@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1803A3434 (-SetUnhandledException@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1804F604C (-ReportStopActivity@-$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorT.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VoiceAssistantPositioner::ShouldHandleActivation(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  unsigned __int8 v5; // bl
  unsigned int v6; // edi
  __int64 v7; // rcx
  char v8; // bl
  __int64 v9; // rcx
  unsigned int v11; // eax
  void *v12; // rbx
  HANDLE ProcessHeap; // rax
  void *v14; // rbx
  HANDLE v15; // rax
  _QWORD *v16; // rax
  unsigned __int8 v17[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  RTL_SRWLOCK *v20; // [rsp+38h] [rbp-C8h] BYREF
  void **v21; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+60h] [rbp-A0h]
  int *v24; // [rsp+68h] [rbp-98h]
  int *v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+78h] [rbp-88h] BYREF
  char v27; // [rsp+7Ch] [rbp-84h]
  _BYTE v28[32]; // [rsp+80h] [rbp-80h] BYREF
  int v29; // [rsp+A0h] [rbp-60h] BYREF
  const char *v30; // [rsp+A8h] [rbp-58h]
  LPVOID v31; // [rsp+B0h] [rbp-50h]
  char v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  _BYTE v34[152]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE lpMem[24]; // [rsp+160h] [rbp+60h]
  _DWORD *v36; // [rsp+178h] [rbp+78h] BYREF

  v22[0] = 0LL;
  v22[1] = &v21;
  v22[2] = 0LL;
  v23 = 0;
  v24 = &v29;
  v25 = &v26;
  v26 = 0;
  v27 = 0;
  v32 = 0;
  v29 = 0;
  v30 = "VAPositioner_ShouldHandleActivationActivity";
  v31 = 0LL;
  v33 = 1LL;
  *(_QWORD *)lpMem = 0LL;
  memset_0(v34, 0, sizeof(v34));
  *(_OWORD *)&lpMem[8] = 0LL;
  v36 = 0LL;
  v21 = &VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::`vftable';
  VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::StartActivity(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)&v21,
    a2,
    a3);
  v5 = 0;
  v17[0] = 0;
  v18 = 0LL;
  if ( a3
    && ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v18) >= 0 )
  {
    v19 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    PositionerPropertySetHelpers::IsVoiceActivation(&v19, v17);
    v5 = v17[0];
  }
  VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::Stop(
    (VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity *)&v21,
    v5);
  v6 = v5;
  v7 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v21 = &VoiceAssistantPositionerTelemetry::VAPositioner_ShouldHandleActivationActivity::`vftable';
  v8 = 1;
  if ( !v36 )
    goto LABEL_9;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v21,
    &v20);
  if ( !v36 || *v36 != 1 )
  {
    v8 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v36);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v20);
  if ( v8 )
  {
LABEL_9:
    if ( *v25 == 1 )
    {
      v11 = wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        &v21,
        v11);
    }
  }
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,1,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v36);
  v9 = *(_QWORD *)lpMem;
  if ( *(_QWORD *)lpMem )
  {
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)lpMem, 0xFFFFFFFF) == 1 )
    {
      v12 = *(void **)lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v12);
    }
    *(_OWORD *)lpMem = 0LL;
  }
  if ( v32 )
  {
    v14 = v31;
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v14);
    v32 = 0;
  }
  v31 = 0LL;
  if ( v26 == 1 )
  {
    v26 = 2;
    v16 = wil::details::static_lazy<WindowManagementLogging>::get(
            v9,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,5>(v16[1], v28);
  }
  v26 = 3;
  if ( v23 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v22);
  return v6;
}
