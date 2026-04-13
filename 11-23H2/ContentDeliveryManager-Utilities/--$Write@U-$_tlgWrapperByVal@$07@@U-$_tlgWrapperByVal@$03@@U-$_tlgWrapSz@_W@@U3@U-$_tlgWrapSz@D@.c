/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@_W@@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@_W@@5AEBU?$_tlgWrapSz@D@@@Z @ 0x180003AE8
 * Callers:
 *     ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x180094B80 (-StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@B.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001D54 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        const wchar_t **a8,
        const wchar_t **a9)
{
  __int64 v11; // rcx
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r9d
  const wchar_t *v18; // rdx
  __int64 v19; // rax
  int v20; // r8d
  const wchar_t *v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-71h] BYREF
  __int64 v24; // [rsp+50h] [rbp-51h]
  __int64 v25; // [rsp+58h] [rbp-49h]
  __int64 v26; // [rsp+60h] [rbp-41h]
  __int64 v27; // [rsp+68h] [rbp-39h]
  const wchar_t *v28; // [rsp+70h] [rbp-31h]
  int v29; // [rsp+78h] [rbp-29h]
  int v30; // [rsp+7Ch] [rbp-25h]
  const wchar_t *v31; // [rsp+80h] [rbp-21h]
  int v32; // [rsp+88h] [rbp-19h]
  int v33; // [rsp+8Ch] [rbp-15h]
  const wchar_t *v34; // [rsp+90h] [rbp-11h]
  int v35; // [rsp+98h] [rbp-9h]
  int v36; // [rsp+9Ch] [rbp-5h]

  v11 = -1LL;
  v14 = *a9;
  if ( *a9 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_BYTE *)v14 + v15) );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &word_180106C60;
    v16 = 1;
  }
  v35 = v16;
  v17 = 2;
  v34 = v14;
  v36 = 0;
  v18 = *a8;
  if ( *a8 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &word_180106C64;
    v20 = 2;
  }
  v31 = v18;
  v32 = v20;
  v33 = 0;
  v21 = *a7;
  if ( *a7 )
  {
    do
      ++v11;
    while ( v21[v11] );
    v17 = 2 * v11 + 2;
  }
  else
  {
    v21 = &word_180106C64;
  }
  v26 = a6;
  v24 = a5;
  v28 = v21;
  v29 = v17;
  v30 = 0;
  v27 = 4LL;
  v25 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 7u, &v23);
}
