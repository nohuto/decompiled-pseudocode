/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1807350DC
 * Callers:
 *     ??$CPCStateChanged@AEBIAEBIAEAPEBGPEBGPEBGPEBGAEAI@CloudPCTelemetryCore@@SAXAEBI0AEAPEBG$$QEAPEBG22AEAI@Z @ 0x180734FC0 (--$CPCStateChanged@AEBIAEBIAEAPEBGPEBGPEBGPEBGAEAI@CloudPCTelemetryCore@@SAXAEBI0AEAPEBG$$QEAPEB.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        const WCHAR **a9,
        const WCHAR **a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v14; // rcx
  int v15; // r8d
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int v21; // r9d
  const WCHAR *v22; // rdx
  __int64 v23; // rax
  int v24; // r9d
  const WCHAR *v25; // rdx
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+30h] [rbp-99h] BYREF
  __int64 v28; // [rsp+50h] [rbp-79h]
  __int64 v29; // [rsp+58h] [rbp-71h]
  __int64 v30; // [rsp+60h] [rbp-69h]
  __int64 v31; // [rsp+68h] [rbp-61h]
  const WCHAR *v32; // [rsp+70h] [rbp-59h]
  int v33; // [rsp+78h] [rbp-51h]
  int v34; // [rsp+7Ch] [rbp-4Dh]
  const WCHAR *v35; // [rsp+80h] [rbp-49h]
  int v36; // [rsp+88h] [rbp-41h]
  int v37; // [rsp+8Ch] [rbp-3Dh]
  const WCHAR *v38; // [rsp+90h] [rbp-39h]
  int v39; // [rsp+98h] [rbp-31h]
  int v40; // [rsp+9Ch] [rbp-2Dh]
  const WCHAR *v41; // [rsp+A0h] [rbp-29h]
  int v42; // [rsp+A8h] [rbp-21h]
  int v43; // [rsp+ACh] [rbp-1Dh]
  __int64 v44; // [rsp+B0h] [rbp-19h]
  __int64 v45; // [rsp+B8h] [rbp-11h]
  __int64 v46; // [rsp+C0h] [rbp-9h]
  __int64 v47; // [rsp+C8h] [rbp-1h]

  v46 = a12;
  v44 = a11;
  v14 = -1LL;
  v15 = 2;
  v47 = 8LL;
  v45 = 4LL;
  v16 = *a10;
  if ( *a10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &LocaleName;
    v18 = 2;
  }
  v41 = v16;
  v42 = v18;
  v43 = 0;
  v19 = *a9;
  if ( *a9 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &LocaleName;
    v21 = 2;
  }
  v38 = v19;
  v39 = v21;
  v40 = 0;
  v22 = *a8;
  if ( *a8 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = &LocaleName;
    v24 = 2;
  }
  v35 = v22;
  v36 = v24;
  v37 = 0;
  v25 = *a7;
  if ( *a7 )
  {
    do
      ++v14;
    while ( v25[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v25 = &LocaleName;
  }
  v30 = a6;
  v28 = a5;
  v32 = v25;
  v33 = v15;
  v34 = 0;
  v31 = 4LL;
  v29 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0xAu, &v27);
}
