/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@444444@Z @ 0x1800EA9A8
 * Callers:
 *     ?ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH00H@Z @ 0x1800EBED4 (-ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH00H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const unsigned __int16 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-99h] BYREF
  const unsigned __int16 *v18; // [rsp+50h] [rbp-79h]
  int v19; // [rsp+58h] [rbp-71h]
  int v20; // [rsp+5Ch] [rbp-6Dh]
  __int64 v21; // [rsp+60h] [rbp-69h]
  __int64 v22; // [rsp+68h] [rbp-61h]
  __int64 v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  __int64 v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  __int64 v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  __int64 v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  __int64 v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  __int64 v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]

  v33 = a12;
  v31 = a11;
  v29 = a10;
  v27 = a9;
  v25 = a8;
  v23 = a7;
  v21 = a6;
  v34 = 4LL;
  v32 = 4LL;
  v30 = 4LL;
  v13 = *a5;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_BYTE *)v13 + v14) );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &word_1801F8EB0;
    v15 = 1;
  }
  v19 = v15;
  v18 = v13;
  v20 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0xAu, &v17);
}
