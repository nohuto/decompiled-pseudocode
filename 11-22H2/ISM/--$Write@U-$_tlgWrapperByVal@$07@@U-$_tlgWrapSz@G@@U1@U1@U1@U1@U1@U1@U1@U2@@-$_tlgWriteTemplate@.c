/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33333334@Z @ 0x180001808
 * Callers:
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180072EC4 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        const WCHAR **a14)
{
  __int64 v15; // rcx
  int v16; // r8d
  const WCHAR *v17; // rdx
  __int64 v18; // rax
  int v19; // r9d
  const WCHAR *v20; // rdx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v23; // [rsp+50h] [rbp-A9h]
  __int64 v24; // [rsp+58h] [rbp-A1h]
  const WCHAR *v25; // [rsp+60h] [rbp-99h]
  int v26; // [rsp+68h] [rbp-91h]
  int v27; // [rsp+6Ch] [rbp-8Dh]
  __int64 v28; // [rsp+70h] [rbp-89h]
  __int64 v29; // [rsp+78h] [rbp-81h]
  __int64 v30; // [rsp+80h] [rbp-79h]
  __int64 v31; // [rsp+88h] [rbp-71h]
  __int64 v32; // [rsp+90h] [rbp-69h]
  __int64 v33; // [rsp+98h] [rbp-61h]
  __int64 v34; // [rsp+A0h] [rbp-59h]
  __int64 v35; // [rsp+A8h] [rbp-51h]
  __int64 v36; // [rsp+B0h] [rbp-49h]
  __int64 v37; // [rsp+B8h] [rbp-41h]
  __int64 v38; // [rsp+C0h] [rbp-39h]
  __int64 v39; // [rsp+C8h] [rbp-31h]
  __int64 v40; // [rsp+D0h] [rbp-29h]
  __int64 v41; // [rsp+D8h] [rbp-21h]
  const WCHAR *v42; // [rsp+E0h] [rbp-19h]
  int v43; // [rsp+E8h] [rbp-11h]
  int v44; // [rsp+ECh] [rbp-Dh]

  v15 = -1LL;
  v16 = 2;
  v17 = *a14;
  if ( *a14 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &Src;
    v19 = 2;
  }
  v40 = a13;
  v38 = a12;
  v36 = a11;
  v34 = a10;
  v32 = a9;
  v30 = a8;
  v28 = a7;
  v42 = v17;
  v43 = v19;
  v44 = 0;
  v20 = *a6;
  v41 = 8LL;
  v39 = 8LL;
  v37 = 8LL;
  v35 = 8LL;
  v33 = 8LL;
  v31 = 8LL;
  v29 = 8LL;
  if ( v20 )
  {
    do
      ++v15;
    while ( v20[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v20 = &Src;
  }
  v23 = a5;
  v25 = v20;
  v26 = v16;
  v27 = 0;
  v24 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((int)&dword_180275498, a2, 0, 0, 0xCu, &v22);
}
