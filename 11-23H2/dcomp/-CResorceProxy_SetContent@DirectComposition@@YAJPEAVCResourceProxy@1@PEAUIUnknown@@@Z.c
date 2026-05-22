/*
 * XREFs of ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238
 * Callers:
 *     ?SetContent@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIUnknown@@@Z @ 0x180004220 (-SetContent@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIUnk.c)
 * Callees:
 *     ?CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnknown@@@Z @ 0x180004714 (-CreateSurfaceFromDXGISwapChain@CDevice@DirectComposition@@QEAAJPEAUIDXGISwapChain1@@PEAPEAUIUnk.c)
 *     ?SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z @ 0x180023E78 (-SetReferenceProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIUnknown@@@Z.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?ValidFlipFormat@CDevice@DirectComposition@@SA_NW4DXGI_FORMAT@@_N@Z @ 0x18003A954 (-ValidFlipFormat@CDevice@DirectComposition@@SA_NW4DXGI_FORMAT@@_N@Z.c)
 *     ?GetResourceProxyNoRef@CVirtualSurface@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18003B110 (-GetResourceProxyNoRef@CVirtualSurface@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ??$QueryInterface@UIDCompositionTexture@@@IUnknown@@QEAAJPEAPEAUIDCompositionTexture@@@Z @ 0x18009CB10 (--$QueryInterface@UIDCompositionTexture@@@IUnknown@@QEAAJPEAPEAUIDCompositionTexture@@@Z.c)
 *     ??$start@V?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@0@XZ @ 0x18009D5DC (--$start@V-$tip_test@V-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@Compos.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18009D9AC (--1-$tip_test@V-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTe.c)
 *     ??I?$com_ptr_t@UIDCompositionTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIDCompositionTexture@@XZ @ 0x18009DAC8 (--I-$com_ptr_t@UIDCompositionTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIDComposition.c)
 *     ??I?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ @ 0x18009DB04 (--I-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAAXXZ @ 0x18009DCE4 (-complete@-$tip_test@V-$merged_data@U_tip_CompositionTextureSurfaceBindingTest_attributes@Compos.c)
 *     ?CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z @ 0x18009FE90 (-CreateSurfaceBinding@CCompositionTexture@DirectComposition@@QEAAJPEAPEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CResorceProxy_SetContent(
        DirectComposition *this,
        struct DirectComposition::CResourceProxy *a2,
        struct IUnknown *a3)
{
  char v3; // r14
  int ResourceProxyNoRef; // edi
  struct IUnknown *lpVtbl; // r8
  enum DXGI_FORMAT v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  struct IUnknown *v11; // r8
  struct IUnknownVtbl *v12; // rax
  struct IUnknownVtbl **p_lpVtbl; // rcx
  struct IUnknown *v14; // rbx
  struct IUnknown *v15; // rax
  __int64 v16; // rax
  DirectComposition::CCompositionTexture *v17; // rbx
  struct IUnknown **v18; // rax
  struct DirectComposition::CDevice *v20; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+78h] [rbp+48h] BYREF
  struct IUnknown *v22; // [rsp+80h] [rbp+50h] BYREF
  struct IDXGISwapChain1 *v23; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  if ( !a2 )
  {
    v3 = 1;
    ResourceProxyNoRef = DirectComposition::CResourceProxy::SetReferenceProperty(this, 0xAu, 0LL);
    goto LABEL_41;
  }
  if ( (**(int (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_ea4d861b_4386_41f2_bb87_74439b7d45f4,
         &v21) >= 0 )
  {
    lpVtbl = (struct IUnknown *)v21[7].lpVtbl;
LABEL_32:
    v3 = 1;
    goto LABEL_33;
  }
  if ( (**(int (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_c9f54a6b_06fb_4465_9edc_590cacccb47a,
         &v21) >= 0 )
  {
    v3 = 1;
    v8 = ((unsigned int (__fastcall *)(struct IUnknown *))v21->lpVtbl[4].Release)(v21);
    if ( DirectComposition::CDevice::ValidFlipFormat(v8, 0) )
    {
      v22 = (struct IUnknown *)(v9 & (unsigned __int64)v22);
      ResourceProxyNoRef = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown **))v21->lpVtbl[4].AddRef)(
                             v21,
                             &v22);
      if ( ResourceProxyNoRef >= 0 )
      {
        lpVtbl = v22;
LABEL_33:
        ResourceProxyNoRef = DirectComposition::CResourceProxy::SetReferenceProperty(this, 0xAu, lpVtbl);
      }
    }
    else
    {
      ResourceProxyNoRef = -2147024809;
    }
    p_lpVtbl = &v21->lpVtbl;
LABEL_35:
    v12 = *p_lpVtbl;
LABEL_36:
    ((void (__fastcall *)(struct IUnknownVtbl **))v12->Release)(p_lpVtbl);
    goto LABEL_41;
  }
  if ( (**(int (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_ae471c51_5f53_4a24_8d3e_d0c39c30b3f0,
         &v21) >= 0 )
  {
    v3 = 1;
    if ( DirectComposition::CDevice::ValidFlipFormat(SHIDWORD(v21[15].lpVtbl), 0) )
    {
      v22 = (struct IUnknown *)(v10 & (unsigned __int64)v22);
      ResourceProxyNoRef = DirectComposition::CVirtualSurface::GetResourceProxyNoRef(
                             (DirectComposition::CVirtualSurface *)v11,
                             &v22);
      if ( ResourceProxyNoRef >= 0 )
        ResourceProxyNoRef = DirectComposition::CResourceProxy::SetReferenceProperty(this, 0xAu, v22);
      v11 = v21;
    }
    else
    {
      ResourceProxyNoRef = -2147024809;
    }
    v12 = v11->lpVtbl;
    p_lpVtbl = &v11->lpVtbl;
    goto LABEL_36;
  }
  ResourceProxyNoRef = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IDXGISwapChain1 **))a2)(
                         a2,
                         &GUID_790a45f7_0d42_4876_983a_0a55cfe6f4aa,
                         &v23);
  if ( ResourceProxyNoRef >= 0 )
  {
    v22 = 0LL;
    v3 = 1;
    DirectComposition::CDevice::GetDeviceAndHandleWorker(
      (void *)(((unsigned __int64)this - 8) & -(__int64)(this != 0LL)),
      &v20,
      (unsigned int *)&v21);
    if ( (int)DirectComposition::CDevice::CreateSurfaceFromDXGISwapChain(v20, v23, &v22) >= 0 )
    {
      v14 = v22;
      DirectComposition::CResourceProxy::SetReferenceProperty(this, 0xAu, v22);
      ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
    }
    p_lpVtbl = (struct IUnknownVtbl **)v23;
    goto LABEL_35;
  }
  if ( (**(int (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_23d72676_66f2_11e0_b363_ef38dfd72085,
         &v21) >= 0
    || (**(int (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_9f108715_b89d_4adc_9931_b2e535104c76,
         &v21) >= 0 )
  {
    goto LABEL_22;
  }
  if ( (**(int (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_bd083f4c_9f2f_403e_92ff_547238e51fec,
         &v22) >= 0 )
  {
    v3 = 1;
    v21 = 0LL;
    ResourceProxyNoRef = ((__int64 (__fastcall *)(struct IUnknown *, struct IUnknown **))v22->lpVtbl[1].Release)(
                           v22,
                           &v21);
    if ( ResourceProxyNoRef >= 0 )
      ResourceProxyNoRef = DirectComposition::CResourceProxy::SetReferenceProperty(this, 0xAu, v21);
    p_lpVtbl = &v22->lpVtbl;
    goto LABEL_35;
  }
  if ( (**(int (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_1b327eb1_566f_4cd6_8e16_01e238d18f56,
         &v21) >= 0
    || (**(int (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_05b09044_12cd_4662_8ef2_533864a34974,
         &v21) >= 0 )
  {
LABEL_22:
    lpVtbl = v21;
    goto LABEL_32;
  }
  if ( (**(int (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
         a2,
         &GUID_c14d9420_71de_4dce_bddf_74b036388c08,
         &v21) >= 0 )
  {
    lpVtbl = (struct IUnknown *)v21[3].lpVtbl;
    goto LABEL_32;
  }
  ResourceProxyNoRef = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceProxy *, GUID *, struct IUnknown **))a2)(
                         a2,
                         &GUID_c2448e9b_547d_4057_8cf5_8144ede1c2da,
                         &v21);
  if ( ResourceProxyNoRef >= 0 )
  {
    v15 = v21;
    if ( v21 )
      v15 = v21 - 2;
    v3 = 1;
    ResourceProxyNoRef = DirectComposition::CResourceProxy::SetReferenceProperty(
                           this,
                           0xAu,
                           (struct IUnknown *)v15[3].lpVtbl->Release);
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  }
LABEL_41:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl) )
  {
    if ( v3 )
      return (unsigned int)ResourceProxyNoRef;
    v22 = 0LL;
    v16 = wil::com_ptr_t<IDCompositionTexture,wil::err_returncode_policy>::operator&(&v22);
    ResourceProxyNoRef = IUnknown::QueryInterface<IDCompositionTexture>(a2, v16);
    if ( ResourceProxyNoRef >= 0 )
    {
      v3 = 1;
      v17 = (DirectComposition::CCompositionTexture *)((unsigned __int64)&v22[-2] & -(__int64)(v22 != 0LL));
      tip2::start<tip2::tip_test<tip2::details::merged_data<CompositionTextureTip::_tip_CompositionTextureSurfaceBindingTest_attributes,tip2::test_data_basic>>>(&v23);
      v21 = 0LL;
      v18 = (struct IUnknown **)wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::operator&(&v21);
      ResourceProxyNoRef = DirectComposition::CCompositionTexture::CreateSurfaceBinding(v17, v18);
      if ( ResourceProxyNoRef >= 0 )
      {
        ResourceProxyNoRef = DirectComposition::CResourceProxy::SetReferenceProperty(this, 0xAu, v21);
        if ( ResourceProxyNoRef >= 0 )
          tip2::tip_test<tip2::details::merged_data<CompositionTextureTip::_tip_CompositionTextureSurfaceBindingTest_attributes,tip2::test_data_basic>>::complete(&v23);
      }
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v21);
      tip2::tip_test<tip2::details::merged_data<CompositionTextureTip::_tip_CompositionTextureSurfaceBindingTest_attributes,tip2::test_data_basic>>::~tip_test<tip2::details::merged_data<CompositionTextureTip::_tip_CompositionTextureSurfaceBindingTest_attributes,tip2::test_data_basic>>(&v23);
    }
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v22);
  }
  if ( !v3 )
    return (unsigned int)-2147024809;
  return (unsigned int)ResourceProxyNoRef;
}
