/*
 * XREFs of ?ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z @ 0x180112890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C9DCC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800ED518 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 *     ??1?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180112828 (--1-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details.c)
 *     ?CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@1@@Z @ 0x180112B70 (-CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV-$unique_call@P6AJXZ$1-CoRevertTo.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x180112C74 (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationTracker::ApplicationClosed(CApplicationTracker *this, const unsigned __int16 *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int ProcessHandleForClientOfObject_nothrow; // eax
  DWORD ProcessId; // ebx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Process; // [rsp+38h] [rbp-18h] BYREF
  void *v18; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v20; // [rsp+80h] [rbp+30h] BYREF
  int v21; // [rsp+88h] [rbp+38h] BYREF

  v20 = 0;
  v4 = wil::CoImpersonateClientOfObject_nothrow(this, &v20);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_15;
  }
  Process = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(this, v5, &Process);
  v6 = ProcessHandleForClientOfObject_nothrow;
  if ( ProcessHandleForClientOfObject_nothrow >= 0 )
  {
    ProcessId = GetProcessId(Process);
    v10 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                      v9,
                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v10 > 4u )
    {
      v18 = (void *)a2;
      v21 = ProcessId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        (__int64)v10,
        byte_18018B645,
        v11,
        v12,
        (__int64)&v21,
        &v18);
    }
    v16 = 0LL;
    v13 = wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(
            (__int64)v10,
            (__int64)&v16);
    v6 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *))(*(_QWORD *)v16 + 112LL))(v16, a2);
      v6 = v13;
      if ( v13 >= 0 )
      {
        v6 = 0;
        goto LABEL_13;
      }
      v14 = 71LL;
    }
    else
    {
      v14 = 68LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v13);
LABEL_13:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
    (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
LABEL_14:
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&Process);
LABEL_15:
  if ( v20 )
    CoRevertToSelf();
  return v6;
}
