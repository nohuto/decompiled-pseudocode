/*
 * XREFs of ??1?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x18034C720
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExperienceManagerAnimationHelper::DummyWindow_CExperienceManagerAnimationHelper::DummyWindow_IDWMStoryboardListener___&__::_1_::dtor$2 @ 0x180217ED2 (_Microsoft--WRL--Details--MakeAndInitialize_CExperienceManagerAnimationHelper--Dumm_ea_180217ED2.c)
 *     _CWRLImpWndProc_CExperienceManagerAnimationHelper::DummyWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x180220B6C (_CWRLImpWndProc_CExperienceManagerAnimationHelper--DummyWindow_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopHotkeyHandlerPrivate@@UIVirtualDesktopHotkeyHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE220 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1800EE220.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::~ComPtr<CExperienceManagerAnimationHelper::DummyWindow>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopHotkeyHandlerPrivate,IVirtualDesktopHotkeyHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
             result,
             a2);
  }
  return result;
}
