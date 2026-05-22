/*
 * XREFs of ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeGuard@VCDeviceLock@DirectComposition@@@@YA?AV?$CGuard@VCDeviceLock@DirectComposition@@@@AEAVCDeviceLock@DirectComposition@@@Z @ 0x1800246CC (--$MakeGuard@VCDeviceLock@DirectComposition@@@@YA-AV-$CGuard@VCDeviceLock@DirectComposition@@@@A.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098584 (--1-$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEAPEAVCCompositionTexture@2@@Z @ 0x1800987B0 (-CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEA.c)
 *     ?reset@?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009938C (-reset@-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009D908 (--1-$com_ptr_t@V-$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTi.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x18009DE18 (-complete_without_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 *     ?EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceTextureManager@2@@Z @ 0x1800A0AAC (-EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceT.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextureTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1800A0D6C (-start@-$tip_test@V-$merged_data@U_tip_CreateCompositionTextureTest_attributes@CompositionTextur.c)
 *     ??$QueryInterface@UID3D11Texture2D@@@IUnknown@@QEAAJPEAPEAUID3D11Texture2D@@@Z @ 0x1800E9494 (--$QueryInterface@UID3D11Texture2D@@@IUnknown@@QEAAJPEAPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateCompositionTexture(
        DirectComposition::CDevice *this,
        struct IUnknown *a2,
        struct IDCompositionTexture **a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct DirectComposition::CCompositionTexture *v12; // rax
  void *v13; // rcx
  struct ID3D11Texture2D *v14; // [rsp+20h] [rbp-20h] BYREF
  void *v15; // [rsp+28h] [rbp-18h] BYREF
  _QWORD *v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct DirectComposition::CCompositionTexture *v18; // [rsp+68h] [rbp+28h] BYREF
  DirectComposition::CDeviceTextureManager *v19; // [rsp+78h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v6 = 295LL;
LABEL_3:
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
      (const char *)0x80070057LL);
    return v7;
  }
  if ( !a3 )
  {
    v6 = 296LL;
    goto LABEL_3;
  }
  *a3 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl) )
  {
    v15 = 0LL;
    tip2::tip_test<tip2::details::merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>>::start(
      &v15,
      v16);
    MakeGuard<DirectComposition::CDeviceLock>(
      (DirectComposition::CDeviceLock **)v16,
      (DirectComposition::CDevice *)((char *)this + 88));
    v14 = 0LL;
    v9 = IUnknown::QueryInterface<ID3D11Texture2D>(a2, &v14);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v19 = 0LL;
      v10 = DirectComposition::CDevice::EnsureDeviceTextureManager(
              (DirectComposition::CDevice *)((char *)this - 8),
              v14,
              &v19);
      v7 = v10;
      if ( v10 >= 0 )
      {
        v18 = 0LL;
        wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::reset((__int64 *)&v18);
        v11 = DirectComposition::CDeviceTextureManager::CreateCompositionTexture((const void **)v19, v14, &v18);
        v7 = v11;
        if ( v11 >= 0 )
        {
          v12 = v18;
          v18 = 0LL;
          v13 = v15;
          *a3 = (struct IDCompositionTexture *)(((unsigned __int64)v12 + 16) & -(__int64)(v12 != 0LL));
          if ( v13 )
            tip2::details::shared_data<0,0,1>::complete_without_lock((__int64)v13 + 8);
          wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v18);
          wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>((__int64 *)&v19);
          v7 = 0;
          goto LABEL_18;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13B,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v18);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x137,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
          (const char *)(unsigned int)v10);
      }
      wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>((__int64 *)&v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x133,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_18:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v14);
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(v16);
    wil::com_ptr_t<tip2::details::merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<CompositionTextureTip::_tip_CreateCompositionTextureTest_attributes,tip2::test_data_basic>,wil::err_returncode_policy>(&v15);
    return v7;
  }
  return 2147500033LL;
}
