/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x1801524D4
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x18002C994 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180153284 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@_NPEBUSpatialAudioSetti.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11)
{
  int v13; // edx
  __int64 v14; // rcx
  const WCHAR *v15; // rcx
  __int64 v16; // rax
  _BYTE v18[32]; // [rsp+30h] [rbp-81h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-61h]
  int v20; // [rsp+58h] [rbp-59h]
  int v21; // [rsp+5Ch] [rbp-55h]
  __int64 v22; // [rsp+60h] [rbp-51h]
  __int64 v23; // [rsp+68h] [rbp-49h]
  __int64 v24; // [rsp+70h] [rbp-41h]
  __int64 v25; // [rsp+78h] [rbp-39h]
  __int64 v26; // [rsp+80h] [rbp-31h]
  __int64 v27; // [rsp+88h] [rbp-29h]
  __int64 v28; // [rsp+90h] [rbp-21h]
  __int64 v29; // [rsp+98h] [rbp-19h]
  __int64 v30; // [rsp+A0h] [rbp-11h]
  __int64 v31; // [rsp+A8h] [rbp-9h]
  __int64 v32; // [rsp+B0h] [rbp-1h]
  __int64 v33; // [rsp+B8h] [rbp+7h]

  v32 = a11;
  v13 = 2;
  v30 = a10;
  v33 = 2LL;
  v31 = 2LL;
  v29 = 16LL;
  v14 = *a9;
  v26 = a8;
  v24 = a7;
  v22 = a6;
  v28 = v14;
  v27 = 4LL;
  v25 = 4LL;
  v15 = *a5;
  v23 = 2LL;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v13 = 2 * v16 + 2;
  }
  else
  {
    v15 = &String2;
  }
  v19 = v15;
  v20 = v13;
  v21 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 9, (__int64)v18);
}
