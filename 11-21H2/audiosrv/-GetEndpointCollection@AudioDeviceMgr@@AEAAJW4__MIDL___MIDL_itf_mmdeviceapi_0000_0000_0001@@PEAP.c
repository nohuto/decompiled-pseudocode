/*
 * XREFs of ?GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x18004BD00
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18004BD8C (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18015C57C (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 * Callees:
 *     ?CopyTo@?$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z @ 0x18004BD48 (-CopyTo@-$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z.c)
 */

__int64 __fastcall AudioDeviceMgr::GetEndpointCollection(
        AudioDeviceMgr *this,
        unsigned int a2,
        struct IEndpointCollection **a3)
{
  unsigned int v3; // ebx
  char *v4; // rcx

  v3 = 0;
  if ( a2 > 1 )
  {
    return (unsigned int)-2147024809;
  }
  else if ( a3 )
  {
    *a3 = 0LL;
    if ( a2 )
      v4 = (char *)this + 64;
    else
      v4 = (char *)this + 56;
    ATL::CComPtrBase<IEndpointCollection>::CopyTo(v4, a3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
