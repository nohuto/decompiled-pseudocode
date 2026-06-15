/*
 * XREFs of ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180145170
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145B04 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180148BE0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180163D1C (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificMixFormatKey; // ebx
  __int64 v9; // rdx
  __int64 v11; // rax
  __int128 v12; // [rsp+30h] [rbp-50h] BYREF
  const struct tWAVEFORMATEX *v13; // [rsp+40h] [rbp-40h]
  struct _GUID v14; // [rsp+50h] [rbp-30h] BYREF
  struct _tagpropertykey v15; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v13 = 0LL;
  v12 = 0LL;
  if ( a2 != eOffloadConnector )
  {
    if ( a4 )
    {
      if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
      {
        ProcessingModeSpecificMixFormatKey = -2004287480;
        v9 = 7447LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)ProcessingModeSpecificMixFormatKey);
        return (unsigned int)ProcessingModeSpecificMixFormatKey;
      }
      v13 = a4;
      LOWORD(v12) = 65;
      DWORD2(v12) = a4->cbSize + 18;
    }
    v14 = *a3;
    ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(
                                           &v14,
                                           a2 == eKeywordDetectorConnector,
                                           &v15);
    if ( ProcessingModeSpecificMixFormatKey < 0 )
    {
      v9 = 7456LL;
      goto LABEL_5;
    }
    ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
                                           *((_QWORD *)this + 5),
                                           &v15,
                                           &v12);
    if ( ProcessingModeSpecificMixFormatKey < 0 )
    {
      v9 = 7458LL;
      goto LABEL_5;
    }
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, a2, 0LL, 0LL, &v14);
    v11 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&v14.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&v14.Data1 )
      v11 = *(_QWORD *)a3->Data4 - *(_QWORD *)v14.Data4;
    if ( !v11 )
    {
      ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
                                             *((_QWORD *)this + 5),
                                             &PKEY_AudioEngine_MixFormat,
                                             &v12);
      if ( ProcessingModeSpecificMixFormatKey < 0 )
      {
        v9 = 7466LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
