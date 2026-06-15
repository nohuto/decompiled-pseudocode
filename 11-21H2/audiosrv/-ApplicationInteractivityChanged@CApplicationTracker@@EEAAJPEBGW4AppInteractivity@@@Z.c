/*
 * XREFs of ?ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z @ 0x1801129F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800C7FEC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800ED518 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180112828 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@1@@Z @ 0x180112B70 (-CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV-$unique_call@P6AJXZ$1-CoRevertTo.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x180112C74 (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationTracker::ApplicationInteractivityChanged(__int64 a1, void *a2, int a3)
{
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int ProcessHandleForClientOfObject_nothrow; // eax
  DWORD ProcessId; // ebx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Process; // [rsp+50h] [rbp-10h] BYREF
  void *v23; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v25; // [rsp+98h] [rbp+38h] BYREF

  v25 = 0;
  v6 = wil::CoImpersonateClientOfObject_nothrow(a1, &v25);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_15;
  }
  Process = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(a1, v7, &Process);
  v8 = ProcessHandleForClientOfObject_nothrow;
  if ( ProcessHandleForClientOfObject_nothrow >= 0 )
  {
    ProcessId = GetProcessId(Process);
    v12 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v11,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v12 > 4u )
    {
      v19 = a3;
      v23 = a2;
      v20 = ProcessId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        byte_18018B687,
        v13,
        v14,
        (__int64)&v20,
        &v23,
        (__int64)&v19);
    }
    v21 = 0LL;
    v15 = wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(
            (__int64)v12,
            (__int64)&v21);
    v8 = v15;
    if ( v15 >= 0 )
    {
      LOBYTE(v16) = a3 == 1;
      v15 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v21 + 104LL))(v21, a2, v16);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v8 = 0;
        goto LABEL_13;
      }
      v17 = 46LL;
    }
    else
    {
      v17 = 43LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v15);
LABEL_13:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
    (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
LABEL_14:
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&Process);
LABEL_15:
  if ( v25 )
    CoRevertToSelf();
  return v8;
}
