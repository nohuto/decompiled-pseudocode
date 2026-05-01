/*
 * XREFs of ?WndProc@SharedDesktopBackgroundVisualHost@@CA_JQEAUHWND__@@I_K_J@Z @ 0x1806EC130
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleSizeUpdate@SharedDesktopBackgroundVisualHost@@AEAAXUtagSIZE@@@Z @ 0x1806E7AA8 (-HandleSizeUpdate@SharedDesktopBackgroundVisualHost@@AEAAXUtagSIZE@@@Z.c)
 */

LRESULT __fastcall SharedDesktopBackgroundVisualHost::WndProc(HWND a1, UINT a2, WPARAM a3, LONG_PTR *a4)
{
  RTL_SRWLOCK *WindowLongPtrW; // rax
  struct tagSIZE v10; // [rsp+20h] [rbp-18h]

  if ( a2 == 129 )
  {
    SetWindowLongPtrW(a1, -21, *a4);
  }
  else
  {
    WindowLongPtrW = (RTL_SRWLOCK *)GetWindowLongPtrW(a1, -21);
    if ( WindowLongPtrW && a2 == 5 )
    {
      v10.cx = (unsigned __int16)a4;
      v10.cy = WORD1(a4);
      SharedDesktopBackgroundVisualHost::HandleSizeUpdate(WindowLongPtrW, v10);
    }
  }
  return DefWindowProcW(a1, a2, a3, (LPARAM)a4);
}
