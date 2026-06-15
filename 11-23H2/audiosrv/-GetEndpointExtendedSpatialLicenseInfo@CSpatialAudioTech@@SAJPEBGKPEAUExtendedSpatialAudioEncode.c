/*
 * XREFs of ?GetEndpointExtendedSpatialLicenseInfo@CSpatialAudioTech@@SAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180153CEC
 * Callers:
 *     ?GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180115E30 (-GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x180153230 (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18015B36C (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialAudioTech::GetEndpointExtendedSpatialLicenseInfo(
        const unsigned __int16 *a1,
        unsigned int a2,
        struct ExtendedSpatialAudioEncoderInfo *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct AtmosCheck *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v10);
  v6 = CSpatialAudioTech::GetAtmosCheckInstance(&v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v10 )
    {
      AtmosCheck::GetEndpointExtendedSpatialLicenseInfo(v10, a1, a2, a3);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v10);
      return 0LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v10);
      return 2147549183LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\SpatialProviders.h",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v10);
    return v7;
  }
}
