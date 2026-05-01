/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1806EF0EC
 * Callers:
 *     ??$AttemptEventDrivenAppBackup@PEBGPEBGPEBGAEAI@CAppBackupListenerTelemetry@@SAX$$QEAPEBG00AEAI@Z @ 0x1806EE588 (--$AttemptEventDrivenAppBackup@PEBGPEBGPEBGAEAI@CAppBackupListenerTelemetry@@SAX$$QEAPEBG00AEAI@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rcx
  int v12; // r8d
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  int v15; // r9d
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  const WCHAR *v19; // rdx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-51h] BYREF
  const WCHAR *v22; // [rsp+50h] [rbp-31h]
  int v23; // [rsp+58h] [rbp-29h]
  int v24; // [rsp+5Ch] [rbp-25h]
  const WCHAR *v25; // [rsp+60h] [rbp-21h]
  int v26; // [rsp+68h] [rbp-19h]
  int v27; // [rsp+6Ch] [rbp-15h]
  const WCHAR *v28; // [rsp+70h] [rbp-11h]
  int v29; // [rsp+78h] [rbp-9h]
  int v30; // [rsp+7Ch] [rbp-5h]
  __int64 v31; // [rsp+80h] [rbp-1h]
  __int64 v32; // [rsp+88h] [rbp+7h]
  __int64 v33; // [rsp+90h] [rbp+Fh]
  __int64 v34; // [rsp+98h] [rbp+17h]

  v33 = a9;
  v31 = a8;
  v11 = -1LL;
  v12 = 2;
  v34 = 8LL;
  v32 = 4LL;
  v13 = *a7;
  if ( *a7 )
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
  v28 = v13;
  v29 = v15;
  v30 = 0;
  v16 = *a6;
  if ( *a6 )
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
  v25 = v16;
  v26 = v18;
  v27 = 0;
  v19 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v19[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v19 = &LocaleName;
  }
  v22 = v19;
  v23 = v12;
  v24 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 7u, &v21);
}
