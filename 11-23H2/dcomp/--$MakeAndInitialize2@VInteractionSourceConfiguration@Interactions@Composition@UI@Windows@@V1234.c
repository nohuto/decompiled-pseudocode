/*
 * XREFs of ??$MakeAndInitialize2@VInteractionSourceConfiguration@Interactions@Composition@UI@Windows@@V12345@PEAVCompositor@345@PEAVVisualInteractionSource@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVInteractionSourceConfiguration@Interactions@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAPEAVVisualInteractionSource@4567@@Z @ 0x18011C4C8
 * Callers:
 *     ?GetPointerWheelConfig@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAPEAVInteractionSourceConfiguration@2345@@Z @ 0x18011D994 (-GetPointerWheelConfig@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAPEAV.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVVisualInteractionSource@2345@@Z @ 0x180161F04 (-RuntimeClassInitialize@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@QEAA.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Interactions::InteractionSourceConfiguration,Windows::UI::Composition::Interactions::InteractionSourceConfiguration,Windows::UI::Composition::Compositor *,Windows::UI::Composition::Interactions::VisualInteractionSource *>(
        Windows::UI::Composition::CompositionObject **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct Windows::UI::Composition::Interactions::VisualInteractionSource **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::CompositionObject *v8; // rax
  Windows::UI::Composition::CompositionObject *v9; // rbx
  struct Windows::UI::Composition::Interactions::VisualInteractionSource *v10; // r8
  struct Windows::UI::Composition::Compositor *v11; // rdx
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0xA8uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::CompositionObject *)memset_0(v6, 0, 0xA8uLL);
  v9 = v8;
  if ( v8 )
  {
    Windows::UI::Composition::CompositionObject::CompositionObject(v8);
    *(_QWORD *)v9 = &Windows::UI::Composition::Interactions::InteractionSourceConfiguration::`vftable';
    *((_QWORD *)v9 + 16) = &Windows::UI::Composition::Interactions::InteractionSourceConfiguration::Api::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  v13 = 0LL;
  *((_QWORD *)v9 + 1) = &Windows::UI::Composition::Interactions::InteractionSourceConfiguration::s_InterfaceType;
  v10 = *a3;
  v11 = *a2;
  v14 = v9;
  v7 = Windows::UI::Composition::Interactions::InteractionSourceConfiguration::RuntimeClassInitialize(v9, v11, v10);
  if ( v7 < 0 )
    goto LABEL_7;
  *a1 = v9;
  return 0LL;
}
