/*
 * XREFs of ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180038F70
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x1800375B8 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180038214 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180038954 (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001520 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x180035DDC (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 */

void __fastcall TsSessionNewPrimaryConsoleAudioSession(struct TSSession *a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  _QWORD *i; // rax
  _DWORD *v5; // r8
  unsigned int v6; // ebx
  unsigned int *v7; // rax
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&stru_180061648);
  v3 = *(_DWORD *)a1 == 0;
  v15 = &stru_180061648;
  if ( !v3 )
  {
    for ( i = *(_QWORD **)qword_1800616E8; i != (_QWORD *)qword_1800616E8; i = (_QWORD *)*i )
    {
      v5 = (_DWORD *)i[3];
      if ( *v5 )
      {
        if ( v5[278] )
          break;
      }
    }
    if ( i == (_QWORD *)qword_1800616E8 )
    {
      v6 = -2;
    }
    else
    {
      v7 = (unsigned int *)i[3];
      if ( v7 == (unsigned int *)a1 )
        goto LABEL_18;
      v6 = -2;
      if ( v7 )
      {
        v7[278] = 0;
        v6 = *v7;
        if ( g_MaxSessions <= 1 )
          v7[9] = 1;
      }
    }
    *((_DWORD *)a1 + 9) = 0;
    *((_DWORD *)a1 + 278) = 1;
    if ( g_MaxSessions <= 1 )
    {
      v8 = AudioSrvPolicyManagerTelemetryProvider::Provider(v2);
      if ( *(_DWORD *)v8 > 4u )
      {
        v13 = *(_DWORD *)a1;
        v14 = v6;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)v8,
          byte_180055C1A,
          v9,
          v10,
          (__int64)&v14,
          (__int64)&v13);
      }
      v11 = QueueSessionMuteUnmute(v6, *(_DWORD *)a1);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          879LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v11);
    }
  }
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
}
