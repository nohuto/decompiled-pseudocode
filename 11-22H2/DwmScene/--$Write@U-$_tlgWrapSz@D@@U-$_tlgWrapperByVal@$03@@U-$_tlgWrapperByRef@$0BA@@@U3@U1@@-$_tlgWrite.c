/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@53@Z @ 0x180001B44
 * Callers:
 *     ?CanvasException@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXPEBD@Z @ 0x180022020 (-CanvasException@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXPEBD@Z.c)
 *     ?LoadModelSessionAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x1800232B0 (-LoadModelSessionAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD.c)
 *     ?LoadModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023650 (-LoadModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD.c)
 *     ?SerializeModelSessionAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023B20 (-SerializeModelSessionAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23.c)
 *     ?SerializeModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD@Z @ 0x180023DF0 (-SerializeModelSessionStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        const wchar_t **a9)
{
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  const wchar_t *v15; // rcx
  int v16; // edx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  const wchar_t *v19; // [rsp+50h] [rbp-31h]
  int v20; // [rsp+58h] [rbp-29h]
  int v21; // [rsp+5Ch] [rbp-25h]
  __int64 v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  __int64 v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int64 v27; // [rsp+88h] [rbp+7h]
  const wchar_t *v28; // [rsp+90h] [rbp+Fh]
  int v29; // [rsp+98h] [rbp+17h]
  int v30; // [rsp+9Ch] [rbp+1Bh]

  v10 = -1LL;
  v11 = *a9;
  if ( *a9 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *((_BYTE *)v11 + v12) );
    v13 = v12 + 1;
  }
  else
  {
    v11 = &word_180106082;
    v13 = 1;
  }
  v29 = v13;
  v28 = v11;
  v30 = 0;
  v27 = 16LL;
  v26 = *a8;
  v25 = 16LL;
  v23 = 4LL;
  v14 = *a7;
  v22 = a6;
  v24 = v14;
  v15 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( *((_BYTE *)v15 + v10) );
    v16 = v10 + 1;
  }
  else
  {
    v15 = &word_180106082;
    v16 = 1;
  }
  v19 = v15;
  v20 = v16;
  v21 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801C81C0, a2, 0LL, 0LL, 7u, &v18);
}
