/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U1@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@347@Z @ 0x1800F6960
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x180003500 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void **a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        __int64 *a14)
{
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  _WORD *v19; // rcx
  __int64 v20; // rax
  _BYTE v22[32]; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v23; // [rsp+50h] [rbp-A9h]
  __int64 v24; // [rsp+58h] [rbp-A1h]
  __int64 v25; // [rsp+60h] [rbp-99h]
  __int64 v26; // [rsp+68h] [rbp-91h]
  __int64 v27; // [rsp+70h] [rbp-89h]
  __int64 v28; // [rsp+78h] [rbp-81h]
  _WORD *v29; // [rsp+80h] [rbp-79h]
  int v30; // [rsp+88h] [rbp-71h]
  int v31; // [rsp+8Ch] [rbp-6Dh]
  __int64 v32; // [rsp+90h] [rbp-69h]
  __int64 v33; // [rsp+98h] [rbp-61h]
  __int64 v34; // [rsp+A0h] [rbp-59h]
  __int64 v35; // [rsp+A8h] [rbp-51h]
  __int64 v36; // [rsp+B0h] [rbp-49h]
  __int64 v37; // [rsp+B8h] [rbp-41h]
  __int64 v38; // [rsp+C0h] [rbp-39h]
  __int64 v39; // [rsp+C8h] [rbp-31h]
  __int64 v40; // [rsp+D0h] [rbp-29h]
  __int64 v41; // [rsp+D8h] [rbp-21h]
  __int64 v42; // [rsp+E0h] [rbp-19h]
  __int64 v43; // [rsp+E8h] [rbp-11h]

  v43 = 16LL;
  v41 = 4LL;
  v39 = 8LL;
  v16 = *a14;
  v17 = 2;
  v40 = a13;
  v38 = a12;
  v42 = v16;
  v37 = 16LL;
  v35 = 2LL;
  v18 = *a11;
  v34 = a10;
  v32 = a9;
  v36 = v18;
  v33 = 4LL;
  v19 = *a8;
  if ( *a8 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v17 = 2 * v20 + 2;
  }
  else
  {
    v19 = &unk_18017F160;
  }
  v27 = a7;
  v25 = a6;
  v23 = a5;
  v29 = v19;
  v30 = v17;
  v31 = 0;
  v28 = 4LL;
  v26 = 8LL;
  v24 = 8LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 12, (__int64)v22);
}
