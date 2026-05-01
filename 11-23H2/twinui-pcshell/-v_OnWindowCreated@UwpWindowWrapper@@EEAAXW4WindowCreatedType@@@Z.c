/*
 * XREFs of ?v_OnWindowCreated@UwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18019C010
 * Callers:
 *     <none>
 * Callees:
 *     ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18019C070 (-PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@.c)
 */

BOOL __fastcall UwpWindowWrapper::v_OnWindowCreated(_DWORD *a1, int a2)
{
  BOOL result; // eax

  if ( a2 != 1 )
  {
    PushWindowTransparencyModeToWindow((int)a1[74], (unsigned int)a1[137], (unsigned int)a1[161]);
    return SetPropW((HWND)(int)a1[74], L"CanOpenInNewTab", (HANDLE)(a1[138] != 0));
  }
  return result;
}
