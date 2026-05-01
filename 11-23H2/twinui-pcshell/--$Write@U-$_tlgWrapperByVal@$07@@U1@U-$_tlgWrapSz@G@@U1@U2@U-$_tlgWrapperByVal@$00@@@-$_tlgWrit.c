/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@34AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180629B80
 * Callers:
 *     ?TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z @ 0x18062C684 (-TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        __int64 a8,
        const WCHAR **a9,
        __int64 a10)
{
  __int64 v12; // rcx
  int v13; // r9d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  const WCHAR *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-69h] BYREF
  __int64 v20; // [rsp+50h] [rbp-49h]
  __int64 v21; // [rsp+58h] [rbp-41h]
  __int64 v22; // [rsp+60h] [rbp-39h]
  __int64 v23; // [rsp+68h] [rbp-31h]
  const WCHAR *v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  int v26; // [rsp+7Ch] [rbp-1Dh]
  __int64 v27; // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  const WCHAR *v29; // [rsp+90h] [rbp-9h]
  int v30; // [rsp+98h] [rbp-1h]
  int v31; // [rsp+9Ch] [rbp+3h]
  __int64 v32; // [rsp+A0h] [rbp+7h]
  __int64 v33; // [rsp+A8h] [rbp+Fh]

  v32 = a10;
  v12 = -1LL;
  v33 = 1LL;
  v13 = 2;
  v14 = *a9;
  if ( *a9 )
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
  v27 = a8;
  v29 = v14;
  v30 = v16;
  v31 = 0;
  v17 = *a7;
  v28 = 8LL;
  if ( v17 )
  {
    do
      ++v12;
    while ( v17[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v17 = &LocaleName;
  }
  v22 = a6;
  v20 = a5;
  v24 = v17;
  v25 = v13;
  v23 = 8LL;
  v21 = 8LL;
  v26 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 8u, &v19);
}
