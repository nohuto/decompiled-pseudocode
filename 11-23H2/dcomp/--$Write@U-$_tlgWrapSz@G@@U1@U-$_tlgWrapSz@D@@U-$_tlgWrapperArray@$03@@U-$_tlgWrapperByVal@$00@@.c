/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800848A0
 * Callers:
 *     ??R_lambda_705dd68f1b823bc41096a82e28a04b4b_@@QEBA@PEBG0PEBDPEAIG@Z @ 0x18009AA68 (--R_lambda_705dd68f1b823bc41096a82e28a04b4b_@@QEBA@PEBG0PEBDPEAIG@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800849F4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperArray<4>,_tlgWrapperByVal<1>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        wchar_t **a5,
        wchar_t **a6,
        const unsigned __int16 **a7,
        __int64 *a8,
        __int64 a9)
{
  int v11; // r9d
  __int64 v12; // rcx
  const unsigned __int16 *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  wchar_t *v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  wchar_t *v19; // rdx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-61h] BYREF
  wchar_t *v22; // [rsp+50h] [rbp-41h]
  int v23; // [rsp+58h] [rbp-39h]
  int v24; // [rsp+5Ch] [rbp-35h]
  wchar_t *v25; // [rsp+60h] [rbp-31h]
  int v26; // [rsp+68h] [rbp-29h]
  int v27; // [rsp+6Ch] [rbp-25h]
  const unsigned __int16 *v28; // [rsp+70h] [rbp-21h]
  int v29; // [rsp+78h] [rbp-19h]
  int v30; // [rsp+7Ch] [rbp-15h]
  __int64 *v31; // [rsp+80h] [rbp-11h]
  __int64 v32; // [rsp+88h] [rbp-9h]
  __int64 v33; // [rsp+90h] [rbp-1h]
  int v34; // [rsp+98h] [rbp+7h]
  int v35; // [rsp+9Ch] [rbp+Bh]
  __int64 v36; // [rsp+A0h] [rbp+Fh]
  __int64 v37; // [rsp+A8h] [rbp+17h]

  v36 = a9;
  v37 = 1LL;
  v35 = 0;
  v11 = 2;
  v32 = 2LL;
  v33 = *a8;
  v34 = 4 * *((unsigned __int16 *)a8 + 4);
  v31 = a8 + 1;
  v12 = -1LL;
  v13 = *a7;
  if ( *a7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_BYTE *)v13 + v14) );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &word_1801E6500;
    v15 = 1;
  }
  v29 = v15;
  v28 = v13;
  v30 = 0;
  v16 = *a6;
  if ( *a6 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = word_1801E5750;
    v18 = 2;
  }
  v25 = v16;
  v26 = v18;
  v27 = 0;
  v19 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v19[v12] );
    v11 = 2 * v12 + 2;
  }
  else
  {
    v19 = word_1801E5750;
  }
  v22 = v19;
  v23 = v11;
  v24 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 8u, &v21);
}
