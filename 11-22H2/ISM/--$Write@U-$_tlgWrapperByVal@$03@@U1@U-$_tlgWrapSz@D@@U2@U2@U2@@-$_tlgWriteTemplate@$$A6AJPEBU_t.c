/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@444@Z @ 0x180001A8C
 * Callers:
 *     ?StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4GestureRecognizerState@@1W4GestureOperationState@@@Z @ 0x1800749F0 (-StaleActiveContacts@ShellGestures@InputTraceLogging@@SAXKIW4ContextualProcessorDecision@@W4Gest.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const unsigned __int16 **a7,
        const unsigned __int16 **a8,
        const unsigned __int16 **a9,
        const unsigned __int16 **a10)
{
  __int64 v11; // rdx
  const unsigned __int16 *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  const unsigned __int16 *v15; // r8
  __int64 v16; // rax
  int v17; // eax
  const unsigned __int16 *v18; // r8
  __int64 v19; // rax
  int v20; // eax
  const unsigned __int16 *v21; // r8
  int v22; // edx
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+30h] [rbp-69h] BYREF
  __int64 v25; // [rsp+50h] [rbp-49h]
  __int64 v26; // [rsp+58h] [rbp-41h]
  __int64 v27; // [rsp+60h] [rbp-39h]
  __int64 v28; // [rsp+68h] [rbp-31h]
  const unsigned __int16 *v29; // [rsp+70h] [rbp-29h]
  int v30; // [rsp+78h] [rbp-21h]
  int v31; // [rsp+7Ch] [rbp-1Dh]
  const unsigned __int16 *v32; // [rsp+80h] [rbp-19h]
  int v33; // [rsp+88h] [rbp-11h]
  int v34; // [rsp+8Ch] [rbp-Dh]
  const unsigned __int16 *v35; // [rsp+90h] [rbp-9h]
  int v36; // [rsp+98h] [rbp-1h]
  int v37; // [rsp+9Ch] [rbp+3h]
  const unsigned __int16 *v38; // [rsp+A0h] [rbp+7h]
  int v39; // [rsp+A8h] [rbp+Fh]
  int v40; // [rsp+ACh] [rbp+13h]

  v11 = -1LL;
  v12 = *a10;
  if ( *a10 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *((_BYTE *)v12 + v13) );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &word_180225500;
    v14 = 1;
  }
  v39 = v14;
  v38 = v12;
  v40 = 0;
  v15 = *a9;
  if ( *a9 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_BYTE *)v15 + v16) );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &word_180225500;
    v17 = 1;
  }
  v36 = v17;
  v35 = v15;
  v37 = 0;
  v18 = *a8;
  if ( *a8 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_BYTE *)v18 + v19) );
    v20 = v19 + 1;
  }
  else
  {
    v18 = &word_180225500;
    v20 = 1;
  }
  v33 = v20;
  v32 = v18;
  v34 = 0;
  v21 = *a7;
  if ( *a7 )
  {
    do
      ++v11;
    while ( *((_BYTE *)v21 + v11) );
    v22 = v11 + 1;
  }
  else
  {
    v21 = &word_180225500;
    v22 = 1;
  }
  v27 = a6;
  v25 = a5;
  v29 = v21;
  v30 = v22;
  v31 = 0;
  v28 = 4LL;
  v26 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 8u, &v24);
}
