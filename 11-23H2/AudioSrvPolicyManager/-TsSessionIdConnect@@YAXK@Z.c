/*
 * XREFs of ?TsSessionIdConnect@@YAXK@Z @ 0x180038214
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180037500 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D6C (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180009190 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x180035DDC (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180038F70 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18003911C (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x180039758 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180045774 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdConnect(DWORD a1)
{
  unsigned int TsAudioProtocol; // edi
  __int64 v3; // rcx
  struct TSSession *v4; // rbx
  wil::details::in1diag3 *v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct TSSession *v15; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+50h] [rbp+18h] BYREF

  TsAudioProtocol = GetTsAudioProtocol(a1);
  CApplicationManager::Lock(v3, &v16);
  if ( (int)TsSessionFromSessionId(a1, 1, &v15) >= 0 )
  {
    v4 = v15;
    TsSessionRefreshSessionInformation(v15);
    TsSessionUpdateAudioProtocol(v4, TsAudioProtocol);
    if ( *((_QWORD *)v4 + 3) == -130LL || !*(_WORD *)(*((_QWORD *)v4 + 3) + 130LL) )
    {
      v6 = AudioSrvPolicyManagerTelemetryProvider::Provider((__int64)v5);
      if ( *(_DWORD *)v6 > 4u )
      {
        LODWORD(v15) = *(_DWORD *)v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)v6,
          byte_180055BBB,
          v7,
          v8,
          (__int64)&v15);
      }
      *((_DWORD *)v4 + 9) = 0;
      *((_DWORD *)v4 + 278) = 0;
      v9 = QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v4);
      v5 = retaddr;
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1484LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v9);
    }
    if ( TsAudioProtocol )
    {
      if ( TsAudioProtocol != 0xFFFF )
      {
        v10 = AudioSrvPolicyManagerTelemetryProvider::Provider((__int64)v5);
        if ( *(_DWORD *)v10 > 4u )
        {
          LODWORD(v15) = *(_DWORD *)v4;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (__int64)v10,
            byte_180055B7F,
            v11,
            v12,
            (__int64)&v15);
        }
        *((_DWORD *)v4 + 9) = 0;
        *((_DWORD *)v4 + 278) = 0;
        v13 = QueueSessionMuteUnmute(0xFFFFFFFF, *(_DWORD *)v4);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1518LL,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)(unsigned int)v13);
      }
    }
    else if ( *(_QWORD *)(*((_QWORD *)v4 + 3) + 200LL) )
    {
      TsSessionNewPrimaryConsoleAudioSession(v4);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
}
