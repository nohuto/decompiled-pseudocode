/*
 * XREFs of ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1801412A4
 * Callers:
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180140450 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001D4A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800844F4 (-IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 *     ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x180140F80 (-GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z.c)
 *     ?IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180141080 (-IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___.c)
 *     ?IsEqualObject@?$CComPtrBase@UIMMEndpoint@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x1801410B4 (-IsEqualObject@-$CComPtrBase@UIMMEndpoint@@@ATL@@QEAA_NPEAUIUnknown@@@Z.c)
 *     ?RemoveAvoidAsDefaultProperty@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18014115C (-RemoveAvoidAsDefaultProperty@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@.c)
 *     ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x18014192C (-SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CDefaultDeviceManager::SetDefaultEndpoint(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  HRESULT v7; // ebx
  __int64 v8; // rdi
  unsigned int i; // r14d
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // edi
  __int64 v14; // r8
  unsigned int v15; // edi
  struct IUnknown *v17; // [rsp+38h] [rbp-29h] BYREF
  struct IUnknown *v18; // [rsp+40h] [rbp-21h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-19h] BYREF
  struct IUnknown *v20; // [rsp+50h] [rbp-11h] BYREF
  struct IUnknown *v21; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-1h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+7h] BYREF
  struct IUnknown *v24; // [rsp+70h] [rbp+Fh] BYREF
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v26; // [rsp+88h] [rbp+27h]
  __int64 v27; // [rsp+90h] [rbp+2Fh] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+67h] BYREF
  int v29; // [rsp+CCh] [rbp+6Bh]

  v29 = HIDWORD(a1);
  ppv = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  v19 = 0;
  v28 = 0;
  *(_OWORD *)pvar = 0LL;
  v26 = 0LL;
  LOWORD(pvar[0]) = 11;
  LOWORD(pvar[1]) = -1;
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
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v24->lpVtbl[1].QueryInterface)(v24, &v28);
      if ( v7 >= 0 )
      {
        if ( (unsigned int)IsNeverSetAsDefault((__int64)v21, v28, a3) )
        {
LABEL_6:
          v7 = -2147467259;
          goto LABEL_58;
        }
        RemoveAvoidAsDefaultProperty((__int64)v21, v28, a3);
        v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv + 24LL))(
               ppv,
               v28,
               1LL,
               &v20);
        if ( v7 >= 0 )
        {
          v7 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v20->lpVtbl[1].QueryInterface)(v20, &v19);
          if ( v7 >= 0 )
          {
            if ( v19 )
            {
              v8 = -1LL;
              for ( i = 0; i < v19; ++i )
              {
                v18 = 0LL;
                v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v20->lpVtbl[1].AddRef)(
                       v20,
                       i,
                       &v18);
                if ( v7 < 0 )
                {
                  v11 = (__int64 *)&v18;
                  goto LABEL_23;
                }
                if ( !(unsigned int)IsNeverSetAsDefault((__int64)v18, v28, a3)
                  && (int)GetEndpointLevel(v18, a3, &v17) >= 0
                  && v8 <= (__int64)v17 )
                {
                  v8 = (__int64)v17;
                }
                wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v18);
              }
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
                if ( v19 )
                {
                  while ( 1 )
                  {
                    v17 = 0LL;
                    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v20->lpVtbl[1].AddRef)(
                           v20,
                           v13,
                           &v17);
                    if ( v7 < 0 )
                      break;
                    if ( !(unsigned int)IsNeverSetAsDefault((__int64)v17, v28, a3) )
                    {
                      if ( (unsigned int)IsAvoidAsDefault((__int64)v17, v28, a3) )
                      {
                        v7 = SetEndpointLevels(v17, a3, 0LL);
                        if ( v7 < 0 )
                          break;
                      }
                      if ( (int)GetEndpointLevel(v17, a3, &v27) < 0 )
                      {
                        v18 = 0LL;
                        v22 = 0;
                        if ( !v17
                          || (ATL::AtlComQIPtrAssign(&v18, v17, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21), !v18) )
                        {
                          v7 = -2147024809;
LABEL_62:
                          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v18);
                          break;
                        }
                        v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))v18->lpVtbl[3].QueryInterface)(
                               v18,
                               a3,
                               &v22);
                        if ( v7 < 0 )
                          goto LABEL_62;
                        v14 = v12;
                        if ( v22 < 0x60000000 )
                          v14 = 0LL;
                        v7 = SetEndpointLevels(v17, a3, v14);
                        if ( v7 < 0 )
                          goto LABEL_62;
                        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v18);
                      }
                    }
                    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v17);
                    if ( ++v13 >= v19 )
                      goto LABEL_42;
                  }
LABEL_63:
                  v11 = (__int64 *)&v17;
LABEL_23:
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v11);
                  goto LABEL_58;
                }
LABEL_42:
                if ( v20 )
                  ATL::AtlComPtrAssign(&v20, 0LL);
                v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv + 24LL))(
                       ppv,
                       v28,
                       14LL,
                       &v20);
                if ( v7 >= 0 )
                {
                  v7 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v20->lpVtbl[1].QueryInterface)(
                         v20,
                         &v19);
                  if ( v7 >= 0 )
                  {
                    v15 = 0;
                    if ( v19 )
                    {
                      do
                      {
                        v17 = 0LL;
                        v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v20->lpVtbl[1].AddRef)(
                               v20,
                               v15,
                               &v17);
                        if ( v7 < 0 )
                          goto LABEL_63;
                        if ( !(unsigned int)IsNeverSetAsDefault((__int64)v17, v28, a3)
                          && (int)GetEndpointLevel(v17, a3, &v18) >= 0
                          && (__int64)v18 >= v12 )
                        {
                          v18 = (struct IUnknown *)((char *)v18 + 1);
                          v7 = SetEndpointLevels(v17, a3, v18);
                          if ( v7 < 0 )
                            goto LABEL_63;
                        }
                        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v17);
                      }
                      while ( ++v15 < v19 );
                    }
                    if ( !v28 && !a3 )
                    {
                      v18 = 0LL;
                      v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, struct IUnknown **))v21->lpVtbl[1].AddRef)(
                             v21,
                             1LL,
                             &v18);
                      if ( v7 >= 0 )
                        v7 = ((__int64 (__fastcall *)(struct IUnknown *, void *, PROPVARIANT *))v18->lpVtbl[2].QueryInterface)(
                               v18,
                               &PKEY_AudioEndpoint_NoDefaultChangeUserPrompt,
                               pvar);
                      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v18);
                    }
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
LABEL_58:
  PropVariantClear(pvar);
  if ( v7 >= 0 )
    *a4 = v28;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v7;
}
