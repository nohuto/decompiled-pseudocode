/*
 * XREFs of ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x18004C87C
 * Callers:
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18004BE68 (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x18004CBD8 (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x18004CDF4 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::Initialize(EndpointDevice *this, struct IUnknown *a2)
{
  struct IUnknown **v4; // rcx
  int inited; // ebx
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = (struct IUnknown **)((char *)this + 24);
  if ( *v4 != a2 )
    ATL::AtlComPtrAssign(v4, a2);
  inited = EndpointDevice::InitAdapterInformation(this);
  if ( inited >= 0 )
  {
    inited = EndpointDevice::InitTopologyIdInfo(this);
    if ( inited >= 0 )
    {
      inited = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
                 a2,
                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                 &v8);
      if ( inited >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, (char *)this + 112);
        inited = 0;
        if ( v6 < 0 )
          inited = v6;
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  return (unsigned int)inited;
}
