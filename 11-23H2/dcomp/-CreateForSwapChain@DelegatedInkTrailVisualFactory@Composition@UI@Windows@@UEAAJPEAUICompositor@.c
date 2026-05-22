/*
 * XREFs of ?CreateForSwapChain@DelegatedInkTrailVisualFactory@Composition@UI@Windows@@UEAAJPEAUICompositor@234@PEAUICompositionSurface@234@PEAPEAUIDelegatedInkTrailVisual@234@@Z @ 0x18011B460
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVCompositionSwapChain@234@@Details@WRL2@Microsoft@@YAJPEAPEAVDelegatedInkTrailVisual@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVCompositionSwapChain@456@@Z @ 0x18011AED4 (--$MakeAndInitialize2@VDelegatedInkTrailVisual@Composition@UI@Windows@@V1234@AEAPEAVCompositor@2.c)
 */

__int64 __fastcall Windows::UI::Composition::DelegatedInkTrailVisualFactory::CreateForSwapChain(
        Windows::UI::Composition::DelegatedInkTrailVisualFactory *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        struct Windows::UI::Composition::IDelegatedInkTrailVisual **a4)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rdi
  unsigned int v7; // esi
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  int v9; // eax
  Microsoft::WRL2::NestableRuntimeClass *v10; // r14
  int v11; // eax
  Microsoft::WRL2::NestableRuntimeClass *v13[2]; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+68h] [rbp+38h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v15; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  v13[0] = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( !a2 )
  {
    v7 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return v7;
  }
  v7 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextSession::s_InterfaceType,
         &v15);
  if ( v7 )
    goto LABEL_6;
  v8 = v15;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v15);
  if ( (*((_BYTE *)v8 + 32) & 2) == 0 )
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v8);
    goto LABEL_6;
  }
  v13[0] = v8;
  v9 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v8,
         a3,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionSwapChain::s_InterfaceType,
         &v15);
  v10 = v15;
  v7 = v9;
  if ( v9 < 0 )
  {
    DoStackCaptureDirect(v9, 0xABu);
  }
  else
  {
    v11 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::DelegatedInkTrailVisual,Windows::UI::Composition::DelegatedInkTrailVisual,Windows::UI::Composition::Compositor * &,Windows::UI::Composition::CompositionSwapChain *>(
            &v14,
            v13,
            &v15);
    v7 = v11;
    if ( v11 < 0 )
    {
      DoStackCaptureDirect(v11, 0xB0u);
      v4 = v14;
    }
    else
    {
      *a4 = (struct Windows::UI::Composition::IDelegatedInkTrailVisual *)(((unsigned __int64)v14 + 296) & -(__int64)(v14 != 0LL));
      v7 = 0;
    }
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v8);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  if ( v10 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
  if ( v4 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  return v7;
}
