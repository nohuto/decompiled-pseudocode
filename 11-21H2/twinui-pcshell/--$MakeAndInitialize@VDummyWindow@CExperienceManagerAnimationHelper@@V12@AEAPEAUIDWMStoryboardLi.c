/*
 * XREFs of ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x18006BD84
 * Callers:
 *     ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x18006BD4C (-RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@.c)
 * Callees:
 *     ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x18006BE2C (-RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardLi.c)
 *     ??0DummyWindow@CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18006C39C (--0DummyWindow@CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopHotkeyHandlerPrivate@@UIVirtualDesktopHotkeyHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE220 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1800EE220.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExperienceManagerAnimationHelper::DummyWindow,CExperienceManagerAnimationHelper::DummyWindow,IDWMStoryboardListener * &>(
        __int64 *a1,
        struct IDWMStoryboardListener **a2)
{
  CExperienceManagerAnimationHelper::DummyWindow *v4; // rax
  __int64 v5; // rbx
  volatile int *v6; // rdx
  int v7; // esi

  *a1 = 0LL;
  v4 = (CExperienceManagerAnimationHelper::DummyWindow *)operator new(
                                                           0x28uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = CExperienceManagerAnimationHelper::DummyWindow::DummyWindow(v4);
    v7 = CExperienceManagerAnimationHelper::DummyWindow::RuntimeClassInitialize(
           (CExperienceManagerAnimationHelper::DummyWindow *)v5,
           *a2);
    if ( v7 >= 0 )
    {
      if ( v5 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), v6);
      *a1 = v5;
      v7 = 0;
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopHotkeyHandlerPrivate,IVirtualDesktopHotkeyHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
