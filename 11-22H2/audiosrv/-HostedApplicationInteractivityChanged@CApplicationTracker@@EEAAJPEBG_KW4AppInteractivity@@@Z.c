/*
 * XREFs of ?HostedApplicationInteractivityChanged@CApplicationTracker@@EEAAJPEBG_KW4AppInteractivity@@@Z @ 0x1800D4B50
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800D4478 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D4554 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle.c)
 *     ??1?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@wil@@QEAA@XZ @ 0x1800D4578 (--1-$unique_call@P6AJXZ$1-CoRevertToSelf@@YAJXZ$0A@@wil@@QEAA@XZ.c)
 *     ?CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV?$unique_call@P6AJXZ$1?CoRevertToSelf@@YAJXZ$0A@@1@@Z @ 0x1800D4998 (-CoImpersonateClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@AEAV-$unique_call@P6AJXZ$1-CoRevertTo.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x1800D49FC (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800D4E24 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CApplicationTracker::HostedApplicationInteractivityChanged(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        int a4)
{
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  int ProcessHandleForClientOfObject_nothrow; // eax
  __int64 v12; // rdx
  DWORD ProcessId; // edi
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  _DWORD *v20; // rcx
  int ReturnLength; // [rsp+20h] [rbp-60h]
  unsigned int ProcessInformation; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned int v25; // [rsp+58h] [rbp-28h] BYREF
  DWORD v26; // [rsp+5Ch] [rbp-24h] BYREF
  ULONG v27; // [rsp+60h] [rbp-20h] BYREF
  HANDLE Process; // [rsp+68h] [rbp-18h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h] BYREF
  const WCHAR *v30; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  char v32; // [rsp+B0h] [rbp+30h] BYREF

  v32 = 0;
  v8 = wil::CoImpersonateClientOfObject_nothrow(a1 - 8, &v32);
  v10 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)v8);
LABEL_14:
    wil::unique_call<long (*)(void),&long CoRevertToSelf(void),0>::~unique_call<long (*)(void),&long CoRevertToSelf(void),0>(&v32);
    return v10;
  }
  Process = 0LL;
  ProcessHandleForClientOfObject_nothrow = wil::GetProcessHandleForClientOfObject_nothrow(a1 - 8, v9, (__int64)&Process);
  v10 = ProcessHandleForClientOfObject_nothrow;
  if ( ProcessHandleForClientOfObject_nothrow < 0 )
  {
    v12 = 85LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
      (const char *)(unsigned int)ProcessHandleForClientOfObject_nothrow);
    goto LABEL_13;
  }
  ProcessId = GetProcessId(Process);
  v14 = NtQueryInformationProcess(Process, ProcessSessionInformation, &ProcessInformation, 4u, &v27);
  if ( v14 < 0 )
  {
    v10 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x5D,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp",
            (const char *)(unsigned int)v14,
            ReturnLength);
LABEL_13:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&Process);
    goto LABEL_14;
  }
  v16 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          v15,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v19 = ProcessInformation;
  v20 = (_DWORD *)v16[1];
  if ( *v20 > 4u )
  {
    v24 = a4;
    v29 = a3;
    v30 = a2;
    v25 = ProcessInformation;
    v26 = ProcessId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v20,
      byte_18018F623,
      v17,
      v18,
      (__int64)&v26,
      (__int64)&v25,
      &v30,
      (__int64)&v29,
      (__int64)&v24);
  }
  if ( (unsigned int)IsPbmReportHostedAppStateChangeSupported() )
  {
    ProcessHandleForClientOfObject_nothrow = PbmReportHostedAppStateChange_2(
                                               v19,
                                               a2,
                                               a3,
                                               (unsigned int)(a4 != 1) + 2,
                                               a1 + 24);
    v10 = ProcessHandleForClientOfObject_nothrow;
    if ( ProcessHandleForClientOfObject_nothrow < 0 )
    {
      v12 = 108LL;
      goto LABEL_12;
    }
  }
  if ( Process )
    CloseHandle(Process);
  if ( v32 )
    CoRevertToSelf();
  return 0LL;
}
