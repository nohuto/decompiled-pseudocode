/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@444AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18069AE84
 * Callers:
 *     ??$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAEAK$$QEAPEBG222@Z @ 0x18069A8F4 (--$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
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
        __int64 a11)
{
  __int64 v13; // rcx
  int v14; // r8d
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  int v17; // r9d
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // r9d
  const WCHAR *v21; // rdx
  __int64 v22; // rax
  int v23; // r9d
  const WCHAR *v24; // rdx
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-81h] BYREF
  __int64 v27; // [rsp+50h] [rbp-61h]
  __int64 v28; // [rsp+58h] [rbp-59h]
  __int64 v29; // [rsp+60h] [rbp-51h]
  __int64 v30; // [rsp+68h] [rbp-49h]
  const WCHAR *v31; // [rsp+70h] [rbp-41h]
  int v32; // [rsp+78h] [rbp-39h]
  int v33; // [rsp+7Ch] [rbp-35h]
  const WCHAR *v34; // [rsp+80h] [rbp-31h]
  int v35; // [rsp+88h] [rbp-29h]
  int v36; // [rsp+8Ch] [rbp-25h]
  const WCHAR *v37; // [rsp+90h] [rbp-21h]
  int v38; // [rsp+98h] [rbp-19h]
  int v39; // [rsp+9Ch] [rbp-15h]
  const WCHAR *v40; // [rsp+A0h] [rbp-11h]
  int v41; // [rsp+A8h] [rbp-9h]
  int v42; // [rsp+ACh] [rbp-5h]
  __int64 v43; // [rsp+B0h] [rbp-1h]
  __int64 v44; // [rsp+B8h] [rbp+7h]

  v43 = a11;
  v13 = -1LL;
  v44 = 8LL;
  v14 = 2;
  v15 = *a10;
  if ( *a10 )
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
  v40 = v15;
  v41 = v17;
  v42 = 0;
  v18 = *a9;
  if ( *a9 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &LocaleName;
    v20 = 2;
  }
  v37 = v18;
  v38 = v20;
  v39 = 0;
  v21 = *a8;
  if ( *a8 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &LocaleName;
    v23 = 2;
  }
  v34 = v21;
  v35 = v23;
  v36 = 0;
  v24 = *a7;
  if ( *a7 )
  {
    do
      ++v13;
    while ( v24[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v24 = &LocaleName;
  }
  v29 = a6;
  v27 = a5;
  v31 = v24;
  v32 = v14;
  v33 = 0;
  v30 = 4LL;
  v28 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v26);
}
