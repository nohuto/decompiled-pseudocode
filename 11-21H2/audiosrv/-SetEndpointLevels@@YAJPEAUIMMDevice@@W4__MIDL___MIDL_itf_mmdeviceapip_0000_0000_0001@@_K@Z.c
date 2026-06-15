/*
 * XREFs of ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x180134614
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180134070 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800462C0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?SetEndpointLevel@@YAJPEAUIMMEndpointInternal@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x180134588 (-SetEndpointLevel@@YAJPEAUIMMEndpointInternal@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetEndpointLevels(struct IUnknown *a1, unsigned int a2, __int64 a3)
{
  int v5; // ebx
  struct IUnknown *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a1 && (ATL::AtlComQIPtrAssign(&v7, a1, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21), v7) )
  {
    v5 = SetEndpointLevel((__int64)v7, a2, a3);
    if ( v5 >= 0 )
    {
      if ( a2 != 1 || (v5 = SetEndpointLevel((__int64)v7, 0, a3), v5 >= 0) )
      {
        if ( !a2 )
          v5 = SetEndpointLevel((__int64)v7, 1u, a3);
      }
    }
  }
  else
  {
    v5 = -2147024809;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  return (unsigned int)v5;
}
