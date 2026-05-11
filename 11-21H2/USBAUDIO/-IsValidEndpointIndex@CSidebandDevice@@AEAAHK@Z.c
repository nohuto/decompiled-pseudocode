/*
 * XREFs of ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C000E988
 * Callers:
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ACF0 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BF5C (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0011BA0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012200 (-GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00124A0 (-GetMutePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012680 (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012800 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012980 (-GetSidetoneVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0012B64 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013150 (-GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00133F0 (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013C48 (-GetVolumePropertyValues@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013E2C (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0013FAC (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00146C8 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0014C8C (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00150E4 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015680 (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00159C4 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C0015C84 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C001614C (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z @ 0x1C000BA58 (-GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z.c)
 */

_BOOL8 __fastcall CSidebandDevice::IsValidEndpointIndex(CSidebandDevice *this, unsigned int a2)
{
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  return (int)CSidebandDevice::GetNumberOfEndpointsInDevice(this, &v4) >= 0 && a2 < v4;
}
