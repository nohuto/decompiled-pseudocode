/*
 * XREFs of ?CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1801452E4
 * Callers:
 *     ?DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180146E70 (-DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180163D80 (-GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheOverridingMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificOverridingMixFormatKey; // ebx
  __int64 v9; // rdx
  int v11[4]; // [rsp+20h] [rbp-68h] BYREF
  const struct tWAVEFORMATEX *v12; // [rsp+30h] [rbp-58h]
  struct _GUID v13; // [rsp+40h] [rbp-48h] BYREF
  struct _tagpropertykey v14; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12 = 0LL;
  *(_OWORD *)v11 = 0LL;
  if ( a2 != eOffloadConnector )
  {
    if ( a4 )
    {
      if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
      {
        ProcessingModeSpecificOverridingMixFormatKey = -2004287480;
        v9 = 7415LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)ProcessingModeSpecificOverridingMixFormatKey);
        return (unsigned int)ProcessingModeSpecificOverridingMixFormatKey;
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
      v9 = 7424LL;
      goto LABEL_5;
    }
    ProcessingModeSpecificOverridingMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, int *))(**((_QWORD **)this + 5) + 48LL))(
                                                     *((_QWORD *)this + 5),
                                                     &v14,
                                                     v11);
    if ( ProcessingModeSpecificOverridingMixFormatKey < 0 )
    {
      v9 = 7426LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
