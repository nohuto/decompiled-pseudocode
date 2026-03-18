/*
 * XREFs of ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00C09DC
 * Callers:
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C0017A50 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     _lambda_a4faeffec317e94db02d9bdb76d95fff_::operator() @ 0x1C0018E5C (_lambda_a4faeffec317e94db02d9bdb76d95fff_--operator().c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002678C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z @ 0x1C00AE708 (-EligibleWindow@ShellWindowManagement@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00C098C (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C21FC (-StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOpti.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00C2734 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     ?GetTooltipIdFromHitTest@@YA?AW4tagTOOLTIPID@@PEAUtagWND@@H@Z @ 0x1C013D238 (-GetTooltipIdFromHitTest@@YA-AW4tagTOOLTIPID@@PEAUtagWND@@H@Z.c)
 *     ?IsTooltipHittest2@@YA_NPEAUtagWND@@I@Z @ 0x1C013D328 (-IsTooltipHittest2@@YA_NPEAUtagWND@@I@Z.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C01EA284 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01EBB54 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02007D8 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C021E068 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellWindowManagement::BehaviorEnabled(ShellWindowManagement *this, const struct tagDESKTOP *a2)
{
  char v2; // r8

  v2 = 0;
  if ( *((_QWORD *)this + 41) )
    return ((unsigned int)a2 & *((_DWORD *)this + 84) & 0x1FF) != 0;
  return v2;
}
