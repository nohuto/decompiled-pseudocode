/*
 * XREFs of ??$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQueue@System@5@AEAPEAUICoreWindow@245@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositorController@Core@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@7@AEAPEAUICoreWindow@467@@Z @ 0x18012C980
 * Callers:
 *     ?CreateForCoreWindow@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAUICoreWindow@245@PEAPEAUICompositorController@2345@@Z @ 0x18012CAF0 (-CreateForCoreWindow@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAUICoreWind.c)
 * Callees:
 *     ?Attach@?$ComPtr@VCompositorController@Core@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositorController@Core@Composition@UI@Windows@@@Z @ 0x18003C824 (-Attach@-$ComPtr@VCompositorController@Core@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCom.c)
 *     ??0CompositorController@Core@Composition@UI@Windows@@QEAA@XZ @ 0x18003C904 (--0CompositorController@Core@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@5@PEAUICoreWindow@245@@Z @ 0x18003C96C (-RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQu.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Core::CompositorController,Windows::UI::Composition::Core::CompositorController,Windows::System::IDispatcherQueue *,Windows::UI::Core::ICoreWindow * &>(
        Windows::UI::Composition::Core::CompositorController **a1,
        struct Windows::System::IDispatcherQueue **a2,
        struct Windows::UI::Core::ICoreWindow **a3)
{
  void *v6; // rax
  int v7; // edi
  RTL_SRWLOCK *v8; // rax
  Windows::UI::Composition::Core::CompositorController *v9; // rbx
  Windows::UI::Composition::Core::CompositorController *v10; // rcx
  Windows::UI::Composition::Core::CompositorController *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0x68uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (RTL_SRWLOCK *)memset_0(v6, 0, 0x68uLL);
  if ( v8 )
    v8 = Windows::UI::Composition::Core::CompositorController::CompositorController(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Core::CompositorController>::Attach(
    &v12,
    (Microsoft::WRL2::NestableRuntimeClass *)v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::Core::CompositorController::s_InterfaceType;
  v7 = Windows::UI::Composition::Core::CompositorController::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
