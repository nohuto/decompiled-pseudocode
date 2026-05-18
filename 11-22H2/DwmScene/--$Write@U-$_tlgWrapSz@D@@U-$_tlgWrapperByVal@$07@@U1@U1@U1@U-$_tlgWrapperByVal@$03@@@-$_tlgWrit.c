/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001174
 * Callers:
 *     ?TraceMeasurement@ETWTraceProvider@Utils@Spectre@@UEAAXPEBDV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@000H@Z @ 0x180021340 (-TraceMeasurement@ETWTraceProvider@Utils@Spectre@@UEAAXPEBDV-$time_point@Usteady_clock@chrono@st.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        const wchar_t **a7,
        const wchar_t **a8,
        const wchar_t **a9,
        __int64 a10)
{
  __int64 v11; // rdx
  const wchar_t *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  const wchar_t *v15; // r8
  __int64 v16; // rax
  int v17; // eax
  const wchar_t *v18; // r8
  __int64 v19; // rax
  int v20; // eax
  const wchar_t *v21; // r8
  int v22; // edx
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-69h] BYREF
  const wchar_t *v25; // [rsp+50h] [rbp-49h]
  int v26; // [rsp+58h] [rbp-41h]
  int v27; // [rsp+5Ch] [rbp-3Dh]
  __int64 v28; // [rsp+60h] [rbp-39h]
  __int64 v29; // [rsp+68h] [rbp-31h]
  const wchar_t *v30; // [rsp+70h] [rbp-29h]
  int v31; // [rsp+78h] [rbp-21h]
  int v32; // [rsp+7Ch] [rbp-1Dh]
  const wchar_t *v33; // [rsp+80h] [rbp-19h]
  int v34; // [rsp+88h] [rbp-11h]
  int v35; // [rsp+8Ch] [rbp-Dh]
  const wchar_t *v36; // [rsp+90h] [rbp-9h]
  int v37; // [rsp+98h] [rbp-1h]
  int v38; // [rsp+9Ch] [rbp+3h]
  __int64 v39; // [rsp+A0h] [rbp+7h]
  __int64 v40; // [rsp+A8h] [rbp+Fh]

  v39 = a10;
  v11 = -1LL;
  v40 = 4LL;
  v12 = *a9;
  if ( *a9 )
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
  v37 = v14;
  v36 = v12;
  v38 = 0;
  v15 = *a8;
  if ( *a8 )
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
  v34 = v17;
  v33 = v15;
  v35 = 0;
  v18 = *a7;
  if ( *a7 )
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
  v31 = v20;
  v28 = a6;
  v30 = v18;
  v32 = 0;
  v29 = 8LL;
  v21 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( *((_BYTE *)v21 + v11) );
    v22 = v11 + 1;
  }
  else
  {
    v21 = &word_180106082;
    v22 = 1;
  }
  v25 = v21;
  v26 = v22;
  v27 = 0;
  return tlgWriteTransfer_EventWriteTransfer((int)&dword_1801C8188, a2, 0, 0, 8u, &v24);
}
