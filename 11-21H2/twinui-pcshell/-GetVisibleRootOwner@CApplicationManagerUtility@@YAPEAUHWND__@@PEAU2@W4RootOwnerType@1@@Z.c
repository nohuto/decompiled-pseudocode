/*
 * XREFs of ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x180021DA0
 * Callers:
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x180021344 (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180086710 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180105A04 (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180105A54 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1802ECA3C (-IsForcedAppWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1802ECA64 (-IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CApplicationManagerUtility::GetVisibleRootOwner(HWND a1, int a2)
{
  CApplicationManagerUtility *v3; // rbx
  HWND Window; // rax
  HWND v5; // rdx
  HWND v6; // rdi
  BOOL v8; // eax
  HWND v9; // rdx

  v3 = 0LL;
  while ( 1 )
  {
    Window = GetWindow(a1, 4u);
    v6 = Window;
    if ( !Window )
      break;
    v8 = IsWindowVisible(Window);
    a1 = v6;
    if ( v8 )
      v3 = (CApplicationManagerUtility *)v6;
  }
  if ( a2 )
  {
    if ( !v3 )
      return (__int64)v3;
  }
  else
  {
    if ( !v3 )
      return (__int64)v3;
    if ( !CApplicationManagerUtility::IsForcedAppWindow(v3, v5)
      && (!CApplicationManagerUtility::IsTrayWindowStyleCheck((HWND)v3, v5)
       || CApplicationManagerUtility::IsOwnedWindow(v3, v9)) )
    {
      return 0LL;
    }
  }
  if ( CApplicationManagerUtility::IsGhostWindow((HWND)v3, v5) )
    return HungWindowFromGhostWindow(v3);
  return (__int64)v3;
}
