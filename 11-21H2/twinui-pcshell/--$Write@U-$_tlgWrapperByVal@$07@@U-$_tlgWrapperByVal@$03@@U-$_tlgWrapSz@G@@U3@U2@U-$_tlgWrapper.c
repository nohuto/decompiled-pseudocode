/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByVal@$00@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByVal@$00@@66@Z @ 0x18000C71C
 * Callers:
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x18000C03C (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        const WCHAR **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v14; // rcx
  int v16; // r9d
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // r8d
  const WCHAR *v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v24; // [rsp+50h] [rbp-91h]
  __int64 v25; // [rsp+58h] [rbp-89h]
  __int64 v26; // [rsp+60h] [rbp-81h]
  __int64 v27; // [rsp+68h] [rbp-79h]
  const WCHAR *v28; // [rsp+70h] [rbp-71h]
  int v29; // [rsp+78h] [rbp-69h]
  int v30; // [rsp+7Ch] [rbp-65h]
  const WCHAR *v31; // [rsp+80h] [rbp-61h]
  int v32; // [rsp+88h] [rbp-59h]
  int v33; // [rsp+8Ch] [rbp-55h]
  __int64 v34; // [rsp+90h] [rbp-51h]
  __int64 v35; // [rsp+98h] [rbp-49h]
  __int64 v36; // [rsp+A0h] [rbp-41h]
  __int64 v37; // [rsp+A8h] [rbp-39h]
  __int64 v38; // [rsp+B0h] [rbp-31h]
  __int64 v39; // [rsp+B8h] [rbp-29h]
  __int64 v40; // [rsp+C0h] [rbp-21h]
  __int64 v41; // [rsp+C8h] [rbp-19h]

  v40 = a12;
  v38 = a11;
  v14 = -1LL;
  v36 = a10;
  v16 = 2;
  v34 = a9;
  v41 = 1LL;
  v39 = 1LL;
  v37 = 1LL;
  v18 = *a8;
  v35 = 4LL;
  if ( v18 )
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
  v31 = v18;
  v32 = v20;
  v33 = 0;
  v21 = *a7;
  if ( *a7 )
  {
    do
      ++v14;
    while ( v21[v14] );
    v16 = 2 * v14 + 2;
  }
  else
  {
    v21 = &LocaleName;
  }
  v26 = a6;
  v24 = a5;
  v28 = v21;
  v29 = v16;
  v30 = 0;
  v27 = 4LL;
  v25 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 0xAu, &v23);
}
