/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180731208
 * Callers:
 *     ??$SwitchingToCloudOrLocal@PEBGPEBG_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@CloudPCTelemetry@@SAX$$QEAPEBG0$$QEA_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@Z @ 0x18073113C (--$SwitchingToCloudOrLocal@PEBGPEBG_NAEAW4SwitchSource@Shell@Internal@Windows@winrt@@@CloudPCTel.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rcx
  int v12; // r9d
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  const WCHAR *v16; // rdx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-31h]
  int v20; // [rsp+58h] [rbp-29h]
  int v21; // [rsp+5Ch] [rbp-25h]
  const WCHAR *v22; // [rsp+60h] [rbp-21h]
  int v23; // [rsp+68h] [rbp-19h]
  int v24; // [rsp+6Ch] [rbp-15h]
  __int64 v25; // [rsp+70h] [rbp-11h]
  __int64 v26; // [rsp+78h] [rbp-9h]
  __int64 v27; // [rsp+80h] [rbp-1h]
  __int64 v28; // [rsp+88h] [rbp+7h]
  __int64 v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+98h] [rbp+17h]

  v29 = a9;
  v27 = a8;
  v11 = -1LL;
  v12 = 2;
  v25 = a7;
  v30 = 8LL;
  v28 = 4LL;
  v26 = 1LL;
  v13 = *a6;
  if ( *a6 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &LocaleName;
    v15 = 2;
  }
  v22 = v13;
  v23 = v15;
  v24 = 0;
  v16 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v16[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v16 = &LocaleName;
  }
  v19 = v16;
  v20 = v12;
  v21 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 7u, &v18);
}
