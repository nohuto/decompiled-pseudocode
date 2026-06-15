/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800FE3CC
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF204 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7,
        __int64 a8,
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
  _BYTE v23[32]; // [rsp+30h] [rbp-81h] BYREF
  const WCHAR *v24; // [rsp+50h] [rbp-61h]
  int v25; // [rsp+58h] [rbp-59h]
  int v26; // [rsp+5Ch] [rbp-55h]
  const WCHAR *v27; // [rsp+60h] [rbp-51h]
  int v28; // [rsp+68h] [rbp-49h]
  int v29; // [rsp+6Ch] [rbp-45h]
  const WCHAR *v30; // [rsp+70h] [rbp-41h]
  int v31; // [rsp+78h] [rbp-39h]
  int v32; // [rsp+7Ch] [rbp-35h]
  __int64 v33; // [rsp+80h] [rbp-31h]
  __int64 v34; // [rsp+88h] [rbp-29h]
  __int64 v35; // [rsp+90h] [rbp-21h]
  __int64 v36; // [rsp+98h] [rbp-19h]
  __int64 v37; // [rsp+A0h] [rbp-11h]
  __int64 v38; // [rsp+A8h] [rbp-9h]
  __int64 v39; // [rsp+B0h] [rbp-1h]
  __int64 v40; // [rsp+B8h] [rbp+7h]

  v39 = a11;
  v37 = a10;
  v13 = -1LL;
  v14 = 2;
  v35 = a9;
  v33 = a8;
  v40 = 4LL;
  v38 = 4LL;
  v36 = 4LL;
  v15 = *a7;
  v34 = 4LL;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &String2;
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
    v18 = &String2;
    v20 = 2;
  }
  v27 = v18;
  v28 = v20;
  v29 = 0;
  v21 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v21[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v21 = &String2;
  }
  v24 = v21;
  v25 = v14;
  v26 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 9, (__int64)v23);
}
