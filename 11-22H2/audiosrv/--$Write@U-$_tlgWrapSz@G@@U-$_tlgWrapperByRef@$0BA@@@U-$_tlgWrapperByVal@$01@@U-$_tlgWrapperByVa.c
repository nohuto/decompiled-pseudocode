/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U4@U3@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@65564@Z @ 0x180151A00
 * Callers:
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVEffectPack@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x180153DFC (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVEffectPack@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13)
{
  __int64 v15; // rcx
  int v16; // edx
  const WCHAR *v17; // rcx
  __int64 v18; // rax
  _BYTE v20[32]; // [rsp+30h] [rbp-B1h] BYREF
  const WCHAR *v21; // [rsp+50h] [rbp-91h]
  int v22; // [rsp+58h] [rbp-89h]
  int v23; // [rsp+5Ch] [rbp-85h]
  __int64 v24; // [rsp+60h] [rbp-81h]
  __int64 v25; // [rsp+68h] [rbp-79h]
  __int64 v26; // [rsp+70h] [rbp-71h]
  __int64 v27; // [rsp+78h] [rbp-69h]
  __int64 v28; // [rsp+80h] [rbp-61h]
  __int64 v29; // [rsp+88h] [rbp-59h]
  __int64 v30; // [rsp+90h] [rbp-51h]
  __int64 v31; // [rsp+98h] [rbp-49h]
  __int64 v32; // [rsp+A0h] [rbp-41h]
  __int64 v33; // [rsp+A8h] [rbp-39h]
  __int64 v34; // [rsp+B0h] [rbp-31h]
  __int64 v35; // [rsp+B8h] [rbp-29h]
  __int64 v36; // [rsp+C0h] [rbp-21h]
  __int64 v37; // [rsp+C8h] [rbp-19h]
  __int64 v38; // [rsp+D0h] [rbp-11h]
  __int64 v39; // [rsp+D8h] [rbp-9h]

  v39 = 16LL;
  v37 = 4LL;
  v31 = 4LL;
  v15 = *a13;
  v16 = 2;
  v36 = a12;
  v34 = a11;
  v32 = a10;
  v30 = a9;
  v28 = a8;
  v26 = a7;
  v38 = v15;
  v35 = 2LL;
  v33 = 2LL;
  v24 = *a6;
  v29 = 4LL;
  v27 = 2LL;
  v17 = *a5;
  v25 = 16LL;
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v16 = 2 * v18 + 2;
  }
  else
  {
    v17 = &String2;
  }
  v21 = v17;
  v22 = v16;
  v23 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 11, (__int64)v20);
}
