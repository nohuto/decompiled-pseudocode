/*
 * XREFs of ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180134070
 * Callers:
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180133320 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800462C0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x180133E88 (-GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z.c)
 *     ?IsEqualObject@?$CComPtrBase@UIMMEndpoint@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x180133F88 (-IsEqualObject@-$CComPtrBase@UIMMEndpoint@@@ATL@@QEAA_NPEAUIUnknown@@@Z.c)
 *     ?IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180134034 (-IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 *     ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x180134614 (-SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDefaultDeviceManager::SetDefaultEndpoint(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  HRESULT v7; // ebx
  __int64 v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // edi
  __int64 v14; // r8
  unsigned int v15; // edi
  struct IUnknown *v17; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-48h] BYREF
  struct IUnknown *v19; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v20; // [rsp+48h] [rbp-38h] BYREF
  struct IUnknown *v21; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-28h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-20h] BYREF
  struct IUnknown *v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+30h] BYREF
  int v27; // [rsp+B4h] [rbp+34h]

  v27 = HIDWORD(a1);
  ppv = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  v26 = 0;
  v18 = 0;
  v7 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v21);
    if ( v7 >= 0 )
    {
      if ( !ATL::CComPtrBase<IMMEndpoint>::IsEqualObject((void (__fastcall ****)(_QWORD, GUID *, __int64 *))&v24, v21) )
        ATL::AtlComQIPtrAssign(&v24, v21, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      if ( !v24 )
        goto LABEL_6;
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v24->lpVtbl[1].QueryInterface)(v24, &v18);
      if ( v7 < 0 )
        goto LABEL_51;
      if ( (unsigned int)IsNeverSetAsDefault((__int64)v21, v18, a3) )
      {
LABEL_6:
        v7 = -2147467259;
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv + 24LL))(
               ppv,
               v18,
               1LL,
               &v20);
        if ( v7 >= 0 )
        {
          v7 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v20->lpVtbl[1].QueryInterface)(v20, &v26);
          if ( v7 >= 0 )
          {
            if ( v26 )
            {
              v8 = -1LL;
              v9 = 0;
              do
              {
                v19 = 0LL;
                v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v20->lpVtbl[1].AddRef)(
                       v20,
                       v9,
                       &v19);
                if ( v7 < 0 )
                {
                  v11 = (__int64 *)&v19;
                  goto LABEL_55;
                }
                if ( !(unsigned int)IsNeverSetAsDefault((__int64)v19, v18, a3)
                  && (int)GetEndpointLevel(v19, a3, &v17) >= 0
                  && v8 <= (__int64)v17 )
                {
                  v8 = (__int64)v17;
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
                ++v9;
              }
              while ( v9 < v26 );
              if ( v8 == -1 )
                v10 = 1LL;
              else
                v10 = v8 + 2;
              v12 = 0LL;
              if ( v8 != -1 )
                v12 = v8 + 1;
              v7 = SetEndpointLevels(v21, a3, v10);
              if ( v7 >= 0 )
              {
                v13 = 0;
                if ( v26 )
                {
                  do
                  {
                    v17 = 0LL;
                    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v20->lpVtbl[1].AddRef)(
                           v20,
                           v13,
                           &v17);
                    if ( v7 < 0 )
                      goto LABEL_54;
                    if ( !(unsigned int)IsNeverSetAsDefault((__int64)v17, v18, a3)
                      && (int)GetEndpointLevel(v17, a3, &v25) < 0 )
                    {
                      v19 = 0LL;
                      v22 = 0;
                      if ( !v17 || (ATL::AtlComQIPtrAssign(&v19, v17, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21), !v19) )
                      {
                        v7 = -2147024809;
LABEL_53:
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
                        goto LABEL_54;
                      }
                      v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))v19->lpVtbl[3].QueryInterface)(
                             v19,
                             a3,
                             &v22);
                      if ( v7 < 0 )
                        goto LABEL_53;
                      v14 = v12;
                      if ( v22 < 0x60000000 )
                        v14 = 0LL;
                      v7 = SetEndpointLevels(v17, a3, v14);
                      if ( v7 < 0 )
                        goto LABEL_53;
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
                    }
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
                  }
                  while ( ++v13 < v26 );
                }
                if ( v20 )
                  ATL::AtlComPtrAssign(&v20, 0LL);
                v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv + 24LL))(
                       ppv,
                       v18,
                       14LL,
                       &v20);
                if ( v7 >= 0 )
                {
                  v7 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v20->lpVtbl[1].QueryInterface)(
                         v20,
                         &v26);
                  if ( v7 >= 0 )
                  {
                    v15 = 0;
                    if ( !v26 )
                    {
LABEL_50:
                      *a4 = v18;
                      goto LABEL_51;
                    }
                    while ( 1 )
                    {
                      v17 = 0LL;
                      v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v20->lpVtbl[1].AddRef)(
                             v20,
                             v15,
                             &v17);
                      if ( v7 < 0 )
                        break;
                      if ( !(unsigned int)IsNeverSetAsDefault((__int64)v17, v18, a3)
                        && (int)GetEndpointLevel(v17, a3, &v19) >= 0
                        && (__int64)v19 >= v12 )
                      {
                        v19 = (struct IUnknown *)((char *)v19 + 1);
                        v7 = SetEndpointLevels(v17, a3, v19);
                        if ( v7 < 0 )
                          break;
                      }
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
                      if ( ++v15 >= v26 )
                        goto LABEL_50;
                    }
LABEL_54:
                    v11 = (__int64 *)&v17;
LABEL_55:
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
                  }
                }
              }
            }
            else
            {
              v7 = -2147023728;
            }
          }
        }
      }
    }
  }
LABEL_51:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v7;
}
