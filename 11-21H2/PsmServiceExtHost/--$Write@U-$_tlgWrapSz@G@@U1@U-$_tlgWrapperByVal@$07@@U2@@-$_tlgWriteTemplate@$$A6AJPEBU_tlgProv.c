/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1800447B8
 * Callers:
 *     ?HampStoreIdReferenceTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180044720 (-HampStoreIdReferenceTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        const unsigned __int16 **a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rcx
  int v10; // r9d
  const unsigned __int16 *v11; // rdx
  __int64 v12; // rax
  int v13; // r8d
  const unsigned __int16 *v14; // rdx
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+30h] [rbp-39h] BYREF
  const unsigned __int16 *v17; // [rsp+50h] [rbp-19h]
  int v18; // [rsp+58h] [rbp-11h]
  int v19; // [rsp+5Ch] [rbp-Dh]
  const unsigned __int16 *v20; // [rsp+60h] [rbp-9h]
  int v21; // [rsp+68h] [rbp-1h]
  int v22; // [rsp+6Ch] [rbp+3h]
  __int64 v23; // [rsp+70h] [rbp+7h]
  __int64 v24; // [rsp+78h] [rbp+Fh]
  __int64 v25; // [rsp+80h] [rbp+17h]
  __int64 v26; // [rsp+88h] [rbp+1Fh]

  v25 = a8;
  v9 = -1LL;
  v23 = a7;
  v10 = 2;
  v26 = 8LL;
  v24 = 8LL;
  v11 = *a6;
  if ( *a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &word_1800B7A9C;
    v13 = 2;
  }
  v20 = v11;
  v21 = v13;
  v22 = 0;
  v14 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( v14[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v14 = &word_1800B7A9C;
  }
  v17 = v14;
  v18 = v10;
  v19 = 0;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800DC218, a2, 0LL, 0LL, 6u, &v16);
}
