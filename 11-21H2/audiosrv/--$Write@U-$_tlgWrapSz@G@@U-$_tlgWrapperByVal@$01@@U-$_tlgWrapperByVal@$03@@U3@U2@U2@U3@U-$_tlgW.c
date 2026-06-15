/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5445AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18013C828
 * Callers:
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NAEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x18013F2F8 (-SetDesiredFormat@CSpatialProperties@@AEAA_NAEBUWAVEFORMATEXTENSIBLE@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 *a12)
{
  __int64 v14; // rcx
  int v15; // edx
  _WORD *v16; // rcx
  __int64 v17; // rax
  _BYTE v19[32]; // [rsp+30h] [rbp-99h] BYREF
  _WORD *v20; // [rsp+50h] [rbp-79h]
  int v21; // [rsp+58h] [rbp-71h]
  int v22; // [rsp+5Ch] [rbp-6Dh]
  __int64 v23; // [rsp+60h] [rbp-69h]
  __int64 v24; // [rsp+68h] [rbp-61h]
  __int64 v25; // [rsp+70h] [rbp-59h]
  __int64 v26; // [rsp+78h] [rbp-51h]
  __int64 v27; // [rsp+80h] [rbp-49h]
  __int64 v28; // [rsp+88h] [rbp-41h]
  __int64 v29; // [rsp+90h] [rbp-39h]
  __int64 v30; // [rsp+98h] [rbp-31h]
  __int64 v31; // [rsp+A0h] [rbp-29h]
  __int64 v32; // [rsp+A8h] [rbp-21h]
  __int64 v33; // [rsp+B0h] [rbp-19h]
  __int64 v34; // [rsp+B8h] [rbp-11h]
  __int64 v35; // [rsp+C0h] [rbp-9h]
  __int64 v36; // [rsp+C8h] [rbp-1h]

  v36 = 16LL;
  v34 = 4LL;
  v28 = 4LL;
  v14 = *a12;
  v15 = 2;
  v33 = a11;
  v31 = a10;
  v29 = a9;
  v27 = a8;
  v25 = a7;
  v23 = a6;
  v35 = v14;
  v32 = 2LL;
  v30 = 2LL;
  v16 = *a5;
  v26 = 4LL;
  v24 = 2LL;
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v15 = 2 * v17 + 2;
  }
  else
  {
    v16 = &unk_18017F160;
  }
  v20 = v16;
  v21 = v15;
  v22 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 10, (__int64)v19);
}
