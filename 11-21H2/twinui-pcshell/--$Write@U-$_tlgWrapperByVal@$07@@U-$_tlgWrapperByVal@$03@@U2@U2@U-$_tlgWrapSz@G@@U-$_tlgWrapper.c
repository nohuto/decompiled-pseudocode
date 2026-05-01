/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@66@Z @ 0x18046DAC8
 * Callers:
 *     ?StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBG_N22@Z @ 0x18047A7B4 (-StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const WCHAR *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v19; // [rsp+50h] [rbp-89h]
  __int64 v20; // [rsp+58h] [rbp-81h]
  __int64 v21; // [rsp+60h] [rbp-79h]
  __int64 v22; // [rsp+68h] [rbp-71h]
  __int64 v23; // [rsp+70h] [rbp-69h]
  __int64 v24; // [rsp+78h] [rbp-61h]
  __int64 v25; // [rsp+80h] [rbp-59h]
  __int64 v26; // [rsp+88h] [rbp-51h]
  const WCHAR *v27; // [rsp+90h] [rbp-49h]
  int v28; // [rsp+98h] [rbp-41h]
  int v29; // [rsp+9Ch] [rbp-3Dh]
  __int64 v30; // [rsp+A0h] [rbp-39h]
  __int64 v31; // [rsp+A8h] [rbp-31h]
  __int64 v32; // [rsp+B0h] [rbp-29h]
  __int64 v33; // [rsp+B8h] [rbp-21h]
  __int64 v34; // [rsp+C0h] [rbp-19h]
  __int64 v35; // [rsp+C8h] [rbp-11h]

  v34 = a12;
  v32 = a11;
  v30 = a10;
  v35 = 1LL;
  v33 = 1LL;
  v31 = 1LL;
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
  v25 = a8;
  v23 = a7;
  v21 = a6;
  v19 = a5;
  v27 = v14;
  v28 = v16;
  v29 = 0;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 0xAu, &v18);
}
