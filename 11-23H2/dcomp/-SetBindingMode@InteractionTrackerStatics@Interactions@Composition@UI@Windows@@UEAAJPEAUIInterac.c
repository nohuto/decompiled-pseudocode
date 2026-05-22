/*
 * XREFs of ?SetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInteractionTracker@2345@0W4InteractionBindingAxisModes@2345@@Z @ 0x18013AA10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@PEAPEAV123@@Z @ 0x18006BB3C (-ValidateInterface@NestableRuntimeClass@WRL2@Microsoft@@SAJPEAUIUnknown@@PEBUInterfaceType@123@P.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractionTrackerBindingManager@Interactions@234@XZ @ 0x1801280F0 (-GetInteractionTrackerBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVInteractio.c)
 *     ??4?$RefPtr@VInteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAAAEAV012@PEAVInteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@@Z @ 0x1801364F4 (--4-$RefPtr@VInteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@@WRL2@Microso.c)
 *     ?SetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAJIIW4InteractionBindingAxisModes@2345@@Z @ 0x180187BFC (-SetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEA.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerStatics::SetBindingMode(
        __int64 a1,
        struct IUnknown *a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  unsigned int *v5; // rbx
  unsigned int v8; // edi
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  struct _RTL_CRITICAL_SECTION *v10; // r14
  int v12; // eax
  unsigned int *v13; // r13
  unsigned int v14; // esi
  int v15; // eax
  Microsoft::WRL2::NestableRuntimeClass *InteractionTrackerBindingManager; // rax
  unsigned int v17; // edx
  unsigned int *v18; // r15
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+20h] [rbp-20h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v20; // [rsp+28h] [rbp-18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v21[2]; // [rsp+30h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v22; // [rsp+78h] [rbp+38h] BYREF

  v21[0] = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  if ( !a2 )
  {
    v8 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v19);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v22);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v20);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v21);
    return v8;
  }
  v8 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v19);
  if ( v8 )
    goto LABEL_6;
  v9 = v19;
  v10 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v19 + 3);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v10);
  if ( (*((_BYTE *)v9 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry(v10);
    goto LABEL_6;
  }
  v12 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          (struct Microsoft::WRL2::ContextSession *)v10,
          a2,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Interactions::InteractionTracker::s_InterfaceType,
          v21);
  v13 = (unsigned int *)v21[0];
  v14 = v12;
  if ( v12 < 0 )
  {
    DoStackCaptureDirect(v12, 0xDB4u);
    v18 = 0LL;
    goto LABEL_16;
  }
  v15 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          (struct Microsoft::WRL2::ContextSession *)v10,
          a3,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Interactions::InteractionTracker::s_InterfaceType,
          v21);
  v5 = (unsigned int *)v21[0];
  v14 = v15;
  if ( v15 < 0 )
  {
    v17 = 3513;
    goto LABEL_13;
  }
  InteractionTrackerBindingManager = Windows::UI::Composition::CompositorCommon::GetInteractionTrackerBindingManager((Windows::UI::Composition::CompositorCommon *)v10);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager>::operator=(
    &v22,
    InteractionTrackerBindingManager);
  v15 = Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::SetTrackerBindingMode(
          v22,
          v13[32],
          v5[32],
          a4);
  v14 = v15;
  if ( v15 < 0 )
  {
    v17 = 3519;
LABEL_13:
    DoStackCaptureDirect(v15, v17);
    goto LABEL_14;
  }
  v14 = 0;
LABEL_14:
  v18 = v5;
LABEL_16:
  Microsoft::WRL2::ContextSession::EndApiEntry(v10);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v22);
  if ( v18 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v5);
  if ( v13 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v13);
  return v14;
}
