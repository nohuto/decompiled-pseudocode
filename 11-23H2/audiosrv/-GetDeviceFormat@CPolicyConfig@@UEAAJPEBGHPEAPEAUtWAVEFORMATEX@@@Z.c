/*
 * XREFs of ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800201F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x18002023C (-GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        struct tWAVEFORMATEX **a4)
{
  int DeviceFormatHelper; // ebx
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  DeviceFormatHelper = CPolicyConfig::GetDeviceFormatHelper(this, a2, eHostProcessConnector, a3, a4, 0LL, 0LL, 0LL);
  if ( DeviceFormatHelper >= 0 )
    return 0LL;
  result = 2290679812LL;
  if ( DeviceFormatHelper != -2004287484 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)DeviceFormatHelper,
      v6);
    return (unsigned int)DeviceFormatHelper;
  }
  return result;
}
