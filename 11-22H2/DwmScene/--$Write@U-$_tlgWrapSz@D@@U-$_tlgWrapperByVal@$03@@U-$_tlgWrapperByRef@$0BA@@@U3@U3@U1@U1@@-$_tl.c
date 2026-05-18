/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@5533@Z @ 0x1800029D4
 * Callers:
 *     ?Export3DModelAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD1@Z @ 0x180022510 (-Export3DModelAbort@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD1@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 *a9,
        const wchar_t **a10,
        const wchar_t **a11)
{
  __int64 v12; // rdx
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  const wchar_t *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  const wchar_t *v20; // rcx
  int v21; // edx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-81h] BYREF
  const wchar_t *v24; // [rsp+50h] [rbp-61h]
  int v25; // [rsp+58h] [rbp-59h]
  int v26; // [rsp+5Ch] [rbp-55h]
  __int64 v27; // [rsp+60h] [rbp-51h]
  __int64 v28; // [rsp+68h] [rbp-49h]
  __int64 v29; // [rsp+70h] [rbp-41h]
  __int64 v30; // [rsp+78h] [rbp-39h]
  __int64 v31; // [rsp+80h] [rbp-31h]
  __int64 v32; // [rsp+88h] [rbp-29h]
  __int64 v33; // [rsp+90h] [rbp-21h]
  __int64 v34; // [rsp+98h] [rbp-19h]
  const wchar_t *v35; // [rsp+A0h] [rbp-11h]
  int v36; // [rsp+A8h] [rbp-9h]
  int v37; // [rsp+ACh] [rbp-5h]
  const wchar_t *v38; // [rsp+B0h] [rbp-1h]
  int v39; // [rsp+B8h] [rbp+7h]
  int v40; // [rsp+BCh] [rbp+Bh]

  v12 = -1LL;
  v13 = *a11;
  if ( *a11 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_BYTE *)v13 + v14) );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &word_180106082;
    v15 = 1;
  }
  v39 = v15;
  v38 = v13;
  v40 = 0;
  v16 = *a10;
  if ( *a10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *((_BYTE *)v16 + v17) );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &word_180106082;
    v18 = 1;
  }
  v36 = v18;
  v35 = v16;
  v37 = 0;
  v34 = 16LL;
  v33 = *a9;
  v32 = 16LL;
  v30 = 16LL;
  v31 = *a8;
  v28 = 4LL;
  v19 = *a7;
  v27 = a6;
  v29 = v19;
  v20 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( *((_BYTE *)v20 + v12) );
    v21 = v12 + 1;
  }
  else
  {
    v20 = &word_180106082;
    v21 = 1;
  }
  v24 = v20;
  v25 = v21;
  v26 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801C81C0, a2, 0LL, 0LL, 9u, &v23);
}
