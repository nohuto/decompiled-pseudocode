/*
 * XREFs of ??$MakeAndInitialize2@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAX@Z @ 0x1801217D4
 * Callers:
 *     ?OpenSharedWriteCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAVSharedWriteCaptureController@Internal@234@@Z @ 0x180128E94 (-OpenSharedWriteCaptureControllerFromHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPE.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x180122C3C (--0SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVSharedWriteCaptureController@Internal@Composition@UI@Windows@@@Z @ 0x180124ABC (-Attach@-$ComPtr@VSharedWriteCaptureController@Internal@Composition@UI@Windows@@@WRL@Microsoft@@.c)
 *     ?RuntimeClassInitialize@SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAX@Z @ 0x180182880 (-RuntimeClassInitialize@SharedWriteCaptureController@Internal@Composition@UI@Windows@@QEAAJPEAVC.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Internal::SharedWriteCaptureController,Windows::UI::Composition::Compositor *,void * &>(
        Windows::UI::Composition::Internal::SharedWriteCaptureController **a1,
        struct Windows::UI::Composition::Compositor **a2,
        void **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Internal::SharedWriteCaptureController *v8; // rax
  Windows::UI::Composition::Internal::SharedWriteCaptureController *v9; // rbx
  Windows::UI::Composition::Internal::SharedWriteCaptureController *v10; // rcx
  Windows::UI::Composition::Internal::SharedWriteCaptureController *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0xD0uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Internal::SharedWriteCaptureController *)memset_0(v6, 0, 0xD0uLL);
  if ( v8 )
    v8 = (Windows::UI::Composition::Internal::SharedWriteCaptureController *)Windows::UI::Composition::Internal::SharedWriteCaptureController::SharedWriteCaptureController(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Internal::SharedWriteCaptureController>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::Internal::SharedWriteCaptureController::s_InterfaceType;
  v7 = Windows::UI::Composition::Internal::SharedWriteCaptureController::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
