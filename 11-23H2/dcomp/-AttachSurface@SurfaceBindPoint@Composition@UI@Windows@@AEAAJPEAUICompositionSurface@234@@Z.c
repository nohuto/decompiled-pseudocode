/*
 * XREFs of ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z @ 0x180090AD0
 * Callers:
 *     ?SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z @ 0x18004B010 (-SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z.c)
 *     ?SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z @ 0x18007E1B0 (-SetSurface@SurfaceBindPoint@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ??$_Emplace_reallocate@AEBQEAVSurfaceBindPoint@Composition@UI@Windows@@@?$vector@PEAVSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@PEAVSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@QEAAPEAPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAPEAV2345@AEBQEAV2345@@Z @ 0x180081048 (--$_Emplace_reallocate@AEBQEAVSurfaceBindPoint@Composition@UI@Windows@@@-$vector@PEAVSurfaceBind.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ??1?$RefPtr@VConditionalExpressionAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A2030 (--1-$RefPtr@VConditionalExpressionAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x1800A33BC (--4-$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICompos.c)
 *     ??B?$ComPtrRef@V?$RefPtr@VCompositionTexture@Composition@UI@Windows@@@WRL2@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCompositionTexture@Composition@UI@Windows@@XZ @ 0x1800A35F0 (--B-$ComPtrRef@V-$RefPtr@VCompositionTexture@Composition@UI@Windows@@@WRL2@Microsoft@@@Details@W.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?Get@HStringReference@Wrappers@WRL@Microsoft@@QEBAPEAUHSTRING__@@XZ @ 0x1801096F8 (-Get@HStringReference@Wrappers@WRL@Microsoft@@QEBAPEAUHSTRING__@@XZ.c)
 *     ??$?0$0CG@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CG@$$CBG@Z @ 0x180168CD0 (--$-0$0CG@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CG@$$CBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::SurfaceBindPoint::AttachSurface(
        struct Microsoft::WRL2::ContextSession **this,
        struct IUnknown *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v3; // rdi
  Microsoft::WRL2::NestableRuntimeClass *v4; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rsi
  int v7; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // rcx
  int v9; // r15d
  char *v10; // rcx
  _BYTE *v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct Microsoft::WRL2::ContextRuntimeClass **v16; // r14
  Microsoft::WRL::Wrappers::HStringReference *v18; // rax
  HSTRING v19; // rax
  struct Microsoft::WRL2::ContextRuntimeClass *v20; // [rsp+20h] [rbp-50h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v21; // [rsp+28h] [rbp-48h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v24[32]; // [rsp+40h] [rbp-30h] BYREF
  const void *retaddr; // [rsp+A8h] [rbp+38h]

  v3 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v6 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v21);
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         this[1],
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionDrawingSurface::s_InterfaceType,
         &v21);
  v8 = v21;
  v9 = v7;
  if ( v7 >= 0 )
    goto LABEL_2;
  if ( v7 == -2147467262 )
  {
    v12 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            this[1],
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionSwapChain::s_InterfaceType,
            &v20);
    v3 = v20;
    v9 = v12;
    if ( v12 >= 0 )
    {
LABEL_18:
      Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionSurface>::operator=(this + 3, a2);
      Windows::UI::Composition::SurfaceBindPoint::NotifyUnderlyingContentChange((Windows::UI::Composition::SurfaceBindPoint *)this);
      v9 = 0;
      goto LABEL_21;
    }
    if ( v12 == -2147467262 )
    {
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v22);
      v13 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              this[1],
              a2,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionSurfaceWrapper::s_InterfaceType,
              &v20);
      v8 = v20;
      v9 = v13;
      v22 = v20;
      if ( v13 >= 0 )
      {
LABEL_2:
        v10 = (char *)v8 + 128;
        goto LABEL_3;
      }
      if ( v13 == -2147467262 )
      {
        v14 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                this[1],
                a2,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionVirtualDrawingSurface::s_InterfaceType,
                &v20);
        v4 = v20;
        v9 = v14;
        if ( v14 >= 0 )
        {
          v10 = (char *)v20 + 128;
LABEL_3:
          v11 = (_BYTE *)*((_QWORD *)v10 + 1);
          v20 = (struct Microsoft::WRL2::ContextRuntimeClass *)this;
          if ( v11 == *((_BYTE **)v10 + 2) )
          {
            std::vector<Windows::UI::Composition::SurfaceBindPoint *>::_Emplace_reallocate<Windows::UI::Composition::SurfaceBindPoint * const &>(
              (__int64)v10,
              v11,
              &v20);
          }
          else
          {
            *(_QWORD *)v11 = this;
            *((_QWORD *)v10 + 1) += 8LL;
          }
          goto LABEL_18;
        }
        if ( v14 == -2147467262 )
        {
          v15 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                  this[1],
                  a2,
                  (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionVisualSurface::s_InterfaceType,
                  &v20);
          v6 = v20;
          v9 = v15;
          if ( v15 >= 0 )
            goto LABEL_18;
        }
      }
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl) )
  {
    if ( v9 == -2147467262 )
    {
      v20 = (struct Microsoft::WRL2::ContextRuntimeClass *)&v23;
      v16 = (struct Microsoft::WRL2::ContextRuntimeClass **)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionTexture>>::operator Windows::UI::Composition::CompositionTexture * *(&v20);
      v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
             this[1],
             a2,
             (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionTexture::s_InterfaceType,
             &v20);
      *v16 = v20;
      if ( v9 >= 0 )
        goto LABEL_18;
    }
  }
  if ( v9 != -2147483629 )
  {
    if ( v9 == -2147467262 )
    {
      v18 = (Microsoft::WRL::Wrappers::HStringReference *)Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                                            (Microsoft::WRL::Wrappers::HStringReference *)v24,
                                                            (const unsigned __int16 (*)[38])L"Unsupported ICompositionSurface type.");
      v19 = Microsoft::WRL::Wrappers::HStringReference::Get(v18);
      RoOriginateError(2147500034LL, v19);
    }
    Microsoft::WRL2::FailFast::ForHR(v9, retaddr);
  }
  DoStackCaptureDirect(-2147483629, 0x152u);
LABEL_21:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>::~RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>(&v23);
  if ( v6 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v6);
  if ( v4 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v21);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v22);
  if ( v3 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  return (unsigned int)v9;
}
