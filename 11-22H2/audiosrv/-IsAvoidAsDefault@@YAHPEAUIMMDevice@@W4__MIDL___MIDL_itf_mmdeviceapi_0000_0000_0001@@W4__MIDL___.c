/*
 * XREFs of ?IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180141080
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1801412A4 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     ?GetAvoidAsDefaultProperty@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAH@Z @ 0x180140E60 (-GetAvoidAsDefaultProperty@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 */

__int64 __fastcall IsAvoidAsDefault(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 0;
  if ( (int)GetAvoidAsDefaultProperty(a1, a2, a3, &v5) >= 0 )
    return v5 != 0;
  return v3;
}
