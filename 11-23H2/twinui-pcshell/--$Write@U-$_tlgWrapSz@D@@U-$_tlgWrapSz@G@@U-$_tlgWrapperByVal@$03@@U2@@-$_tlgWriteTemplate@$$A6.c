/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1802DA248
 * Callers:
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1802DB684 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const WCHAR **a6,
        __int64 a7,
        const WCHAR **a8)
{
  __int64 v10; // rcx
  int v11; // r8d
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  int v14; // r9d
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  const wchar_t *v17; // rdx
  int v18; // ecx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-39h] BYREF
  const wchar_t *v21; // [rsp+50h] [rbp-19h]
  int v22; // [rsp+58h] [rbp-11h]
  int v23; // [rsp+5Ch] [rbp-Dh]
  const WCHAR *v24; // [rsp+60h] [rbp-9h]
  int v25; // [rsp+68h] [rbp-1h]
  int v26; // [rsp+6Ch] [rbp+3h]
  __int64 v27; // [rsp+70h] [rbp+7h]
  __int64 v28; // [rsp+78h] [rbp+Fh]
  const WCHAR *v29; // [rsp+80h] [rbp+17h]
  int v30; // [rsp+88h] [rbp+1Fh]
  int v31; // [rsp+8Ch] [rbp+23h]

  v10 = -1LL;
  v11 = 2;
  v12 = *a8;
  if ( *a8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &LocaleName;
    v14 = 2;
  }
  v27 = a7;
  v29 = v12;
  v30 = v14;
  v31 = 0;
  v15 = *a6;
  v28 = 4LL;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v11 = 2 * v16 + 2;
  }
  else
  {
    v15 = &LocaleName;
  }
  v24 = v15;
  v25 = v11;
  v26 = 0;
  v17 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( *((_BYTE *)v17 + v10) );
    v18 = v10 + 1;
  }
  else
  {
    v17 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v18 = 1;
  }
  v21 = v17;
  v22 = v18;
  v23 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 6u, &v20);
}
