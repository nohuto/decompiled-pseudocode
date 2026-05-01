/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@64@Z @ 0x180570004
 * Callers:
 *     ?StartActivity@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1K@Z @ 0x1805743B0 (-StartActivity@ActivateApplicationInContainer@AAMTraceProvider@@QEAAXU_GUID@@PEBG1K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        const WCHAR **a8,
        const WCHAR **a9,
        __int64 a10)
{
  __int64 v12; // rcx
  int v15; // r9d
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  const WCHAR *v19; // rdx
  __int64 v20; // rcx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-89h] BYREF
  __int64 v23; // [rsp+50h] [rbp-69h]
  __int64 v24; // [rsp+58h] [rbp-61h]
  __int64 v25; // [rsp+60h] [rbp-59h]
  __int64 v26; // [rsp+68h] [rbp-51h]
  __int64 v27; // [rsp+70h] [rbp-49h]
  __int64 v28; // [rsp+78h] [rbp-41h]
  const WCHAR *v29; // [rsp+80h] [rbp-39h]
  int v30; // [rsp+88h] [rbp-31h]
  int v31; // [rsp+8Ch] [rbp-2Dh]
  const WCHAR *v32; // [rsp+90h] [rbp-29h]
  int v33; // [rsp+98h] [rbp-21h]
  int v34; // [rsp+9Ch] [rbp-1Dh]
  __int64 v35; // [rsp+A0h] [rbp-19h]
  __int64 v36; // [rsp+A8h] [rbp-11h]

  v35 = a10;
  v12 = -1LL;
  v36 = 4LL;
  v15 = 2;
  v16 = *a9;
  if ( *a9 )
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
  v32 = v16;
  v33 = v18;
  v34 = 0;
  v19 = *a8;
  if ( *a8 )
  {
    do
      ++v12;
    while ( v19[v12] );
    v15 = 2 * v12 + 2;
  }
  else
  {
    v19 = &LocaleName;
  }
  v29 = v19;
  v30 = v15;
  v31 = 0;
  v20 = *a7;
  v25 = a6;
  v27 = v20;
  v23 = a5;
  v24 = 8LL;
  v28 = 16LL;
  v26 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 8u, &v22);
}
