/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x18002D2A8
 * Callers:
 *     ??$ViewKeptAlive@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x18002C60C (--$ViewKeptAlive@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0$$Q.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rcx
  int v12; // r9d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  int v16; // r8d
  const WCHAR *v17; // rdx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-61h] BYREF
  const WCHAR *v20; // [rsp+50h] [rbp-41h]
  int v21; // [rsp+58h] [rbp-39h]
  int v22; // [rsp+5Ch] [rbp-35h]
  const WCHAR *v23; // [rsp+60h] [rbp-31h]
  int v24; // [rsp+68h] [rbp-29h]
  int v25; // [rsp+6Ch] [rbp-25h]
  __int64 v26; // [rsp+70h] [rbp-21h]
  __int64 v27; // [rsp+78h] [rbp-19h]
  __int64 v28; // [rsp+80h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-9h]
  __int64 v30; // [rsp+90h] [rbp-1h]
  __int64 v31; // [rsp+98h] [rbp+7h]

  v30 = a9;
  v28 = a8;
  v11 = -1LL;
  v12 = 2;
  v26 = a7;
  v31 = 8LL;
  v29 = 8LL;
  v27 = 4LL;
  v14 = *a6;
  if ( *a6 )
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
  v23 = v14;
  v24 = v16;
  v25 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v17[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v17 = &LocaleName;
  }
  v20 = v17;
  v21 = v12;
  v22 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0, 7u, &v19);
}
