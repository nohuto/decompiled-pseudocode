/*
 * XREFs of ?GetLastActivePopup@Utilities@ApplicationViewManagement@@YAPEAUHWND__@@PEAU3@@Z @ 0x1803CD04C
 * Callers:
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x1802D1A80 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall ApplicationViewManagement::Utilities::GetLastActivePopup(HWND hWnd, HWND a2)
{
  HWND v2; // rbx
  HWND Window; // rax
  HWND v4; // rdi
  HWND result; // rax
  HWND v6; // rdi
  HWND i; // rcx
  HWND v8; // rax

  v2 = hWnd;
  Window = hWnd;
  do
  {
    v4 = Window;
    Window = GetWindow(Window, 4u);
  }
  while ( Window );
  result = GetLastActivePopup(v4);
  v6 = result;
  if ( result )
  {
    if ( result != v2 && IsWindowVisible(result) && IsWindowEnabled(v6) )
    {
      for ( i = v6; ; i = v8 )
      {
        v8 = GetWindow(i, 4u);
        if ( !v8 )
          break;
        if ( v8 == v2 )
          return v6;
      }
      if ( v2 )
        return v2;
      return v6;
    }
    return v2;
  }
  return result;
}
