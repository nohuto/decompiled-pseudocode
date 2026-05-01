/*
 * XREFs of ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1802D0518
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x1800142B0 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@W4ClassicWindowCreationOptions@@W4CLASSIC_WINDOW_ENSURE_REASONS@@@Z @ 0x1800D34D0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x1803A84C0 (CClassicWindowManager--ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___.c)
 * Callees:
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180161A30 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 */

__int64 __fastcall CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        int a3)
{
  char v6; // al

  v6 = CClassicWindowManager::IsWindowPseudoTrayAfterChange((__int64)a1, (__int64)a2, a3);
  return CClassicWindowManager::_ChangeWindowType(a1, a2, a3 | (v6 != 0 ? 32 : 64));
}
