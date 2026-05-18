/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U3@U3@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@55333@Z @ 0x180002B28
 * Callers:
 *     ?Export3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD11@Z @ 0x180022910 (-Export3DModelStart@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXAEBVTelemetryTraceUid@23@0PEBD11.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
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
        const wchar_t **a11,
        const wchar_t **a12)
{
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  const wchar_t *v24; // rcx
  int v25; // edx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-99h] BYREF
  const wchar_t *v28; // [rsp+50h] [rbp-79h]
  int v29; // [rsp+58h] [rbp-71h]
  int v30; // [rsp+5Ch] [rbp-6Dh]
  __int64 v31; // [rsp+60h] [rbp-69h]
  __int64 v32; // [rsp+68h] [rbp-61h]
  __int64 v33; // [rsp+70h] [rbp-59h]
  __int64 v34; // [rsp+78h] [rbp-51h]
  __int64 v35; // [rsp+80h] [rbp-49h]
  __int64 v36; // [rsp+88h] [rbp-41h]
  __int64 v37; // [rsp+90h] [rbp-39h]
  __int64 v38; // [rsp+98h] [rbp-31h]
  const wchar_t *v39; // [rsp+A0h] [rbp-29h]
  int v40; // [rsp+A8h] [rbp-21h]
  int v41; // [rsp+ACh] [rbp-1Dh]
  const wchar_t *v42; // [rsp+B0h] [rbp-19h]
  int v43; // [rsp+B8h] [rbp-11h]
  int v44; // [rsp+BCh] [rbp-Dh]
  const wchar_t *v45; // [rsp+C0h] [rbp-9h]
  int v46; // [rsp+C8h] [rbp-1h]
  int v47; // [rsp+CCh] [rbp+3h]

  v13 = -1LL;
  v14 = *a12;
  if ( *a12 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_BYTE *)v14 + v15) );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &word_180106082;
    v16 = 1;
  }
  v46 = v16;
  v45 = v14;
  v47 = 0;
  v17 = *a11;
  if ( *a11 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *((_BYTE *)v17 + v18) );
    v19 = v18 + 1;
  }
  else
  {
    v17 = &word_180106082;
    v19 = 1;
  }
  v43 = v19;
  v42 = v17;
  v44 = 0;
  v20 = *a10;
  if ( *a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *((_BYTE *)v20 + v21) );
    v22 = v21 + 1;
  }
  else
  {
    v20 = &word_180106082;
    v22 = 1;
  }
  v40 = v22;
  v39 = v20;
  v41 = 0;
  v38 = 16LL;
  v37 = *a9;
  v36 = 16LL;
  v34 = 16LL;
  v35 = *a8;
  v32 = 4LL;
  v23 = *a7;
  v31 = a6;
  v33 = v23;
  v24 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( *((_BYTE *)v24 + v13) );
    v25 = v13 + 1;
  }
  else
  {
    v24 = &word_180106082;
    v25 = 1;
  }
  v28 = v24;
  v29 = v25;
  v30 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801C81C0, a2, 0LL, 0LL, 0xAu, &v27);
}
