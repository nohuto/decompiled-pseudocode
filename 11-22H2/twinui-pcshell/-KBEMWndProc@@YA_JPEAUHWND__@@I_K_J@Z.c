/*
 * XREFs of ?KBEMWndProc@@YA_JPEAUHWND__@@I_K_J@Z @ 0x1801B07C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LRESULT __fastcall KBEMWndProc(HWND hWnd, UINT a2, WPARAM a3, LPARAM a4)
{
  if ( GetWindowLongPtrW(hWnd, -21) )
  {
    if ( a2 == 130 )
    {
      SetWindowLongPtrW(hWnd, -21, 0LL);
    }
    else if ( a2 == 810 && (_DWORD)a4 == 4 )
    {
      OutputDebugStringW(L"DWM_STORYBOARD_COMPLETED\r\n");
    }
  }
  return DefWindowProcW(hWnd, a2, a3, a4);
}
