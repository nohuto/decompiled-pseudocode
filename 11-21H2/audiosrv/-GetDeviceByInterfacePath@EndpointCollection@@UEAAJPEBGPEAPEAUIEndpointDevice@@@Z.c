/*
 * XREFs of ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x18015D590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180046388 (--0-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21@@3U__s_GUID@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800C9B74 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x18015C538 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EndpointCollection::GetDeviceByInterfacePath(
        EndpointCollection *this,
        char *a2,
        struct IEndpointDevice **a3)
{
  int v5; // edi
  int v6; // ebx
  unsigned __int16 *v7; // rax
  int v8; // r8d
  int v9; // ecx
  void (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13[2]; // [rsp+30h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v12 = 0LL;
  v15 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v6 = (*(__int64 (__fastcall **)(EndpointCollection *, __int64 *))(*(_QWORD *)this + 64LL))(this, &v12);
      if ( v6 >= 0 )
      {
        do
        {
          ATL::CComPtrBase<IPart>::Release(&v15);
          v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v15);
          if ( v6 < 0 )
            break;
          if ( !v15 )
            goto LABEL_17;
          v11 = 0LL;
          pv = 0LL;
          v6 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v15 + 24LL))(
                 v15,
                 &v11);
          if ( v6 < 0 )
          {
            CoTaskMemFree(pv);
            pv = 0LL;
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
            break;
          }
          ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21>::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21>(
            v13,
            v11);
          v6 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v13[0] + 96LL))(v13[0], &pv);
          if ( v6 >= 0 )
          {
            v7 = (unsigned __int16 *)pv;
            do
            {
              v8 = *(unsigned __int16 *)((char *)v7 + a2 - (_BYTE *)pv);
              v9 = *v7 - v8;
              if ( v9 )
                break;
              ++v7;
            }
            while ( v8 );
            if ( !v9 )
            {
              v5 = 1;
              ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v15, a3);
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v13);
          CoTaskMemFree(pv);
          pv = 0LL;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
          if ( !v15 )
          {
            if ( v5 )
              break;
LABEL_17:
            v6 = -2147023728;
            break;
          }
        }
        while ( !v5 );
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
  return (unsigned int)v6;
}
