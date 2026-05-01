/*
 * XREFs of ?wndProc@CAppThumbnailWindow@@IEAA_JPEAUHWND__@@I_K_J@Z @ 0x18055D1DC
 * Callers:
 *     ?s_WndProc@CAppThumbnailWindow@@SA_JPEAUHWND__@@I_K_J@Z @ 0x18055D0A0 (-s_WndProc@CAppThumbnailWindow@@SA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

LRESULT __fastcall CAppThumbnailWindow::wndProc(CAppThumbnailWindow *this, HWND a2, UINT a3, WPARAM a4, LPARAM a5)
{
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  int *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 == 1 )
  {
    v8 = *((_QWORD *)this + 20);
    v10 = 13;
    v13 = 1;
    v11 = &v13;
    v12 = 4;
    SetWindowCompositionAttribute(v8, &v10);
  }
  return DefWindowProcW(a2, a3, a4, a5);
}
