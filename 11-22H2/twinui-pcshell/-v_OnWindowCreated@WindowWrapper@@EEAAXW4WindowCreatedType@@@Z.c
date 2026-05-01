/*
 * XREFs of ?v_OnWindowCreated@WindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1804DE010
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18019C070 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 */

BOOL __fastcall WindowWrapper::v_OnWindowCreated(int *a1, int a2)
{
  BOOL result; // eax

  if ( a2 != 1 )
  {
    PushWindowTransparencyModeToWindow((HWND)a1[74], a1[137], a1[159]);
    return SetPropW((HWND)a1[74], L"CanOpenInNewTab", (HANDLE)(a1[138] != 0));
  }
  return result;
}
