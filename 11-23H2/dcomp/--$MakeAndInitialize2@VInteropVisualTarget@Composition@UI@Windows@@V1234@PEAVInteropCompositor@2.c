/*
 * XREFs of ??$MakeAndInitialize2@VInteropVisualTarget@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualTarget@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEAPEAX@Z @ 0x18005DC8C
 * Callers:
 *     ?OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x18002B2B0 (-OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x18005D944 (-RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z.c)
 *     ??0InteropVisualTarget@Composition@UI@Windows@@QEAA@XZ @ 0x18005DD30 (--0InteropVisualTarget@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropVisualTarget,Windows::UI::Composition::InteropCompositor *,void * &>(
        Windows::UI::Composition::VisualTarget **a1,
        DirectComposition::CDevice ***a2,
        void **a3)
{
  void *v6; // rax
  Windows::UI::Composition::InteropVisualTarget *v7; // rax
  Windows::UI::Composition::VisualTarget *v8; // rbx
  void *v9; // r8
  DirectComposition::CDevice **v10; // rdx
  int v11; // edi
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::VisualTarget *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0xC8uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::InteropVisualTarget *)memset_0(v6, 0, 0xC8uLL);
    if ( v7 )
      v8 = (Windows::UI::Composition::VisualTarget *)Windows::UI::Composition::InteropVisualTarget::InteropVisualTarget(v7);
    else
      v8 = 0LL;
    v13 = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::InteropVisualTarget::s_InterfaceType;
    v9 = *a3;
    v10 = *a2;
    v14 = v8;
    v11 = Windows::UI::Composition::VisualTarget::RuntimeClassInitialize(v8, v10, v9);
    if ( v11 >= 0 )
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
  return (unsigned int)v11;
}
