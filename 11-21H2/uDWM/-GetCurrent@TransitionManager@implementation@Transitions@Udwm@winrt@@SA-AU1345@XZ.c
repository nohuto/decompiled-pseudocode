/*
 * XREFs of ?GetCurrent@TransitionManager@implementation@Transitions@Udwm@winrt@@SA?AU1345@XZ @ 0x1800420E4
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180021CF0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180040370 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180053924 (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180101700 (--1CWindowList@@UEAA@XZ.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x180104448 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x180104870 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180105E24 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@AEAAXXZ @ 0x180007AB4 (-unconditional_release_ref@-$com_ptr@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@wi.c)
 *     ??$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA?AUTransitionManager@Transitions@Udwm@1@PEAU2implementation@341@@Z @ 0x18004216C (--$as@UTransitionManager@Transitions@Udwm@winrt@@U1implementation@234@$0A@@impl@winrt@@YA-AUTran.c)
 *     ??$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AU?$com_ptr@UTransitionManager@implementation@Transitions@Udwm@winrt@@@0@XZ @ 0x18005C194 (--$make_self@UTransitionManager@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-AU-$com_ptr.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::GetCurrent(__int64 a1)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  if ( !winrt::Udwm::Transitions::implementation::TransitionManager::m_instance )
  {
    v3 = (__int64 *)winrt::make_self<winrt::Udwm::Transitions::implementation::TransitionManager,>(&v5);
    if ( &winrt::Udwm::Transitions::implementation::TransitionManager::m_instance != v3 )
    {
      if ( winrt::Udwm::Transitions::implementation::TransitionManager::m_instance )
        winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::unconditional_release_ref(&winrt::Udwm::Transitions::implementation::TransitionManager::m_instance);
      v4 = *v3;
      *v3 = 0LL;
      winrt::Udwm::Transitions::implementation::TransitionManager::m_instance = v4;
    }
    if ( v5 )
      winrt::com_ptr<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>::unconditional_release_ref(&v5);
  }
  winrt::impl::as<winrt::Udwm::Transitions::TransitionManager,winrt::Udwm::Transitions::implementation::TransitionManager,0>(
    a1,
    winrt::Udwm::Transitions::implementation::TransitionManager::m_instance);
  return a1;
}
