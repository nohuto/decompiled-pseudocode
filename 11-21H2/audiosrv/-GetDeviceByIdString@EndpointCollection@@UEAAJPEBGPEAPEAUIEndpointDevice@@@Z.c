/*
 * XREFs of ?GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x18015D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800C9B74 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x18015C538 (-CopyTo@-$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EndpointCollection::GetDeviceByIdString(
        EndpointCollection *this,
        char *a2,
        struct IEndpointDevice **a3)
{
  unsigned int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  void *v9; // rcx
  unsigned __int16 *v10; // rax
  int v11; // r9d
  int v12; // edx
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0;
  v15 = 0LL;
  v17 = 0LL;
  v6 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0LL;
      v7 = (*(__int64 (__fastcall **)(EndpointCollection *, __int64 *))(*(_QWORD *)this + 64LL))(this, &v15);
      if ( v7 >= 0 )
      {
        while ( 1 )
        {
          ATL::CComPtrBase<IPart>::Release(&v17);
          v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v17);
          if ( v7 < 0 )
            break;
          if ( !v17 )
            goto LABEL_18;
          v14 = 0LL;
          pv = 0LL;
          v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v14);
          if ( v8 < 0 || (v8 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &pv), v8 < 0) )
          {
            v5 = v8;
            CoTaskMemFree(pv);
            pv = 0LL;
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
            goto LABEL_22;
          }
          v9 = pv;
          v10 = (unsigned __int16 *)pv;
          do
          {
            v11 = *(unsigned __int16 *)((char *)v10 + a2 - (_BYTE *)pv);
            v12 = *v10 - v11;
            if ( v12 )
              break;
            ++v10;
          }
          while ( v11 );
          if ( !v12 )
          {
            v6 = 1;
            ATL::CComPtrBase<IEndpointDevice>::CopyTo(&v17, a3);
            v9 = pv;
          }
          CoTaskMemFree(v9);
          pv = 0LL;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
          if ( !v17 )
          {
            if ( v6 )
              goto LABEL_22;
LABEL_18:
            v5 = -2147023728;
            goto LABEL_22;
          }
          if ( v6 )
            goto LABEL_22;
        }
      }
      v5 = v7;
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
LABEL_22:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  return v5;
}
