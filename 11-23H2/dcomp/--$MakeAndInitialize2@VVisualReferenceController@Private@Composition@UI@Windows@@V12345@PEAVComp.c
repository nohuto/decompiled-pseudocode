/*
 * XREFs of ??$MakeAndInitialize2@VVisualReferenceController@Private@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReferenceController@Private@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x1801220A4
 * Callers:
 *     ?CreateVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVVisualReferenceController@Private@234@@Z @ 0x180127AD8 (-CreateVisualReferenceController@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PE.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ @ 0x180122D6C (--0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVisualReferenceController@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualReferenceController@Private@Composition@UI@Windows@@@Z @ 0x180124B24 (-Attach@-$ComPtr@VVisualReferenceController@Private@Composition@UI@Windows@@@WRL@Microsoft@@QEAA.c)
 *     ?RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_N@Z @ 0x18016F474 (-RuntimeClassInitialize@VisualReferenceController@Private@Composition@UI@Windows@@QEAAJPEAVCompo.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Private::VisualReferenceController,Windows::UI::Composition::Private::VisualReferenceController,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::Private::VisualReferenceController **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::Private::VisualReferenceController *v6; // rax
  Windows::UI::Composition::Private::VisualReferenceController *v7; // rbx
  Windows::UI::Composition::Private::VisualReferenceController *v8; // rcx
  Windows::UI::Composition::Private::VisualReferenceController *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0xB0uLL);
  v11 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::Private::VisualReferenceController *)memset_0(v4, 0, 0xB0uLL);
  if ( v6 )
    v6 = (Windows::UI::Composition::Private::VisualReferenceController *)Windows::UI::Composition::Private::VisualReferenceController::VisualReferenceController(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Private::VisualReferenceController>::Attach(&v10, v6);
  v7 = v10;
  v11 = 0LL;
  v8 = v10;
  *((_QWORD *)v10 + 1) = &Windows::UI::Composition::Private::VisualReferenceController::s_InterfaceType;
  v5 = Windows::UI::Composition::Private::VisualReferenceController::RuntimeClassInitialize(v8, *a2, 0);
  if ( v5 < 0 )
    goto LABEL_6;
  *a1 = v7;
  return 0LL;
}
