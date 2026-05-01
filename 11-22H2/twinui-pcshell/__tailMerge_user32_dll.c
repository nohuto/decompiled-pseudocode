/*
 * XREFs of __tailMerge_user32_dll @ 0x1801C79C8
 * Callers:
 *     __imp_load_CreateWindowExW @ 0x1801C79BC (__imp_load_CreateWindowExW.c)
 *     __imp_load_RegisterClassW @ 0x1801C7A47 (__imp_load_RegisterClassW.c)
 *     __imp_load_RegisterClassExW @ 0x1801C7A59 (__imp_load_RegisterClassExW.c)
 *     __imp_load_GetClassInfoW @ 0x1801C7A6B (__imp_load_GetClassInfoW.c)
 *     __imp_load_GetProcessUIContextInformation @ 0x1801CD0D9 (__imp_load_GetProcessUIContextInformation.c)
 *     __imp_load_GetSystemMenu @ 0x1801CD0EB (__imp_load_GetSystemMenu.c)
 *     __imp_load_GetMenuItemInfoW @ 0x1801CD0FD (__imp_load_GetMenuItemInfoW.c)
 *     __imp_load_GetClassLongW @ 0x1801CD10F (__imp_load_GetClassLongW.c)
 *     __imp_load_LoadCursorW @ 0x1801CD121 (__imp_load_LoadCursorW.c)
 *     __imp_load_SetCursor @ 0x1801CD133 (__imp_load_SetCursor.c)
 *     __imp_load_CanCurrentThreadChangeForeground @ 0x1801CD145 (__imp_load_CanCurrentThreadChangeForeground.c)
 *     __imp_load_InternalGetWindowText @ 0x1801CD157 (__imp_load_InternalGetWindowText.c)
 *     __imp_load_IsImmersiveProcess @ 0x1801CD169 (__imp_load_IsImmersiveProcess.c)
 *     __imp_load_GetSysColor @ 0x1801CD17B (__imp_load_GetSysColor.c)
 *     __imp_load_GetKeyboardState @ 0x1801CD18D (__imp_load_GetKeyboardState.c)
 *     __imp_load_SetKeyboardState @ 0x1801CD19F (__imp_load_SetKeyboardState.c)
 *     __imp_load_GetAsyncKeyState @ 0x1801CD1B1 (__imp_load_GetAsyncKeyState.c)
 *     __imp_load_CalculatePopupWindowPosition @ 0x1801CD1C3 (__imp_load_CalculatePopupWindowPosition.c)
 *     __imp_load_GetDC @ 0x1801CD1D5 (__imp_load_GetDC.c)
 *     __imp_load_CreateIconIndirect @ 0x1801CD1E7 (__imp_load_CreateIconIndirect.c)
 *     __imp_load_AcquireIAMKey @ 0x1801CD1F9 (__imp_load_AcquireIAMKey.c)
 *     __imp_load_EnableIAMAccess @ 0x1801CD20B (__imp_load_EnableIAMAccess.c)
 *     __imp_load_SetCancelRotationDelayHintWindow @ 0x1801CD21D (__imp_load_SetCancelRotationDelayHintWindow.c)
 *     __imp_load_ClearForeground @ 0x1801CD22F (__imp_load_ClearForeground.c)
 *     __imp_load_SetActivationFilter @ 0x1801CD241 (__imp_load_SetActivationFilter.c)
 *     __imp_load_SetFallbackForeground @ 0x1801CD253 (__imp_load_SetFallbackForeground.c)
 *     __imp_load_SendEventMessage @ 0x1801CD265 (__imp_load_SendEventMessage.c)
 *     __imp_load_RegisterForCustomDockTargets @ 0x1801CD277 (__imp_load_RegisterForCustomDockTargets.c)
 *     __imp_load_SetProcessLaunchForegroundPolicy @ 0x1801CD289 (__imp_load_SetProcessLaunchForegroundPolicy.c)
 *     __imp_load_SetBridgeWindowChild @ 0x1801CD29B (__imp_load_SetBridgeWindowChild.c)
 *     __imp_load_ShellSetWindowPos @ 0x1801CD2AD (__imp_load_ShellSetWindowPos.c)
 *     __imp_load_DestroyIcon @ 0x1801CD2BF (__imp_load_DestroyIcon.c)
 *     __imp_load_CopyIcon @ 0x1801CD2D1 (__imp_load_CopyIcon.c)
 *     __imp_load_ReleaseDC @ 0x1801CD2E3 (__imp_load_ReleaseDC.c)
 *     __imp_load_GetIconInfo @ 0x1801CD2F5 (__imp_load_GetIconInfo.c)
 *     __imp_load_GetClassLongPtrW @ 0x1801CD307 (__imp_load_GetClassLongPtrW.c)
 *     __imp_load_LoadIconW @ 0x1801CD319 (__imp_load_LoadIconW.c)
 *     __imp_load_GetWindowMinimizeRect @ 0x1801CD32B (__imp_load_GetWindowMinimizeRect.c)
 *     __imp_load_UnregisterHotKey @ 0x1801CD33D (__imp_load_UnregisterHotKey.c)
 *     __imp_load_RegisterHotKey @ 0x1801CD34F (__imp_load_RegisterHotKey.c)
 *     __imp_load_DeleteMenu @ 0x1801CD361 (__imp_load_DeleteMenu.c)
 *     __imp_load_InsertMenuW @ 0x1801CD373 (__imp_load_InsertMenuW.c)
 *     __imp_load_GetKeyState @ 0x1801CD385 (__imp_load_GetKeyState.c)
 *     __imp_load_DestroyMenu @ 0x1801CD397 (__imp_load_DestroyMenu.c)
 *     __imp_load_GetMenuItemCount @ 0x1801CD3A9 (__imp_load_GetMenuItemCount.c)
 *     __imp_load_TrackPopupMenu @ 0x1801CD3BB (__imp_load_TrackPopupMenu.c)
 *     __imp_load_IsWindowArranged @ 0x1801CD3CD (__imp_load_IsWindowArranged.c)
 *     __imp_load_GetWindowCompositionInfo @ 0x1801CD3DF (__imp_load_GetWindowCompositionInfo.c)
 *     __imp_load_GetPhysicalCursorPos @ 0x1801CD3F1 (__imp_load_GetPhysicalCursorPos.c)
 *     __imp_load_RegisterTouchHitTestingWindow @ 0x1801CD403 (__imp_load_RegisterTouchHitTestingWindow.c)
 *     __imp_load_GetCursorInfo @ 0x1801CD415 (__imp_load_GetCursorInfo.c)
 *     __imp_load_EnableMouseInPointerForThread @ 0x1801CD427 (__imp_load_EnableMouseInPointerForThread.c)
 *     __imp_load_AppendMenuW @ 0x1801CD439 (__imp_load_AppendMenuW.c)
 *     __imp_load_CreatePopupMenu @ 0x1801CD44B (__imp_load_CreatePopupMenu.c)
 *     __imp_load_CopyImage @ 0x1801CD45D (__imp_load_CopyImage.c)
 *     __imp_load_GetMenuInfo @ 0x1801CD46F (__imp_load_GetMenuInfo.c)
 *     __imp_load_SetMenuInfo @ 0x1801CD481 (__imp_load_SetMenuInfo.c)
 *     __imp_load_SetMenuItemInfoW @ 0x1801CD493 (__imp_load_SetMenuItemInfoW.c)
 *     __imp_load_DrawIconEx @ 0x1801CEE97 (__imp_load_DrawIconEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801865D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_user32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_user32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
