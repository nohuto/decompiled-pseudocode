/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@44443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800022D0
 * Callers:
 *     ?HandleInputPaneTryShow_@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBD0_NH11110@Z @ 0x18053307C (-HandleInputPaneTryShow_@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBD0_NH11110@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const wchar_t **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        const wchar_t **a13,
        __int64 a14)
{
  __int64 v15; // rdx
  const wchar_t *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  const wchar_t *v19; // r8
  __int64 v20; // rax
  int v21; // eax
  const wchar_t *v22; // r8
  int v23; // edx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-C9h] BYREF
  const wchar_t *v26; // [rsp+50h] [rbp-A9h]
  int v27; // [rsp+58h] [rbp-A1h]
  int v28; // [rsp+5Ch] [rbp-9Dh]
  const wchar_t *v29; // [rsp+60h] [rbp-99h]
  int v30; // [rsp+68h] [rbp-91h]
  int v31; // [rsp+6Ch] [rbp-8Dh]
  __int64 v32; // [rsp+70h] [rbp-89h]
  __int64 v33; // [rsp+78h] [rbp-81h]
  __int64 v34; // [rsp+80h] [rbp-79h]
  __int64 v35; // [rsp+88h] [rbp-71h]
  __int64 v36; // [rsp+90h] [rbp-69h]
  __int64 v37; // [rsp+98h] [rbp-61h]
  __int64 v38; // [rsp+A0h] [rbp-59h]
  __int64 v39; // [rsp+A8h] [rbp-51h]
  __int64 v40; // [rsp+B0h] [rbp-49h]
  __int64 v41; // [rsp+B8h] [rbp-41h]
  __int64 v42; // [rsp+C0h] [rbp-39h]
  __int64 v43; // [rsp+C8h] [rbp-31h]
  const wchar_t *v44; // [rsp+D0h] [rbp-29h]
  int v45; // [rsp+D8h] [rbp-21h]
  int v46; // [rsp+DCh] [rbp-1Dh]
  __int64 v47; // [rsp+E0h] [rbp-19h]
  __int64 v48; // [rsp+E8h] [rbp-11h]

  v47 = a14;
  v15 = -1LL;
  v48 = 8LL;
  v16 = *a13;
  if ( *a13 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *((_BYTE *)v16 + v17) );
    v18 = v17 + 1;
  }
  else
  {
    v16 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v18 = 1;
  }
  v45 = v18;
  v42 = a12;
  v40 = a11;
  v38 = a10;
  v36 = a9;
  v34 = a8;
  v32 = a7;
  v44 = v16;
  v46 = 0;
  v43 = 1LL;
  v19 = *a6;
  v41 = 1LL;
  v39 = 1LL;
  v37 = 1LL;
  v35 = 4LL;
  v33 = 1LL;
  if ( v19 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *((_BYTE *)v19 + v20) );
    v21 = v20 + 1;
  }
  else
  {
    v19 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v21 = 1;
  }
  v30 = v21;
  v29 = v19;
  v31 = 0;
  v22 = *a5;
  if ( *a5 )
  {
    do
      ++v15;
    while ( *((_BYTE *)v22 + v15) );
    v23 = v15 + 1;
  }
  else
  {
    v22 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v23 = 1;
  }
  v26 = v22;
  v27 = v23;
  v28 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 0xCu, &v25);
}
