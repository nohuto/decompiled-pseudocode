/*
 * XREFs of ?v_WndProc@VirtualDesktopGestureWindow@@UEAA_JPEAUHWND__@@I_K_J@Z @ 0x180556E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LRESULT __fastcall VirtualDesktopGestureWindow::v_WndProc(
        VirtualDesktopGestureWindow *this,
        HWND a2,
        __int64 a3,
        WPARAM a4,
        LPARAM a5)
{
  UINT v6; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  int *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v6 = a3;
  if ( (_DWORD)a3 == 1 )
  {
    v8 = *((_QWORD *)this + 1);
    v10 = 13;
    v13 = 1;
    v11 = &v13;
    v12 = 4;
    SetWindowCompositionAttribute(v8, &v10, a3, a4);
  }
  return DefWindowProcW(a2, v6, a4, a5);
}
