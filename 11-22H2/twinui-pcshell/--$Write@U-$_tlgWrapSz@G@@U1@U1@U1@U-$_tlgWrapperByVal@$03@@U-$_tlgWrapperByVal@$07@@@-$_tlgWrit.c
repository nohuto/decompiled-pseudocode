/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18069AC18
 * Callers:
 *     ??$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@SAX$$QEAPEBG000AEAW4PinOperationType@@@Z @ 0x18069A5D0 (--$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rcx
  int v13; // r8d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  int v19; // r9d
  const WCHAR *v20; // rdx
  __int64 v21; // rax
  int v22; // r9d
  const WCHAR *v23; // rdx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-69h] BYREF
  const WCHAR *v26; // [rsp+50h] [rbp-49h]
  int v27; // [rsp+58h] [rbp-41h]
  int v28; // [rsp+5Ch] [rbp-3Dh]
  const WCHAR *v29; // [rsp+60h] [rbp-39h]
  int v30; // [rsp+68h] [rbp-31h]
  int v31; // [rsp+6Ch] [rbp-2Dh]
  const WCHAR *v32; // [rsp+70h] [rbp-29h]
  int v33; // [rsp+78h] [rbp-21h]
  int v34; // [rsp+7Ch] [rbp-1Dh]
  const WCHAR *v35; // [rsp+80h] [rbp-19h]
  int v36; // [rsp+88h] [rbp-11h]
  int v37; // [rsp+8Ch] [rbp-Dh]
  __int64 v38; // [rsp+90h] [rbp-9h]
  __int64 v39; // [rsp+98h] [rbp-1h]
  __int64 v40; // [rsp+A0h] [rbp+7h]
  __int64 v41; // [rsp+A8h] [rbp+Fh]

  v40 = a10;
  v38 = a9;
  v12 = -1LL;
  v13 = 2;
  v41 = 8LL;
  v39 = 4LL;
  v14 = *a8;
  if ( *a8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &LocaleName;
    v16 = 2;
  }
  v35 = v14;
  v36 = v16;
  v37 = 0;
  v17 = *a7;
  if ( *a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &LocaleName;
    v19 = 2;
  }
  v32 = v17;
  v33 = v19;
  v34 = 0;
  v20 = *a6;
  if ( *a6 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v20 = &LocaleName;
    v22 = 2;
  }
  v29 = v20;
  v30 = v22;
  v31 = 0;
  v23 = *a5;
  if ( *a5 )
  {
    do
      ++v12;
    while ( v23[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v23 = &LocaleName;
  }
  v26 = v23;
  v27 = v13;
  v28 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 8u, &v25);
}
