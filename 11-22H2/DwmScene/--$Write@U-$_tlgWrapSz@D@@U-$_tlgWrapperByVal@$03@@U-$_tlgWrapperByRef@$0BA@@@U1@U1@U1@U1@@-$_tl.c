/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@3333@Z @ 0x1800015F0
 * Callers:
 *     ?CanvasInitialization@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAX_NPEBD1@Z @ 0x180022120 (-CanvasInitialization@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAX_NPEBD1@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
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
        const wchar_t **a11)
{
  __int64 v11; // r8
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  const wchar_t *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  const wchar_t *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  const wchar_t *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  const wchar_t *v25; // rcx
  int v26; // r8d
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-81h] BYREF
  const wchar_t *v29; // [rsp+50h] [rbp-61h]
  int v30; // [rsp+58h] [rbp-59h]
  int v31; // [rsp+5Ch] [rbp-55h]
  __int64 v32; // [rsp+60h] [rbp-51h]
  __int64 v33; // [rsp+68h] [rbp-49h]
  __int64 v34; // [rsp+70h] [rbp-41h]
  __int64 v35; // [rsp+78h] [rbp-39h]
  const wchar_t *v36; // [rsp+80h] [rbp-31h]
  int v37; // [rsp+88h] [rbp-29h]
  int v38; // [rsp+8Ch] [rbp-25h]
  const wchar_t *v39; // [rsp+90h] [rbp-21h]
  int v40; // [rsp+98h] [rbp-19h]
  int v41; // [rsp+9Ch] [rbp-15h]
  const wchar_t *v42; // [rsp+A0h] [rbp-11h]
  int v43; // [rsp+A8h] [rbp-9h]
  int v44; // [rsp+ACh] [rbp-5h]
  const wchar_t *v45; // [rsp+B0h] [rbp-1h]
  int v46; // [rsp+B8h] [rbp+7h]
  int v47; // [rsp+BCh] [rbp+Bh]

  v11 = -1LL;
  v12 = *a11;
  if ( *a11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *((_BYTE *)v12 + v13) );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &word_180106082;
    v14 = 1;
  }
  v46 = v14;
  v45 = v12;
  v47 = 0;
  v15 = *a10;
  if ( *a10 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_BYTE *)v15 + v16) );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &word_180106082;
    v17 = 1;
  }
  v43 = v17;
  v42 = v15;
  v44 = 0;
  v18 = *a9;
  if ( *a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_BYTE *)v18 + v19) );
    v20 = v19 + 1;
  }
  else
  {
    v18 = &word_180106082;
    v20 = 1;
  }
  v40 = v20;
  v39 = v18;
  v41 = 0;
  v21 = *a8;
  if ( *a8 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *((_BYTE *)v21 + v22) );
    v23 = v22 + 1;
  }
  else
  {
    v21 = &word_180106082;
    v23 = 1;
  }
  v37 = v23;
  v36 = v21;
  v38 = 0;
  v35 = 16LL;
  v24 = *a7;
  v32 = a6;
  v34 = v24;
  v33 = 4LL;
  v25 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( *((_BYTE *)v25 + v11) );
    v26 = v11 + 1;
  }
  else
  {
    v25 = &word_180106082;
    v26 = 1;
  }
  v29 = v25;
  v30 = v26;
  v31 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801C81C0, a2, 0LL, 0LL, 9u, &v28);
}
