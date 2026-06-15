/*
 * XREFs of _lambda_ab72ab04c21953f372991cfef701d912_::operator() @ 0x1800346F4
 * Callers:
 *     wil::init_once_nothrow__lambda_ab72ab04c21953f372991cfef701d912___ @ 0x1800335F4 (wil--init_once_nothrow__lambda_ab72ab04c21953f372991cfef701d912___.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D6C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001DD0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18002FB54 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U?$function_deleter@P6AXPEAX@Z$1?WTSFreeMemory@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x180033E70 (--1-$out_param_t@V-$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U-$function_deleter@P6AXPEAX@Z$1-WTSF.c)
 *     ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180035E4C (-QueueVolumeRefreshForAllTsSessions@@YAXXZ.c)
 */

__int64 __fastcall lambda_ab72ab04c21953f372991cfef701d912_::operator()(__int64 a1)
{
  BOOL v1; // ebx
  __int64 v2; // rbx
  BOOL v3; // edi
  const char *v4; // r9
  __int64 v5; // rcx
  int v6; // edi
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID v15; // rcx
  PVOID v16; // rcx
  unsigned int v17; // ebx
  int v19; // [rsp+40h] [rbp-38h] BYREF
  PVOID pMemory; // [rsp+48h] [rbp-30h] BYREF
  PVOID v21; // [rsp+50h] [rbp-28h] BYREF
  PVOID *p_pMemory; // [rsp+58h] [rbp-20h] BYREF
  PWTS_SESSION_INFOW ppSessionInfo; // [rsp+60h] [rbp-18h] BYREF
  char v24; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  DWORD pCount; // [rsp+A0h] [rbp+28h] BYREF
  int v27; // [rsp+A4h] [rbp+2Ch]
  DWORD pBytesReturned; // [rsp+A8h] [rbp+30h] BYREF
  int v29; // [rsp+B0h] [rbp+38h] BYREF
  int v30; // [rsp+B8h] [rbp+40h] BYREF

  v27 = HIDWORD(a1);
  v21 = 0LL;
  pCount = 0;
  ppSessionInfo = 0LL;
  p_pMemory = &v21;
  v24 = 1;
  v1 = WTSEnumerateSessionsW(0LL, 0, 1u, &ppSessionInfo, &pCount);
  wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&p_pMemory);
  if ( v1 )
  {
    v2 = 0LL;
    if ( pCount )
    {
      while ( 1 )
      {
        pMemory = 0LL;
        pBytesReturned = 0;
        ppSessionInfo = 0LL;
        p_pMemory = &pMemory;
        v24 = 1;
        v3 = WTSQuerySessionInformationW(
               0LL,
               *((_DWORD *)v21 + 6 * v2),
               WTSSessionInfoEx,
               (LPWSTR *)&ppSessionInfo,
               &pBytesReturned);
        if ( !v3 )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0x6FF,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            v4);
        wil::details::out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>::~out_param_t<wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>>((__int64)&p_pMemory);
        if ( v3 )
        {
          v6 = *((_DWORD *)pMemory + 4);
          v7 = AudioSrvPolicyManagerTelemetryProvider::Provider(v5);
          if ( *(_DWORD *)v7 > 4u )
          {
            v30 = g_GlobalUserPresent;
            v29 = v6;
            v19 = *((_DWORD *)v21 + 6 * v2);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)v7,
              byte_180055B25,
              v9,
              v10,
              (__int64)&v19,
              (__int64)&v30,
              (__int64)&v29);
          }
          if ( v6 == 1 )
            break;
        }
        v11 = pMemory;
        pMemory = 0LL;
        if ( v11 )
          WTSFreeMemory(v11);
        v2 = (unsigned int)(v2 + 1);
        if ( (unsigned int)v2 >= pCount )
          goto LABEL_17;
      }
      g_GlobalUserPresent = 1;
      v12 = AudioSrvPolicyManagerTelemetryProvider::Provider(v8);
      if ( *(_DWORD *)v12 > 4u )
      {
        v29 = *((_DWORD *)v21 + 6 * v2);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)v12,
          byte_180055AF0,
          v13,
          v14,
          (__int64)&v29);
      }
      QueueVolumeRefreshForAllTsSessions();
      v15 = pMemory;
      pMemory = 0LL;
      if ( v15 )
        WTSFreeMemory(v15);
    }
  }
LABEL_17:
  v16 = v21;
  v21 = 0LL;
  v17 = g_GlobalUserPresent == 0 ? 0x80004004 : 0;
  if ( v16 )
    WTSFreeMemory(v16);
  return v17;
}
