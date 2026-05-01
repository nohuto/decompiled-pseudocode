/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803CBE18
 * Callers:
 *     ??$ManagedViewEvent@PEBGAEAY09$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY09$$CBG$$QEAI@Z @ 0x1803CB528 (--$ManagedViewEvent@PEBGAEAY09$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY09$$CBG$$QE.c)
 *     ??$ManagedViewEvent@PEBGAEAY0L@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0L@$$CBG$$QEAI@Z @ 0x1803CB5D8 (--$ManagedViewEvent@PEBGAEAY0L@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0L@$$CBG$$.c)
 *     ??$ManagedViewEvent@PEBGAEAY0M@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0M@$$CBG$$QEAI@Z @ 0x1803CB688 (--$ManagedViewEvent@PEBGAEAY0M@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0M@$$CBG$$.c)
 *     ??$ManagedViewEvent@PEBGAEAY0O@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0O@$$CBG$$QEAI@Z @ 0x1803CB738 (--$ManagedViewEvent@PEBGAEAY0O@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0O@$$CBG$$.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rcx
  int v11; // r9d
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  int v14; // r8d
  const WCHAR *v15; // rdx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-39h] BYREF
  const WCHAR *v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  const WCHAR *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  __int64 v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  __int64 v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]

  v26 = a8;
  v24 = a7;
  v10 = -1LL;
  v11 = 2;
  v27 = 8LL;
  v25 = 4LL;
  v12 = *a6;
  if ( *a6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &LocaleName;
    v14 = 2;
  }
  v21 = v12;
  v22 = v14;
  v23 = 0;
  v15 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v15[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v15 = &LocaleName;
  }
  v18 = v15;
  v19 = v11;
  v20 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 6u, &v17);
}
