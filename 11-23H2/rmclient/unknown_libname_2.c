/*
 * XREFs of unknown_libname_2 @ 0x180015130
 * Callers:
 *     HamCreateActivityForProcess @ 0x180002590 (HamCreateActivityForProcess.c)
 *     HamTerminateActivityHostEx @ 0x180002900 (HamTerminateActivityHostEx.c)
 *     HamCreateActivityEx @ 0x180007B20 (HamCreateActivityEx.c)
 *     HamCloseActivity @ 0x180007EB0 (HamCloseActivity.c)
 *     HamUpdateActivityProperties @ 0x180008880 (HamUpdateActivityProperties.c)
 *     HamStartActivityAsync @ 0x180008900 (HamStartActivityAsync.c)
 *     HamStopActivity @ 0x180009710 (HamStopActivity.c)
 *     HamIsHostBeingDebugged @ 0x18001DE10 (HamIsHostBeingDebugged.c)
 *     HamQueryActivityPendDiagnostics @ 0x18001DFC0 (HamQueryActivityPendDiagnostics.c)
 *     HamResetExternalResourcePriority @ 0x18001E360 (HamResetExternalResourcePriority.c)
 *     HamSetExternalResourcePriority @ 0x18001E660 (HamSetExternalResourcePriority.c)
 *     HamTerminateHostOnProcessExit @ 0x18001E7B0 (HamTerminateHostOnProcessExit.c)
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
_BOOL8 __fastcall unknown_libname_2(__int64 a1)
{
  return *(_QWORD *)(a1 + 8) != 0LL;
}
