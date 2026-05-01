/*
 * XREFs of ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18041A638
 * Callers:
 *     ?FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A66C (-FrameworkKindChanged@UwpWindowReadyState@@QEAAXW4AppModelFrameworkKind@WindowManagement@Applica.c)
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x18041A6C8 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     ?SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18041A898 (-SetWindow@UwpWindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18041A98C (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@Z @ 0x18041A5B0 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManag.c)
 */

int __fastcall UwpWindowReadyState::WaitFlags::Clear(int *a1, __int64 *a2, int a3)
{
  int v3; // r8d
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a1 & ~a3;
  v5 = *a1;
  *a1 = v3;
  return ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
           a2,
           &v5,
           a1);
}
