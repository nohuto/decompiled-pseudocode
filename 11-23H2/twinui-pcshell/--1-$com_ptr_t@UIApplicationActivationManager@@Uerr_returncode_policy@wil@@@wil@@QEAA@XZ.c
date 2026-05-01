/*
 * XREFs of ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802114B8
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 *     ?InitializePositionForSnapActivation@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x180211830 (-InitializePositionForSnapActivation@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnk.c)
 *     _ShellPositionerManager::InitializePositionForSnapActivation_::_1_::dtor$3 @ 0x180211A9A (_ShellPositionerManager--InitializePositionForSnapActivation_--_1_--dtor$3.c)
 *     ?Update@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z @ 0x18022E1A0 (-Update@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?InvokeCopilot@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264704 (-InvokeCopilot@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     _CopilotHotkeyManager::InvokeCopilot_::_1_::dtor$4 @ 0x18026487B (_CopilotHotkeyManager--InvokeCopilot_--_1_--dtor$4.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     _CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor$12 @ 0x1802652ED (_CopilotHotkeyManager--InvokeCopilotOrCustomOption_--_1_--dtor$12.c)
 *     _CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor$20 @ 0x180265329 (_CopilotHotkeyManager--InvokeCopilotOrCustomOption_--_1_--dtor$20.c)
 *     _GetPidlsFromTaskbarLayout_::_1_::dtor$24 @ 0x1802C5232 (_GetPidlsFromTaskbarLayout_--_1_--dtor$24.c)
 *     _CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor$9 @ 0x1806FD60C (_CopilotHotkeyManager--CopilotHotkeyManager_--_1_--dtor$9.c)
 *     _CopilotHotkeyManager::CopilotHotkeyManager_::_1_::dtor$10 @ 0x1806FD61F (_CopilotHotkeyManager--CopilotHotkeyManager_--_1_--dtor$10.c)
 *     ??1?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ @ 0x1806FD638 (--1-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@UEAA@XZ.c)
 *     ??1CopilotHotkeyManager@@UEAA@XZ @ 0x1806FD730 (--1CopilotHotkeyManager@@UEAA@XZ.c)
 *     ??_ECopilotHotkeyManager@@UEAAPEAXI@Z @ 0x1806FD7F4 (--_ECopilotHotkeyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
