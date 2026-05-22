/*
 * XREFs of ?GetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInteractionTracker@2345@0PEAW4InteractionBindingAxisModes@2345@@Z @ 0x180139080
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
 *     ?GetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAJIIPEAW4InteractionBindingAxisModes@2345@@Z @ 0x180187AA0 (-GetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEA.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTrackerStatics::GetBindingMode(
        Windows::UI::Composition::Interactions::InteractionTrackerStatics *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        enum Windows::UI::Composition::Interactions::InteractionBindingAxisModes *a4)
{
  unsigned int *v5; // rbx
  unsigned int v8; // edi
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  struct _RTL_CRITICAL_SECTION *v10; // r14
  int v12; // eax
  unsigned int *v13; // r13
  unsigned int v14; // esi
  int TrackerBindingMode; // eax
  Microsoft::WRL2::NestableRuntimeClass *InteractionTrackerBindingManager; // rax
  unsigned int v17; // edx
  unsigned int *v18; // r15
  Microsoft::WRL2::NestableRuntimeClass *v19; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v20; // [rsp+28h] [rbp-8h] BYREF
  Windows::UI::Composition::Interactions::InteractionTrackerBindingManager *v21; // [rsp+78h] [rbp+48h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v22; // [rsp+88h] [rbp+58h] BYREF

  *(_DWORD *)a4 = 0;
  v5 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( !a2 )
  {
    v8 = -2147024809;
    RoOriginateErrorW(2147942487LL, 0LL, L"The caller must specify a non-null, non-closed / disposed object.");
LABEL_6:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v22);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v21);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v19);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v20);
    return v8;
  }
  v8 = Microsoft::WRL2::NestableRuntimeClass::ValidateInterface(
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Microsoft::WRL2::ContextRuntimeClass::s_InterfaceType,
         &v22);
  if ( v8 )
    goto LABEL_6;
  v9 = v22;
  v10 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v22 + 3);
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
          &v22);
  v13 = (unsigned int *)v22;
  v14 = v12;
  if ( v12 < 0 )
  {
    DoStackCaptureDirect(v12, 0xDD8u);
    v18 = 0LL;
    goto LABEL_16;
  }
  TrackerBindingMode = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                         (struct Microsoft::WRL2::ContextSession *)v10,
                         a3,
                         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Interactions::InteractionTracker::s_InterfaceType,
                         &v22);
  v5 = (unsigned int *)v22;
  v14 = TrackerBindingMode;
  if ( TrackerBindingMode < 0 )
  {
    v17 = 3549;
    goto LABEL_13;
  }
  InteractionTrackerBindingManager = Windows::UI::Composition::CompositorCommon::GetInteractionTrackerBindingManager((Windows::UI::Composition::CompositorCommon *)v10);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager>::operator=(
    &v21,
    InteractionTrackerBindingManager);
  TrackerBindingMode = Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::GetTrackerBindingMode(
                         v21,
                         v13[32],
                         v5[32],
                         a4);
  v14 = TrackerBindingMode;
  if ( TrackerBindingMode < 0 )
  {
    v17 = 3555;
LABEL_13:
    DoStackCaptureDirect(TrackerBindingMode, v17);
    goto LABEL_14;
  }
  v14 = 0;
LABEL_14:
  v18 = v5;
LABEL_16:
  Microsoft::WRL2::ContextSession::EndApiEntry(v10);
  Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v21);
  if ( v18 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v5);
  if ( v13 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)v13);
  return v14;
}
