/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54@Z @ 0x180002808
 * Callers:
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18005E910 (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001D54 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        const wchar_t **a8,
        __int64 a9)
{
  __int64 v11; // rcx
  int v14; // r9d
  const wchar_t *v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  const wchar_t *v18; // rdx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-71h] BYREF
  __int64 v21; // [rsp+50h] [rbp-51h]
  __int64 v22; // [rsp+58h] [rbp-49h]
  __int64 v23; // [rsp+60h] [rbp-41h]
  __int64 v24; // [rsp+68h] [rbp-39h]
  const wchar_t *v25; // [rsp+70h] [rbp-31h]
  int v26; // [rsp+78h] [rbp-29h]
  int v27; // [rsp+7Ch] [rbp-25h]
  const wchar_t *v28; // [rsp+80h] [rbp-21h]
  int v29; // [rsp+88h] [rbp-19h]
  int v30; // [rsp+8Ch] [rbp-15h]
  __int64 v31; // [rsp+90h] [rbp-11h]
  __int64 v32; // [rsp+98h] [rbp-9h]

  v31 = a9;
  v11 = -1LL;
  v32 = 4LL;
  v14 = 2;
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
    v15 = &word_180106C64;
    v17 = 2;
  }
  v28 = v15;
  v29 = v17;
  v30 = 0;
  v18 = *a7;
  if ( *a7 )
  {
    do
      ++v11;
    while ( v18[v11] );
    v14 = 2 * v11 + 2;
  }
  else
  {
    v18 = &word_180106C64;
  }
  v23 = a6;
  v21 = a5;
  v25 = v18;
  v26 = v14;
  v27 = 0;
  v24 = 4LL;
  v22 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 7u, &v20);
}
