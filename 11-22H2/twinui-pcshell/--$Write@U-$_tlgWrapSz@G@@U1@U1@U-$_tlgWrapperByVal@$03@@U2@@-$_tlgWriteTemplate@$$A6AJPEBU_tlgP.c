/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1807511D8
 * Callers:
 *     ?PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18075A154 (-PinnedListRemoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBG000HW4PINNEDLISTMODIFYCALLE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rcx
  int v13; // r8d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  int v19; // r9d
  const WCHAR *v20; // rdx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-61h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp-41h]
  int v24; // [rsp+58h] [rbp-39h]
  int v25; // [rsp+5Ch] [rbp-35h]
  const WCHAR *v26; // [rsp+60h] [rbp-31h]
  int v27; // [rsp+68h] [rbp-29h]
  int v28; // [rsp+6Ch] [rbp-25h]
  const WCHAR *v29; // [rsp+70h] [rbp-21h]
  int v30; // [rsp+78h] [rbp-19h]
  int v31; // [rsp+7Ch] [rbp-15h]
  __int64 v32; // [rsp+80h] [rbp-11h]
  __int64 v33; // [rsp+88h] [rbp-9h]
  __int64 v34; // [rsp+90h] [rbp-1h]
  __int64 v35; // [rsp+98h] [rbp+7h]

  v34 = a9;
  v32 = a8;
  v11 = -1LL;
  v35 = 4LL;
  v13 = 2;
  v33 = 4LL;
  v14 = *a7;
  if ( *a7 )
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
  v29 = v14;
  v30 = v16;
  v31 = 0;
  v17 = *a6;
  if ( *a6 )
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
  v26 = v17;
  v27 = v19;
  v28 = 0;
  v20 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v20[v11] );
    v13 = 2 * v11 + 2;
  }
  else
  {
    v20 = &LocaleName;
  }
  v23 = v20;
  v24 = v13;
  v25 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 7u, &v22);
}
