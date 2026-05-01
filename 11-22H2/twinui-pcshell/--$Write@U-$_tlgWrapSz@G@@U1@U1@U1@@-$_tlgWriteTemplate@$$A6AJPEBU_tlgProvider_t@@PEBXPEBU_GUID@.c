/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333@Z @ 0x1803DD750
 * Callers:
 *     ??$Shell_IsGameManager_AddKGLGameToConfigStore@AEAPEBGAEAPEBGAEAPEBGAEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG000@Z @ 0x1803DD694 (--$Shell_IsGameManager_AddKGLGameToConfigStore@AEAPEBGAEAPEBGAEAPEBGAEAPEBG@GameDVRTraceProvider.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        const WCHAR **a8)
{
  __int64 v10; // rcx
  int v11; // r8d
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  int v14; // r9d
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  int v17; // r9d
  const WCHAR *v18; // rdx
  __int64 v19; // rax
  int v20; // r9d
  const WCHAR *v21; // rdx
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+30h] [rbp-39h] BYREF
  const WCHAR *v24; // [rsp+50h] [rbp-19h]
  int v25; // [rsp+58h] [rbp-11h]
  int v26; // [rsp+5Ch] [rbp-Dh]
  const WCHAR *v27; // [rsp+60h] [rbp-9h]
  int v28; // [rsp+68h] [rbp-1h]
  int v29; // [rsp+6Ch] [rbp+3h]
  const WCHAR *v30; // [rsp+70h] [rbp+7h]
  int v31; // [rsp+78h] [rbp+Fh]
  int v32; // [rsp+7Ch] [rbp+13h]
  const WCHAR *v33; // [rsp+80h] [rbp+17h]
  int v34; // [rsp+88h] [rbp+1Fh]
  int v35; // [rsp+8Ch] [rbp+23h]

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
  v33 = v12;
  v34 = v14;
  v35 = 0;
  v15 = *a7;
  if ( *a7 )
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
  v30 = v15;
  v31 = v17;
  v32 = 0;
  v18 = *a6;
  if ( *a6 )
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
  v27 = v18;
  v28 = v20;
  v29 = 0;
  v21 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v21[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v21 = &LocaleName;
  }
  v24 = v21;
  v25 = v11;
  v26 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 6u, &v23);
}
