/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@335@Z @ 0x1800012B8
 * Callers:
 *     ?TraceMark@ETWTraceProvider@Utils@Spectre@@UEAAXPEBDV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@H00H@Z @ 0x1800212B0 (-TraceMark@ETWTraceProvider@Utils@Spectre@@UEAAXPEBDV-$time_point@Usteady_clock@chrono@std@@V-$d.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001554 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        const wchar_t **a9,
        __int64 a10)
{
  __int64 v10; // rcx
  const wchar_t *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  const wchar_t *v14; // r8
  __int64 v15; // rax
  int v16; // eax
  const wchar_t *v17; // r8
  int v18; // ecx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-69h] BYREF
  const wchar_t *v21; // [rsp+50h] [rbp-49h]
  int v22; // [rsp+58h] [rbp-41h]
  int v23; // [rsp+5Ch] [rbp-3Dh]
  __int64 v24; // [rsp+60h] [rbp-39h]
  __int64 v25; // [rsp+68h] [rbp-31h]
  __int64 v26; // [rsp+70h] [rbp-29h]
  __int64 v27; // [rsp+78h] [rbp-21h]
  const wchar_t *v28; // [rsp+80h] [rbp-19h]
  int v29; // [rsp+88h] [rbp-11h]
  int v30; // [rsp+8Ch] [rbp-Dh]
  const wchar_t *v31; // [rsp+90h] [rbp-9h]
  int v32; // [rsp+98h] [rbp-1h]
  int v33; // [rsp+9Ch] [rbp+3h]
  __int64 v34; // [rsp+A0h] [rbp+7h]
  __int64 v35; // [rsp+A8h] [rbp+Fh]

  v34 = a10;
  v10 = -1LL;
  v35 = 4LL;
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
  v32 = v13;
  v31 = v11;
  v33 = 0;
  v14 = *a8;
  if ( *a8 )
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
  v29 = v16;
  v26 = a7;
  v24 = a6;
  v28 = v14;
  v30 = 0;
  v27 = 4LL;
  v17 = *a5;
  v25 = 8LL;
  if ( v17 )
  {
    do
      ++v10;
    while ( *((_BYTE *)v17 + v10) );
    v18 = v10 + 1;
  }
  else
  {
    v17 = &word_180106082;
    v18 = 1;
  }
  v21 = v17;
  v22 = v18;
  v23 = 0;
  return tlgWriteTransfer_EventWriteTransfer((int)&dword_1801C8188, a2, 0, 0, 8u, &v20);
}
