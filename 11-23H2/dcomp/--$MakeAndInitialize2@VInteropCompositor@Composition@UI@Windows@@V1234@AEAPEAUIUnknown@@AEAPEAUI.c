/*
 * XREFs of ??$MakeAndInitialize2@VInteropCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCompositor@Composition@UI@Windows@@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@456@@Z @ 0x18003DBC4
 * Callers:
 *     ?CreateInteropCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@AEBU_GUID@@PEAPEAX@Z @ 0x18003DB10 (-CreateInteropCompositor@CompositorFactory@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAUIInter.c)
 * Callees:
 *     ?RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18003DA04 (-RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIIntero.c)
 *     ??0InteropCompositor@Composition@UI@Windows@@QEAA@XZ @ 0x18003DC70 (--0InteropCompositor@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropCompositor,Windows::UI::Composition::InteropCompositor,IUnknown * &,Windows::UI::Composition::IInteropCompositorPartnerCallback * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  void *v6; // rax
  Windows::UI::Composition::InteropCompositor *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // edi
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0x508uLL);
  v13 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::InteropCompositor *)memset_0(v6, 0, 0x508uLL);
    if ( v7 )
      v8 = Windows::UI::Composition::InteropCompositor::InteropCompositor(v7);
    else
      v8 = 0LL;
    v13 = 0LL;
    *(_QWORD *)(v8 + 8) = &Windows::UI::Composition::InteropCompositor::s_InterfaceType;
    v9 = *a3;
    v10 = *a2;
    v14 = v8;
    v11 = Windows::UI::Composition::InteropCompositor::RuntimeClassInitialize(v8, v10, v9);
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
