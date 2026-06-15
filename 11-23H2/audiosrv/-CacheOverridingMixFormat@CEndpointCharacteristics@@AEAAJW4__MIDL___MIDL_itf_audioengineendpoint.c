/*
 * XREFs of ?CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180056050
 * Callers:
 *     ?DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180056178 (-DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180056114 (-GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheOverridingMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificOverridingMixFormatKey; // ebx
  __int64 v10; // rdx
  int v11[4]; // [rsp+20h] [rbp-68h] BYREF
  const struct tWAVEFORMATEX *v12; // [rsp+30h] [rbp-58h]
  struct _GUID v13; // [rsp+40h] [rbp-48h] BYREF
  struct _tagpropertykey v14; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12 = 0LL;
  *(_OWORD *)v11 = 0LL;
  if ( a2 == eOffloadConnector )
    return 0LL;
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificOverridingMixFormatKey = -2004287480;
      v10 = 7853LL;
      goto LABEL_9;
    }
    v12 = a4;
    LOWORD(v11[0]) = 65;
    v11[2] = a4->cbSize + 18;
  }
  v13 = *a3;
  ProcessingModeSpecificOverridingMixFormatKey = GetProcessingModeSpecificOverridingMixFormatKey(
                                                   &v13,
                                                   a2 == eKeywordDetectorConnector,
                                                   &v14);
  if ( ProcessingModeSpecificOverridingMixFormatKey < 0 )
  {
    v10 = 7862LL;
  }
  else
  {
    ProcessingModeSpecificOverridingMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, int *))(**((_QWORD **)this + 9) + 48LL))(
                                                     *((_QWORD *)this + 9),
                                                     &v14,
                                                     v11);
    if ( ProcessingModeSpecificOverridingMixFormatKey >= 0 )
      return 0LL;
    v10 = 7864LL;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)ProcessingModeSpecificOverridingMixFormatKey);
  return (unsigned int)ProcessingModeSpecificOverridingMixFormatKey;
}
