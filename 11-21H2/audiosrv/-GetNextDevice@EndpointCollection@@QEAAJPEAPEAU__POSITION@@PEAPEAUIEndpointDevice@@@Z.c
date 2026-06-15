/*
 * XREFs of ?GetNextDevice@EndpointCollection@@QEAAJPEAPEAU__POSITION@@PEAPEAUIEndpointDevice@@@Z @ 0x18015D7E0
 * Callers:
 *     ?GetNextDevice@EndpointIterator@@UEAAJPEAPEAUIEndpointDevice@@@Z @ 0x18015D880 (-GetNextDevice@EndpointIterator@@UEAAJPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x18015C538 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointCollection::GetNextDevice(
        EndpointCollection *this,
        struct __POSITION **a2,
        struct IEndpointDevice **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  struct __POSITION *v7; // rbp
  struct IUnknown *v8; // rdx
  struct IUnknown *v10; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v10 = 0LL;
  if ( a2 && a3 )
  {
    *a3 = 0LL;
    v6 = (__int64)*a2;
    if ( *a2 || (v6 = *((_QWORD *)this + 3)) != 0 )
    {
      v7 = *(struct __POSITION **)v6;
      v8 = *(struct IUnknown **)(v6 + 16);
      if ( v8 )
        ATL::AtlComPtrAssign(&v10, v8);
      ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v10, a3);
      *a2 = v7;
    }
    else
    {
      v5 = 1;
    }
  }
  else
  {
    v5 = -2147467261;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  return v5;
}
