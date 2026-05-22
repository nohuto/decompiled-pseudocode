/*
 * XREFs of ?ConstructProxyObjectForMilResource@CDevice@DirectComposition@@AEAAJW4MIL_RESOURCE_TYPE@@PEAXIPEAPEAUIUnknown@@@Z @ 0x1800EDEE0
 * Callers:
 *     ?CreateMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAUIUnknown@@@Z @ 0x1800EFAB0 (-CreateMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAUIUnknown@@@Z.c)
 *     ?CreateSharedMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAUIUnknown@@@Z @ 0x1800F0770 (-CreateSharedMilResource@CDevice@DirectComposition@@UEAAJW4MIL_RESOURCE_TYPE@@PEAIPEAPEAXPEAPEAU.c)
 *     ?DuplicateSharedMilResource@CDevice@DirectComposition@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPEAUIUnknown@@@Z @ 0x1800F1A60 (-DuplicateSharedMilResource@CDevice@DirectComposition@@UEAAJPEAXW4MIL_RESOURCE_TYPE@@_NPEAIPEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@CGaussianBlurEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionGaussianBlurEffect@@@Z @ 0x1800EE4CC (-Create@CGaussianBlurEffect@DirectComposition@@SAJPEAVCFilterEffectProxy@2@PEAPEAUIDCompositionG.c)
 */

__int64 __fastcall DirectComposition::CDevice::ConstructProxyObjectForMilResource(
        struct IDCompositionGaussianBlurEffect *a1,
        unsigned int a2,
        __int64 a3,
        const char *a4,
        struct IDCompositionGaussianBlurEffect **a5)
{
  struct IDCompositionGaussianBlurEffect **v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  void **v15; // rax
  int v16; // eax
  unsigned int v17; // esi
  struct IDCompositionGaussianBlurEffect *v19; // rax
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDCompositionGaussianBlurEffect *v29; // [rsp+30h] [rbp+8h] BYREF

  v29 = a1;
  if ( !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      6943LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      a4);
  v6 = a5;
  *a5 = 0LL;
  if ( a2 > 0x6E )
  {
    v20 = a2 - 141;
    if ( v20 )
    {
      v21 = v20 - 2;
      if ( !v21 )
      {
        v15 = &DirectComposition::CRemoteAppRenderTargetProxy::`vftable';
        goto LABEL_42;
      }
      v22 = v21 - 5;
      if ( !v22 )
      {
        v15 = &DirectComposition::CRotateTransformProxy::`vftable';
        goto LABEL_42;
      }
      v23 = v22 - 4;
      if ( !v23 )
      {
        v15 = &DirectComposition::CScaleTransformProxy::`vftable';
        goto LABEL_42;
      }
      v24 = v23 - 36;
      if ( !v24 )
      {
        v15 = &DirectComposition::CSharedTransform3DProxy::`vftable';
        goto LABEL_42;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        v15 = &DirectComposition::CSharedTransformProxy::`vftable';
        goto LABEL_42;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v15 = &DirectComposition::CTranslateTransformProxy::`vftable';
        goto LABEL_42;
      }
      v27 = v26 - 6;
      if ( v27 )
      {
        if ( v27 != 8 )
          goto LABEL_34;
      }
    }
LABEL_41:
    v15 = &DirectComposition::CVisualProxy::`vftable';
    goto LABEL_42;
  }
  if ( a2 == 110 )
  {
    v15 = &DirectComposition::CMatrixTransform3DProxy::`vftable';
    goto LABEL_42;
  }
  v7 = a2 - 5;
  if ( !v7 )
  {
    v15 = &DirectComposition::CLegacyAnimationTrigger::`vftable';
    goto LABEL_42;
  }
  v8 = v7 - 14;
  if ( !v8 )
  {
    v15 = &DirectComposition::CCaptureControllerProxy::`vftable';
    goto LABEL_42;
  }
  v9 = v8 - 31;
  if ( !v9 )
    goto LABEL_41;
  v10 = v9 - 8;
  if ( !v10 )
  {
    v15 = &DirectComposition::CEffectGroupProxy::`vftable';
    goto LABEL_42;
  }
  v11 = v10 - 6;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      v15 = &DirectComposition::CGdiSpriteBitmapProxy::`vftable';
      goto LABEL_42;
    }
    v13 = v12 - 15;
    if ( !v13 )
    {
      v15 = &DirectComposition::CHolographicInteropTextureProxy::`vftable';
      goto LABEL_42;
    }
    v14 = v13 - 9;
    if ( !v14 )
    {
      v15 = &DirectComposition::CInteractionProxy::`vftable';
      goto LABEL_42;
    }
    if ( v14 == 20 )
    {
      v15 = &DirectComposition::CMatrixTransformProxy::`vftable';
LABEL_42:
      *(_DWORD *)(a3 + 8) = 1;
      *(_DWORD *)(a3 + 12) = (_DWORD)a4;
      *(_QWORD *)a3 = v15;
      *v6 = (struct IDCompositionGaussianBlurEffect *)a3;
      return 0LL;
    }
LABEL_34:
    v15 = &DirectComposition::CFilterEffectProxy::`vftable';
    goto LABEL_42;
  }
  v29 = 0LL;
  *(_DWORD *)(a3 + 8) = 1;
  *(_DWORD *)(a3 + 12) = (_DWORD)a4;
  *(_QWORD *)a3 = &DirectComposition::CFilterEffectProxy::`vftable';
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v29);
  v16 = DirectComposition::CGaussianBlurEffect::Create((struct DirectComposition::CFilterEffectProxy *)a3, &v29);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v29);
    DirectComposition::CTransformGroupProxy::Release((DirectComposition::CTransformGroupProxy *)a3);
    return v17;
  }
  v19 = v29;
  v29 = 0LL;
  *v6 = v19;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v29);
  DirectComposition::CTransformGroupProxy::Release((DirectComposition::CTransformGroupProxy *)a3);
  return 0LL;
}
