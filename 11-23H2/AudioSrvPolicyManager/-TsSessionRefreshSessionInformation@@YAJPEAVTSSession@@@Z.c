/*
 * XREFs of ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18003911C
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180038214 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180038954 (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D6C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800103FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800188B4 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180039218 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionRefreshSessionInformation(DWORD *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  DWORD v5; // edx
  const char *v6; // r9
  LPWSTR v8; // rsi
  void *v9; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v11; // [rsp+50h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+54h] [rbp+Ch]
  DWORD pBytesReturned; // [rsp+58h] [rbp+10h] BYREF
  LPWSTR ppBuffer; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h] BYREF

  v2 = AudioSrvPolicyManagerTelemetryProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 4u )
  {
    v11 = *a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v2,
      byte_180055C8A,
      v3,
      v4,
      (__int64)&v11);
  }
  v5 = *a1;
  ppBuffer = 0LL;
  if ( !WTSQuerySessionInformationW(0LL, v5, WTSSessionInfo, &ppBuffer, &pBytesReturned) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x31A,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             v6);
  EnterCriticalSection(&stru_180061648);
  v8 = ppBuffer;
  v15 = &stru_180061648;
  v9 = (void *)*((_QWORD *)a1 + 3);
  if ( v9 )
  {
    LOBYTE(v11) = 0;
    LastError = GetLastError();
    WTSFreeMemory(v9);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v11);
  }
  *((_QWORD *)a1 + 3) = v8;
  TsSessionRefreshUserSid((struct TSSession *)a1);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
  return 0LL;
}
