/*
 * XREFs of ??$MakeAndInitialize2@VVisualTarget@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTarget@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180122228
 * Callers:
 *     ?CreateSharedTarget@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisualTarget@234@@Z @ 0x180126CEC (-CreateSharedTarget@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVVisualTarget@234@@Z.c)
 * Callees:
 *     ?Attach@?$ComPtr@VVisualTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualTarget@Composition@UI@Windows@@@Z @ 0x18000B5CC (-Attach@-$ComPtr@VVisualTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVVisualTarget@Com.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x18005D944 (-RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z.c)
 *     ??0VisualTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18005DD68 (--0VisualTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualTarget,Windows::UI::Composition::VisualTarget,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::VisualTarget **a1,
        DirectComposition::CDevice ***a2)
{
  void *v4; // rax
  int v5; // edi
  Windows::UI::Composition::VisualTarget *v6; // rax
  Windows::UI::Composition::VisualTarget *v7; // rbx
  Windows::UI::Composition::VisualTarget *v8; // rcx
  Windows::UI::Composition::VisualTarget *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0xB8uLL);
  v11 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
    return (unsigned int)v5;
  }
  v6 = (Windows::UI::Composition::VisualTarget *)memset_0(v4, 0, 0xB8uLL);
  if ( v6 )
    v6 = Windows::UI::Composition::VisualTarget::VisualTarget(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::VisualTarget>::Attach(&v10, v6);
  v7 = v10;
  v11 = 0LL;
  v8 = v10;
  *((_QWORD *)v10 + 1) = &Windows::UI::Composition::VisualTarget::s_InterfaceType;
  v5 = Windows::UI::Composition::VisualTarget::RuntimeClassInitialize(v8, *a2, 0LL);
  if ( v5 < 0 )
    goto LABEL_6;
  *a1 = v7;
  return 0LL;
}
