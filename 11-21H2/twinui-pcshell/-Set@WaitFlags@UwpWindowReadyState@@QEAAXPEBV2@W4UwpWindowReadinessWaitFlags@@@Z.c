/*
 * XREFs of ?Set@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18041A868
 * Callers:
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A66C (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18041A798 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18041A898 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18041A98C (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x18041AA24 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@Z @ 0x18041A5B0 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManag.c)
 */

int __fastcall UwpWindowReadyState::WaitFlags::Set(int *a1, __int64 *a2, int a3)
{
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = *a1;
  *a1 = a3 | v4;
  return ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
           a2,
           &v4,
           a1);
}
