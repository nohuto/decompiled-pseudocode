/*
 * XREFs of ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@_NPEBUtWAVEFORMATEX@@@Z @ 0x180055CA0
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056210 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180017F5C (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        char a4,
        const struct tWAVEFORMATEX *a5)
{
  int ProcessingModeSpecificMixFormatKey; // ebx
  __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  const struct tWAVEFORMATEX *v13; // [rsp+30h] [rbp-40h]
  struct _GUID v14; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v15; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v13 = 0LL;
  v12 = 0LL;
  if ( a2 == eOffloadConnector )
    return 0LL;
  if ( a5 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a5) )
    {
      ProcessingModeSpecificMixFormatKey = -2004287480;
      v11 = 7886LL;
      goto LABEL_12;
    }
    v13 = a5;
    LOWORD(v12) = 65;
    DWORD2(v12) = a5->cbSize + 18;
  }
  v14 = *a3;
  ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(
                                         &v14,
                                         a2 == eKeywordDetectorConnector,
                                         &v15);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
  {
    v11 = 7895LL;
    goto LABEL_12;
  }
  ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, __int128 *))(**((_QWORD **)this + 9) + 48LL))(
                                         *((_QWORD *)this + 9),
                                         &v15,
                                         &v12);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
  {
    v11 = 7897LL;
    goto LABEL_12;
  }
  if ( !a4 )
    return 0LL;
  ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int128 *))(**((_QWORD **)this + 9)
                                                                                                 + 48LL))(
                                         *((_QWORD *)this + 9),
                                         &PKEY_AudioEngine_MixFormat,
                                         &v12);
  if ( ProcessingModeSpecificMixFormatKey >= 0 )
    return 0LL;
  v11 = 7902LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)ProcessingModeSpecificMixFormatKey);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
