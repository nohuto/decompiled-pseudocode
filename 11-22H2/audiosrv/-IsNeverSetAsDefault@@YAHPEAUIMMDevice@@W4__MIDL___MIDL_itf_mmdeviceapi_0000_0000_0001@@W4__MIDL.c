/*
 * XREFs of ?IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800844F4
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1801412A4 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsNeverSetAsDefault(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 0;
  if ( (int)GetNeverSetAsDefaultProperty(a1, a2, a3, &v5) >= 0 )
    return v5 != 0;
  return v3;
}
