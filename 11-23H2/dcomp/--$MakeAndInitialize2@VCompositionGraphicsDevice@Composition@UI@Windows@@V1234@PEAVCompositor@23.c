/*
 * XREFs of ??$MakeAndInitialize2@VCompositionGraphicsDevice@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUIUnknown@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionGraphicsDevice@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUIUnknown@@@Z @ 0x18006569C
 * Callers:
 *     ?CreateGraphicsDevice@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUICompositionGraphicsDevice@345@@Z @ 0x180065610 (-CreateGraphicsDevice@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUIC.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIUnknown@@@Z @ 0x180064968 (-RuntimeClassInitialize@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ??0CompositionGraphicsDevice@Composition@UI@Windows@@QEAA@XZ @ 0x180065740 (--0CompositionGraphicsDevice@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::CompositionGraphicsDevice,Windows::UI::Composition::Compositor *,IUnknown * &>(
        Windows::UI::Composition::CompositionGraphicsDevice **a1,
        struct Windows::UI::Composition::Compositor **a2,
        struct IUnknown **a3)
{
  void *v6; // rax
  Windows::UI::Composition::CompositionGraphicsDevice *v7; // rax
  Windows::UI::Composition::CompositionGraphicsDevice *v8; // rbx
  struct IUnknown *v9; // r8
  struct Windows::UI::Composition::Compositor *v10; // rdx
  int v11; // edi
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::CompositionGraphicsDevice *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0x120uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::CompositionGraphicsDevice *)memset_0(v6, 0, 0x120uLL);
    if ( v7 )
      v8 = (Windows::UI::Composition::CompositionGraphicsDevice *)Windows::UI::Composition::CompositionGraphicsDevice::CompositionGraphicsDevice(v7);
    else
      v8 = 0LL;
    v13 = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::CompositionGraphicsDevice::s_InterfaceType;
    v9 = *a3;
    v10 = *a2;
    v14 = v8;
    v11 = Windows::UI::Composition::CompositionGraphicsDevice::RuntimeClassInitialize(v8, v10, v9);
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
