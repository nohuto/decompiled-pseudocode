/*
 * XREFs of ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180036878
 * Callers:
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180091B84 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1800C2D40 (-v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18040DFA4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18040E098 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x1800C30D0 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 */

__int64 __fastcall WindowReadyState::WaitFlags::Set(int *a1, __int64 a2, int a3)
{
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = *a1;
  *a1 = a3 | v4;
  return ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
           a2,
           &v4,
           a1);
}
