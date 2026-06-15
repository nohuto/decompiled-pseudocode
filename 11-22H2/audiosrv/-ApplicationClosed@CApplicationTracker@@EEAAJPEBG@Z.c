/*
 * XREFs of ?ApplicationClosed@CApplicationTracker@@EEAAJPEBG@Z @ 0x1800D4620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800D039C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D4554 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle.c)
 *     ??1?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@wil@@QEAA@XZ @ 0x1800D4578 (--1-$unique_call@P6AJXZ$1-CoRevertToSelf@@YAJXZ$0A@@wil@@QEAA@XZ.c)
 *     ?CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@1@@Z @ 0x1800D4998 (-CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV-$unique_call@P6AJXZ$1-CoRevertTo.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x1800D49FC (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
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
  HANDLE Process; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  const WCHAR *v18; // [rsp+40h] [rbp-10h] BYREF
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
      (void *)0x39,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v4);
LABEL_13:
    wil::unique_call<long (*)(void),&long CoRevertToSelf(void),0>::~unique_call<long (*)(void),&long CoRevertToSelf(void),0>(&v20);
    return v6;
  }
  Process = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(this, v5, &Process);
  v6 = ProcessHandleForClientOfObject_nothrow;
  if ( ProcessHandleForClientOfObject_nothrow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
LABEL_12:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&Process);
    goto LABEL_13;
  }
  ProcessId = GetProcessId(Process);
  v10 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    v9,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 4u )
  {
    v18 = a2;
    v21 = ProcessId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v10,
      byte_18018F698,
      v11,
      v12,
      (__int64)&v21,
      &v18);
  }
  v17 = 0LL;
  v13 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
          g_PolicyManager,
          &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0,
          &v17);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 71LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v13);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
    goto LABEL_12;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *))(*(_QWORD *)v17 + 112LL))(v17, a2);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 74LL;
    goto LABEL_11;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
  if ( Process )
    CloseHandle(Process);
  if ( v20 )
    CoRevertToSelf();
  return 0LL;
}
