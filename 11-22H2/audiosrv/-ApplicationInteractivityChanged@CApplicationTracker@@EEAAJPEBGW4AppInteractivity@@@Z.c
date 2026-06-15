/*
 * XREFs of ?ApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBGW4AppInteractivity@@@Z @ 0x1800D47D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800D044C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D4554 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle.c)
 *     ??1?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@wil@@QEAA@XZ @ 0x1800D4578 (--1-$unique_call@P6AJXZ$1-CoRevertToSelf@@YAJXZ$0A@@wil@@QEAA@XZ.c)
 *     ?CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@1@@Z @ 0x1800D4998 (-CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV-$unique_call@P6AJXZ$1-CoRevertTo.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x1800D49FC (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationTracker::ApplicationInteractivityChanged(__int64 a1, const WCHAR *a2, int a3)
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
  HANDLE Process; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  const WCHAR *v23; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v25; // [rsp+98h] [rbp+38h] BYREF

  v25 = 0;
  v6 = wil::CoImpersonateClientOfObject_nothrow(a1, &v25);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v6);
LABEL_13:
    wil::unique_call<long (*)(void),&long CoRevertToSelf(void),0>::~unique_call<long (*)(void),&long CoRevertToSelf(void),0>(&v25);
    return v8;
  }
  Process = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(a1, v7, &Process);
  v8 = ProcessHandleForClientOfObject_nothrow;
  if ( ProcessHandleForClientOfObject_nothrow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
LABEL_12:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&Process);
    goto LABEL_13;
  }
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
      byte_18018F6DA,
      v13,
      v14,
      (__int64)&v20,
      &v23,
      (__int64)&v19);
  }
  v22 = 0LL;
  v15 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
          g_PolicyManager,
          &GUID_7cd77114_b031_4a63_bf09_9fd46c7629d0,
          &v22);
  v8 = v15;
  if ( v15 < 0 )
  {
    v17 = 46LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
    goto LABEL_12;
  }
  LOBYTE(v16) = a3 == 1;
  v15 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64))(*(_QWORD *)v22 + 104LL))(v22, a2, v16);
  v8 = v15;
  if ( v15 < 0 )
  {
    v17 = 49LL;
    goto LABEL_11;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v22);
  if ( Process )
    CloseHandle(Process);
  if ( v25 )
    CoRevertToSelf();
  return 0LL;
}
