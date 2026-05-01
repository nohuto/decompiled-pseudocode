/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180709EBC
 * Callers:
 *     ??$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z @ 0x180709944 (--$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9)
{
  __int64 v11; // rcx
  int v12; // r9d
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  const WCHAR *v16; // rdx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  __int64 v19; // [rsp+50h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-29h]
  __int64 v21; // [rsp+60h] [rbp-21h]
  __int64 v22; // [rsp+68h] [rbp-19h]
  const WCHAR *v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+7Ch] [rbp-5h]
  const WCHAR *v26; // [rsp+80h] [rbp-1h]
  int v27; // [rsp+88h] [rbp+7h]
  int v28; // [rsp+8Ch] [rbp+Bh]
  __int64 v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+98h] [rbp+17h]

  v29 = a9;
  v11 = -1LL;
  v30 = 8LL;
  v12 = 2;
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
    v13 = &LocaleName;
    v15 = 2;
  }
  v26 = v13;
  v27 = v15;
  v28 = 0;
  v16 = *a7;
  if ( *a7 )
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
  v21 = a6;
  v19 = a5;
  v23 = v16;
  v24 = v12;
  v25 = 0;
  v22 = 4LL;
  v20 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 7u, &v18);
}
