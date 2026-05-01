/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@34AEBU?$_tlgWrapSz@G@@@Z @ 0x1800BD2A4
 * Callers:
 *     _lambda_3bb05d516453dedbcf2433e6b038ae19_::_lambda_invoker_cdecl_ @ 0x1801CEFF0 (_lambda_3bb05d516453dedbcf2433e6b038ae19_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t **a6,
        __int64 a7,
        const wchar_t **a8,
        const WCHAR **a9)
{
  __int64 v10; // rcx
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  int v13; // r8d
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  const wchar_t *v17; // rdx
  int v18; // ecx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-51h] BYREF
  __int64 v21; // [rsp+50h] [rbp-31h]
  __int64 v22; // [rsp+58h] [rbp-29h]
  const wchar_t *v23; // [rsp+60h] [rbp-21h]
  int v24; // [rsp+68h] [rbp-19h]
  int v25; // [rsp+6Ch] [rbp-15h]
  __int64 v26; // [rsp+70h] [rbp-11h]
  __int64 v27; // [rsp+78h] [rbp-9h]
  const wchar_t *v28; // [rsp+80h] [rbp-1h]
  int v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+8Ch] [rbp+Bh]
  const WCHAR *v31; // [rsp+90h] [rbp+Fh]
  int v32; // [rsp+98h] [rbp+17h]
  int v33; // [rsp+9Ch] [rbp+1Bh]

  v10 = -1LL;
  v11 = *a9;
  if ( *a9 )
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
  v31 = v11;
  v32 = v13;
  v33 = 0;
  v14 = *a8;
  if ( *a8 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_BYTE *)v14 + v15) );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v16 = 1;
  }
  v29 = v16;
  v26 = a7;
  v28 = v14;
  v30 = 0;
  v27 = 4LL;
  v17 = *a6;
  if ( *a6 )
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
  v21 = a5;
  v23 = v17;
  v24 = v18;
  v25 = 0;
  v22 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer((int)&dword_180986E18, a2, 0, 0, 7u, &v20);
}
