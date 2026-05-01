/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x18046C99C
 * Callers:
 *     ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x1804731C0 (-OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@T.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const WCHAR **a6,
        const WCHAR **a7)
{
  __int64 v9; // rcx
  int v10; // r9d
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  int v13; // r8d
  const WCHAR *v14; // rdx
  __int64 v15; // rax
  const wchar_t *v16; // rdx
  int v17; // ecx
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+30h] [rbp-68h] BYREF
  const wchar_t *v20; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+5Ch] [rbp-3Ch]
  const WCHAR *v23; // [rsp+60h] [rbp-38h]
  int v24; // [rsp+68h] [rbp-30h]
  int v25; // [rsp+6Ch] [rbp-2Ch]
  const WCHAR *v26; // [rsp+70h] [rbp-28h]
  int v27; // [rsp+78h] [rbp-20h]
  int v28; // [rsp+7Ch] [rbp-1Ch]

  v9 = -1LL;
  v10 = 2;
  v11 = *a7;
  if ( *a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v11 = &LocaleName;
    v13 = 2;
  }
  v26 = v11;
  v27 = v13;
  v28 = 0;
  v14 = *a6;
  if ( *a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v10 = 2 * v15 + 2;
  }
  else
  {
    v14 = &LocaleName;
  }
  v23 = v14;
  v24 = v10;
  v25 = 0;
  v16 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( *((_BYTE *)v16 + v9) );
    v17 = v9 + 1;
  }
  else
  {
    v16 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v17 = 1;
  }
  v20 = v16;
  v21 = v17;
  v22 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 5u, &v19);
}
