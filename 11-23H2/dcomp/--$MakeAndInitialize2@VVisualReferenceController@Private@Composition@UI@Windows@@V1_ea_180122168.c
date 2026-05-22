/*
 * XREFs of ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@_N@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEA_N@Z @ 0x180122168
 * Callers:
 *     ?CreateSharedVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z @ 0x18012702C (-CreateSharedVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ @ 0x180122D6C (--0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVisualReferenceController@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualReferenceController@Private@Composition@UI@Windows@@@Z @ 0x180124B24 (-Attach@-$ComPtr@VVisualReferenceController@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEAA.c)
 *     ?RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_N@Z @ 0x18016F474 (-RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompo.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::VisualReferenceController,Windows::UI::Composition::Private::VisualReferenceController,Windows::UI::Composition::Compositor *,bool>(
        Windows::UI::Composition::Private::VisualReferenceController **a1,
        struct Windows::UI::Composition::Compositor **a2,
        bool *a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::Private::VisualReferenceController *v8; // rax
  Windows::UI::Composition::Private::VisualReferenceController *v9; // rbx
  Windows::UI::Composition::Private::VisualReferenceController *v10; // rcx
  Windows::UI::Composition::Private::VisualReferenceController *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0xB0uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::Private::VisualReferenceController *)memset_0(v6, 0, 0xB0uLL);
  if ( v8 )
    v8 = (Windows::UI::Composition::Private::VisualReferenceController *)Windows::UI::Composition::Private::VisualReferenceController::VisualReferenceController(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Private::VisualReferenceController>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::Private::VisualReferenceController::s_InterfaceType;
  v7 = Windows::UI::Composition::Private::VisualReferenceController::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
