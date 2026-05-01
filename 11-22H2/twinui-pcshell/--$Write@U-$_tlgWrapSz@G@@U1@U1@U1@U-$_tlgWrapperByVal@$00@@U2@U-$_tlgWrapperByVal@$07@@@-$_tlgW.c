/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001680
 * Callers:
 *     ??$ApplicationStateChanged@AEAPEBGPEBGPEBGPEBG_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBG$$QEAPEBG11$$QEA_NAEA_N@Z @ 0x180204D6C (--$ApplicationStateChanged@AEAPEBGPEBGPEBGPEBG_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SA.c)
 *     ??$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG000$$QEA_NAEB_N@Z @ 0x180204E6C (--$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v13; // rcx
  int v14; // r8d
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  int v17; // r9d
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // r9d
  const WCHAR *v21; // rdx
  __int64 v22; // rax
  int v23; // r9d
  const WCHAR *v24; // rdx
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+30h] [rbp-81h] BYREF
  const WCHAR *v27; // [rsp+50h] [rbp-61h]
  int v28; // [rsp+58h] [rbp-59h]
  int v29; // [rsp+5Ch] [rbp-55h]
  const WCHAR *v30; // [rsp+60h] [rbp-51h]
  int v31; // [rsp+68h] [rbp-49h]
  int v32; // [rsp+6Ch] [rbp-45h]
  const WCHAR *v33; // [rsp+70h] [rbp-41h]
  int v34; // [rsp+78h] [rbp-39h]
  int v35; // [rsp+7Ch] [rbp-35h]
  const WCHAR *v36; // [rsp+80h] [rbp-31h]
  int v37; // [rsp+88h] [rbp-29h]
  int v38; // [rsp+8Ch] [rbp-25h]
  __int64 v39; // [rsp+90h] [rbp-21h]
  __int64 v40; // [rsp+98h] [rbp-19h]
  __int64 v41; // [rsp+A0h] [rbp-11h]
  __int64 v42; // [rsp+A8h] [rbp-9h]
  __int64 v43; // [rsp+B0h] [rbp-1h]
  __int64 v44; // [rsp+B8h] [rbp+7h]

  v43 = a11;
  v41 = a10;
  v13 = -1LL;
  v14 = 2;
  v39 = a9;
  v44 = 8LL;
  v42 = 1LL;
  v40 = 1LL;
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
    v15 = &LocaleName;
    v17 = 2;
  }
  v36 = v15;
  v37 = v17;
  v38 = 0;
  v18 = *a7;
  if ( *a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &LocaleName;
    v20 = 2;
  }
  v33 = v18;
  v34 = v20;
  v35 = 0;
  v21 = *a6;
  if ( *a6 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &LocaleName;
    v23 = 2;
  }
  v30 = v21;
  v31 = v23;
  v32 = 0;
  v24 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v24[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v24 = &LocaleName;
  }
  v27 = v24;
  v28 = v14;
  v29 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 9u, &v26);
}
