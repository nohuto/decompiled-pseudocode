/*
 * XREFs of ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1800C5880
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800C5A90 (-zInternalStart@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C5B9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C5C74 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C8AE8 (--1-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType_ea_1800C8AE8.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18013304C (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::GetMonitor(XamlLauncher *this, struct IImmersiveMonitor **a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // rsi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rcx
  void *v14; // rbx
  void *v15; // rbx
  HANDLE ProcessHeap; // rax
  void *v17; // rbx
  HANDLE v18; // rax
  __int64 v19; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-D0h] BYREF
  int v21[2]; // [rsp+38h] [rbp-C8h] BYREF
  void **v22; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+60h] [rbp-A0h]
  int *v25; // [rsp+68h] [rbp-98h]
  int *v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h] BYREF
  char v28; // [rsp+7Ch] [rbp-84h]
  _BYTE v29[32]; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+A0h] [rbp-60h] BYREF
  const char *v31; // [rsp+A8h] [rbp-58h]
  LPVOID v32; // [rsp+B0h] [rbp-50h]
  char v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  _BYTE v35[152]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE lpMem[24]; // [rsp+160h] [rbp+60h]
  void *v37; // [rsp+178h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 40) )
    return 2147943568LL;
  v23[0] = 0LL;
  v23[1] = &v22;
  v23[2] = 0LL;
  v24 = 0;
  v25 = &v30;
  v26 = &v27;
  v27 = 0;
  v28 = 0;
  v33 = 0;
  v30 = 0;
  v31 = "GetImmersiveMonitor";
  v32 = 0LL;
  v34 = 1LL;
  *(_QWORD *)lpMem = 0LL;
  memset_0(v35, 0, sizeof(v35));
  *(_OWORD *)&lpMem[8] = 0LL;
  v37 = 0LL;
  v22 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(&v22);
  v6 = *(_DWORD **)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                      v4,
                      _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
                      v5)
                  + 8);
  if ( *v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    *(_QWORD *)v21 = 0LL;
    v7 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v22);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (_DWORD)v6,
      (unsigned int)&unk_1806B4242,
      (_DWORD)v26 + 8,
      v7,
      (__int64)v21,
      (__int64)&CurrentThreadId);
  }
  if ( !v24 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  v8 = *((_QWORD *)this + 23);
  *a2 = 0LL;
  v9 = *(_QWORD *)(v8 + 64);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *a2 = *(struct IImmersiveMonitor **)(v8 + 64);
    wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v22);
    v10 = 0;
  }
  else
  {
    v10 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)0x80070490LL);
  }
  v22 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v22);
  if ( v37 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)v37) )
    {
      v14 = v37;
      if ( v37 )
      {
        wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LauncherTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v37 + 8);
        operator delete(v14, 0x108uLL);
      }
    }
    v37 = 0LL;
  }
  v12 = *(_QWORD *)lpMem;
  if ( *(_QWORD *)lpMem )
  {
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)lpMem, 0xFFFFFFFF) == 1 )
    {
      v15 = *(void **)lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v15);
    }
    *(_OWORD *)lpMem = 0LL;
  }
  if ( v33 )
  {
    v17 = v32;
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v17);
    v33 = 0;
  }
  v32 = 0LL;
  if ( v27 == 1 )
  {
    v27 = 2;
    v19 = wil::details::static_lazy<LauncherTelemetryLogging>::get(
            v12,
            _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
            v11);
    _tlgWriteActivityAutoStop<0,5>(*(_QWORD *)(v19 + 8), v29);
  }
  v27 = 3;
  if ( v24 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  return v10;
}
