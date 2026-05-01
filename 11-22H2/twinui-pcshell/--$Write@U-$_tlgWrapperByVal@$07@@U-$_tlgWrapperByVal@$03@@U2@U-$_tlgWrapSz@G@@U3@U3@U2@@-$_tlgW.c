/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@554@Z @ 0x18069B68C
 * Callers:
 *     ?Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1806A60F8 (-Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemR.c)
 *     ?Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1806A63D8 (-Stop@PinManagerRequestPinItem@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const WCHAR **a8,
        const WCHAR **a9,
        const WCHAR **a10,
        __int64 a11)
{
  __int64 v13; // rcx
  int v15; // r9d
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int v21; // r8d
  const WCHAR *v22; // rdx
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-91h] BYREF
  __int64 v25; // [rsp+50h] [rbp-71h]
  __int64 v26; // [rsp+58h] [rbp-69h]
  __int64 v27; // [rsp+60h] [rbp-61h]
  __int64 v28; // [rsp+68h] [rbp-59h]
  __int64 v29; // [rsp+70h] [rbp-51h]
  __int64 v30; // [rsp+78h] [rbp-49h]
  const WCHAR *v31; // [rsp+80h] [rbp-41h]
  int v32; // [rsp+88h] [rbp-39h]
  int v33; // [rsp+8Ch] [rbp-35h]
  const WCHAR *v34; // [rsp+90h] [rbp-31h]
  int v35; // [rsp+98h] [rbp-29h]
  int v36; // [rsp+9Ch] [rbp-25h]
  const WCHAR *v37; // [rsp+A0h] [rbp-21h]
  int v38; // [rsp+A8h] [rbp-19h]
  int v39; // [rsp+ACh] [rbp-15h]
  __int64 v40; // [rsp+B0h] [rbp-11h]
  __int64 v41; // [rsp+B8h] [rbp-9h]

  v40 = a11;
  v13 = -1LL;
  v41 = 4LL;
  v15 = 2;
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
  v37 = v16;
  v38 = v18;
  v39 = 0;
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
  v34 = v19;
  v35 = v21;
  v36 = 0;
  v22 = *a8;
  if ( *a8 )
  {
    do
      ++v13;
    while ( v22[v13] );
    v15 = 2 * v13 + 2;
  }
  else
  {
    v22 = &LocaleName;
  }
  v29 = a7;
  v27 = a6;
  v25 = a5;
  v31 = v22;
  v32 = v15;
  v33 = 0;
  v30 = 4LL;
  v28 = 4LL;
  v26 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 9u, &v24);
}
