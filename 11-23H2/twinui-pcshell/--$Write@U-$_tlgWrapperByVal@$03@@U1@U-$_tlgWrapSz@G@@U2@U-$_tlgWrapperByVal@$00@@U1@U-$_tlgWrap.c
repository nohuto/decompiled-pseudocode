/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18071EC1C
 * Callers:
 *     ??$CPCProviderAppClose@IHAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAHAEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x18027AB20 (--$CPCProviderAppClose@IHAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBG$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x18027AC14 (--$CPCProviderAppClose@IIAEAY0BAE@GPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 *     ??$CPCProviderAppClose@IHAEAY0BAE@GPEBGAEA_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAHAEAY0BAE@G$$QEAPEBGAEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x18071E6DC (--$CPCProviderAppClose@IHAEAY0BAE@GPEBGAEA_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCT.c)
 *     ??$CPCProviderAppClose@IHPEBGPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2$$QEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x18071E7DC (--$CPCProviderAppClose@IHPEBGPEBG_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryC.c)
 *     ??$CPCProviderAppClose@IIAEAY0BAE@GPEBGAEA_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI0AEAY0BAE@G$$QEAPEBGAEA_N$$QEAW4SourceOfDisconnect@0@@Z @ 0x18071E8E0 (--$CPCProviderAppClose@IIAEAY0BAE@GPEBGAEA_NW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCT.c)
 *     ??$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTelemetryCore@@SAX$$QEAI$$QEAH$$QEAPEBG2AEA_NAEAW4SourceOfDisconnect@0@@Z @ 0x180731038 (--$CPCProviderAppClose@IHPEBGPEBGAEA_NAEAW4SourceOfDisconnect@CloudPCTelemetryCore@@@CloudPCTele.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // rcx
  int v14; // r9d
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  const WCHAR *v18; // rdx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-81h] BYREF
  __int64 v21; // [rsp+50h] [rbp-61h]
  __int64 v22; // [rsp+58h] [rbp-59h]
  __int64 v23; // [rsp+60h] [rbp-51h]
  __int64 v24; // [rsp+68h] [rbp-49h]
  const WCHAR *v25; // [rsp+70h] [rbp-41h]
  int v26; // [rsp+78h] [rbp-39h]
  int v27; // [rsp+7Ch] [rbp-35h]
  const WCHAR *v28; // [rsp+80h] [rbp-31h]
  int v29; // [rsp+88h] [rbp-29h]
  int v30; // [rsp+8Ch] [rbp-25h]
  __int64 v31; // [rsp+90h] [rbp-21h]
  __int64 v32; // [rsp+98h] [rbp-19h]
  __int64 v33; // [rsp+A0h] [rbp-11h]
  __int64 v34; // [rsp+A8h] [rbp-9h]
  __int64 v35; // [rsp+B0h] [rbp-1h]
  __int64 v36; // [rsp+B8h] [rbp+7h]

  v35 = a11;
  v33 = a10;
  v13 = -1LL;
  v14 = 2;
  v31 = a9;
  v36 = 8LL;
  v34 = 4LL;
  v32 = 1LL;
  v15 = *a8;
  if ( *a8 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &LocaleName;
    v17 = 2;
  }
  v28 = v15;
  v29 = v17;
  v30 = 0;
  v18 = *a7;
  if ( *a7 )
  {
    do
      ++v13;
    while ( v18[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v18 = &LocaleName;
  }
  v23 = a6;
  v21 = a5;
  v25 = v18;
  v26 = v14;
  v27 = 0;
  v24 = 4LL;
  v22 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v20);
}
