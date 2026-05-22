/*
 * XREFs of ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@@Z @ 0x180085A44
 * Callers:
 *     ?CreateSharedResource@InteropCompositor@Composition@UI@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CA74 (-CreateSharedResource@InteropCompositor@Composition@UI@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x18005D944 (-RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z.c)
 *     ??0InteropVisualTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18005DD30 (--0InteropVisualTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VInteropVisualTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVisualTarget@Composition@UI@Windows@@@Z @ 0x180085AF0 (-Attach@-$ComPtr@VInteropVisualTarget@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVInteropVi.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropCompositor *>(
        Windows::UI::Composition::VisualTarget **a1,
        DirectComposition::CDevice ***a2)
{
  void *v4; // rax
  Windows::UI::Composition::InteropVisualTarget *v5; // rax
  Windows::UI::Composition::VisualTarget *v6; // rbx
  Windows::UI::Composition::VisualTarget *v7; // rcx
  int v8; // edi
  Windows::UI::Composition::VisualTarget *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0xC8uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::InteropVisualTarget *)memset_0(v4, 0, 0xC8uLL);
    if ( v5 )
      v5 = Windows::UI::Composition::InteropVisualTarget::InteropVisualTarget(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropVisualTarget>::Attach(&v10, v5);
    v6 = v10;
    v11 = 0LL;
    v7 = v10;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::InteropVisualTarget::s_InterfaceType;
    v8 = Windows::UI::Composition::VisualTarget::RuntimeClassInitialize(v7, *a2, 0LL);
    if ( v8 >= 0 )
    {
      *a1 = v6;
      return 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
  return (unsigned int)v8;
}
