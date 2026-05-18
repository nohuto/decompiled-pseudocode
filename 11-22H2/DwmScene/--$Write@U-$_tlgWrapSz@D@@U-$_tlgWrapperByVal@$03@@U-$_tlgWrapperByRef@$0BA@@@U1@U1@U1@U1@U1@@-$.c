/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@33333@Z @ 0x180001768
 * Callers:
 *     ?TranscoderInitialization@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAX_NPEBD11@Z @ 0x180024370 (-TranscoderInitialization@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAX_NPEBD11@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 *a7,
        const wchar_t **a8,
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
  const wchar_t *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  const wchar_t *v29; // rcx
  int v30; // r8d
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+30h] [rbp-99h] BYREF
  const wchar_t *v33; // [rsp+50h] [rbp-79h]
  int v34; // [rsp+58h] [rbp-71h]
  int v35; // [rsp+5Ch] [rbp-6Dh]
  __int64 v36; // [rsp+60h] [rbp-69h]
  __int64 v37; // [rsp+68h] [rbp-61h]
  __int64 v38; // [rsp+70h] [rbp-59h]
  __int64 v39; // [rsp+78h] [rbp-51h]
  const wchar_t *v40; // [rsp+80h] [rbp-49h]
  int v41; // [rsp+88h] [rbp-41h]
  int v42; // [rsp+8Ch] [rbp-3Dh]
  const wchar_t *v43; // [rsp+90h] [rbp-39h]
  int v44; // [rsp+98h] [rbp-31h]
  int v45; // [rsp+9Ch] [rbp-2Dh]
  const wchar_t *v46; // [rsp+A0h] [rbp-29h]
  int v47; // [rsp+A8h] [rbp-21h]
  int v48; // [rsp+ACh] [rbp-1Dh]
  const wchar_t *v49; // [rsp+B0h] [rbp-19h]
  int v50; // [rsp+B8h] [rbp-11h]
  int v51; // [rsp+BCh] [rbp-Dh]
  const wchar_t *v52; // [rsp+C0h] [rbp-9h]
  int v53; // [rsp+C8h] [rbp-1h]
  int v54; // [rsp+CCh] [rbp+3h]

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
  v53 = v15;
  v52 = v13;
  v54 = 0;
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
  v50 = v18;
  v49 = v16;
  v51 = 0;
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
  v47 = v21;
  v46 = v19;
  v48 = 0;
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
  v44 = v24;
  v43 = v22;
  v45 = 0;
  v25 = *a8;
  if ( *a8 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *((_BYTE *)v25 + v26) );
    v27 = v26 + 1;
  }
  else
  {
    v25 = &word_180106082;
    v27 = 1;
  }
  v41 = v27;
  v40 = v25;
  v42 = 0;
  v39 = 16LL;
  v28 = *a7;
  v36 = a6;
  v38 = v28;
  v37 = 4LL;
  v29 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( *((_BYTE *)v29 + v12) );
    v30 = v12 + 1;
  }
  else
  {
    v29 = &word_180106082;
    v30 = 1;
  }
  v33 = v29;
  v34 = v30;
  v35 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801C81C0, a2, 0LL, 0LL, 0xAu, &v32);
}
