/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@55@Z @ 0x1801CC064
 * Callers:
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z @ 0x1801CF2C4 (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGKJ@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const unsigned __int16 **a6,
        __int64 a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rcx
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  const unsigned __int16 *v16; // rdx
  int v17; // ecx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-69h] BYREF
  __int64 v20; // [rsp+50h] [rbp-49h]
  __int64 v21; // [rsp+58h] [rbp-41h]
  const unsigned __int16 *v22; // [rsp+60h] [rbp-39h]
  int v23; // [rsp+68h] [rbp-31h]
  int v24; // [rsp+6Ch] [rbp-2Dh]
  __int64 v25; // [rsp+70h] [rbp-29h]
  __int64 v26; // [rsp+78h] [rbp-21h]
  const WCHAR *v27; // [rsp+80h] [rbp-19h]
  int v28; // [rsp+88h] [rbp-11h]
  int v29; // [rsp+8Ch] [rbp-Dh]
  __int64 v30; // [rsp+90h] [rbp-9h]
  __int64 v31; // [rsp+98h] [rbp-1h]
  __int64 v32; // [rsp+A0h] [rbp+7h]
  __int64 v33; // [rsp+A8h] [rbp+Fh]

  v32 = a10;
  v30 = a9;
  v12 = -1LL;
  v33 = 4LL;
  v31 = 4LL;
  v13 = *a8;
  if ( *a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &Src;
    v15 = 2;
  }
  v25 = a7;
  v27 = v13;
  v28 = v15;
  v29 = 0;
  v16 = *a6;
  v26 = 4LL;
  if ( v16 )
  {
    do
      ++v12;
    while ( *((_BYTE *)v16 + v12) );
    v17 = v12 + 1;
  }
  else
  {
    v16 = &word_180225500;
    v17 = 1;
  }
  v23 = v17;
  v20 = a5;
  v22 = v16;
  v21 = 8LL;
  v24 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 8u, &v19);
}
