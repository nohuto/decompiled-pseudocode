/*
 * XREFs of ?GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180115E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180153D3C (-GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncode.c)
 */

__int64 __fastcall CPolicyConfig::GetEndpointExtendedSpatialLicenseInfo(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct ExtendedSpatialAudioEncoderInfo *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 )
    return CSpatialAudioTech::GetEndpointExtendedSpatialLicenseInfo(a2, a3, a4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x738,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x80004003LL);
  return 2147500035LL;
}
