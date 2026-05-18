/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@53333@Z @ 0x180001C44
 * Callers:
 *     ?Import3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD111@Z @ 0x180023050 (-Import3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@PEBD111.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        const wchar_t **a9,
        const wchar_t **a10,
        const wchar_t **a11,
        const wchar_t **a12)
{
  __int64 v12; // r8
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  const wchar_t *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  const wchar_t *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  const wchar_t *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  const wchar_t *v26; // rcx
  int v27; // r8d
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-99h] BYREF
  const wchar_t *v30; // [rsp+50h] [rbp-79h]
  int v31; // [rsp+58h] [rbp-71h]
  int v32; // [rsp+5Ch] [rbp-6Dh]
  __int64 v33; // [rsp+60h] [rbp-69h]
  __int64 v34; // [rsp+68h] [rbp-61h]
  __int64 v35; // [rsp+70h] [rbp-59h]
  __int64 v36; // [rsp+78h] [rbp-51h]
  __int64 v37; // [rsp+80h] [rbp-49h]
  __int64 v38; // [rsp+88h] [rbp-41h]
  const wchar_t *v39; // [rsp+90h] [rbp-39h]
  int v40; // [rsp+98h] [rbp-31h]
  int v41; // [rsp+9Ch] [rbp-2Dh]
  const wchar_t *v42; // [rsp+A0h] [rbp-29h]
  int v43; // [rsp+A8h] [rbp-21h]
  int v44; // [rsp+ACh] [rbp-1Dh]
  const wchar_t *v45; // [rsp+B0h] [rbp-19h]
  int v46; // [rsp+B8h] [rbp-11h]
  int v47; // [rsp+BCh] [rbp-Dh]
  const wchar_t *v48; // [rsp+C0h] [rbp-9h]
  int v49; // [rsp+C8h] [rbp-1h]
  int v50; // [rsp+CCh] [rbp+3h]

  v12 = -1LL;
  v13 = *a12;
  if ( *a12 )
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
  v49 = v15;
  v48 = v13;
  v50 = 0;
  v16 = *a11;
  if ( *a11 )
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
  v46 = v18;
  v45 = v16;
  v47 = 0;
  v19 = *a10;
  if ( *a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *((_BYTE *)v19 + v20) );
    v21 = v20 + 1;
  }
  else
  {
    v19 = &word_180106082;
    v21 = 1;
  }
  v43 = v21;
  v42 = v19;
  v44 = 0;
  v22 = *a9;
  if ( *a9 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *((_BYTE *)v22 + v23) );
    v24 = v23 + 1;
  }
  else
  {
    v22 = &word_180106082;
    v24 = 1;
  }
  v40 = v24;
  v39 = v22;
  v41 = 0;
  v38 = 16LL;
  v37 = *a8;
  v36 = 16LL;
  v34 = 4LL;
  v25 = *a7;
  v33 = a6;
  v35 = v25;
  v26 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( *((_BYTE *)v26 + v12) );
    v27 = v12 + 1;
  }
  else
  {
    v26 = &word_180106082;
    v27 = 1;
  }
  v30 = v26;
  v31 = v27;
  v32 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801C81C0, a2, 0LL, 0LL, 0xAu, &v29);
}
