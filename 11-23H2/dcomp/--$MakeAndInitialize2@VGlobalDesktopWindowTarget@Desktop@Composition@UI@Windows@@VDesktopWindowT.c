/*
 * XREFs of ??$MakeAndInitialize2@VGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@VDesktopWindowTarget@2345@AEAPEAVCompositor@345@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Details@WRL2@Microsoft@@YAJPEAPEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@AEAPEAVCompositor@567@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Z @ 0x180085020
 * Callers:
 *     ?CreateDesktopWindowTarget@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPEAUIDesktopWindowTarget@Desktop@345@@Z @ 0x18008A990 (-CreateDesktopWindowTarget@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPE.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAUHWND__@@W4_HwndTargetType@@@Z @ 0x1800850F0 (-RuntimeClassInitialize@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition.c)
 *     ??0DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAA@XZ @ 0x1800852D8 (--0DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Desktop::GlobalDesktopWindowTarget,Windows::UI::Composition::Desktop::DesktopWindowTarget,Windows::UI::Composition::Compositor * &,HWND__ * &,enum _HwndTargetType &>(
        Windows::UI::Composition::Desktop::DesktopWindowTarget **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::Desktop::DesktopWindowTarget *v5; // rax
  Windows::UI::Composition::Desktop::DesktopWindowTarget *v6; // rbx
  struct Windows::UI::Composition::Compositor *v7; // rdx
  int v8; // edi
  Windows::UI::Composition::Desktop::DesktopWindowTarget *v10; // [rsp+20h] [rbp-28h] BYREF
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0xE8uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::Desktop::DesktopWindowTarget *)memset_0(v4, 0, 0xE8uLL);
    v6 = v5;
    if ( v5 )
    {
      Windows::UI::Composition::Desktop::DesktopWindowTarget::DesktopWindowTarget(v5);
      *((_QWORD *)v6 + 27) = 0LL;
      *((_QWORD *)v6 + 28) = 0LL;
      *(_QWORD *)v6 = &Windows::UI::Composition::Desktop::GlobalDesktopWindowTarget::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    v11 = 0LL;
    *((_QWORD *)v6 + 1) = &Windows::UI::Composition::Desktop::DesktopWindowTarget::s_InterfaceType;
    v7 = *a2;
    v10 = v6;
    v8 = Windows::UI::Composition::Desktop::GlobalDesktopWindowTargetImpl<Windows::UI::Composition::Desktop::DesktopWindowTarget>::RuntimeClassInitialize(
           v6,
           v7);
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
