/*
 * XREFs of ?CreateTrackingTooltip@CTrackingTooltip@@IEAAPEAUHWND__@@PEAG@Z @ 0x1800E921C
 * Callers:
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800E930C (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CTrackingTooltip::CreateTrackingTooltip(CTrackingTooltip *this, unsigned __int16 *a2)
{
  HWND Window; // rsi
  HWND DesktopWindow; // rax

  Window = CreateWindowExW(
             8u,
             L"tooltips_class32",
             0LL,
             0x80000003,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0LL,
             0LL,
             g_hInstance,
             0LL);
  if ( Window )
  {
    DesktopWindow = GetDesktopWindow();
    *((_QWORD *)this + 10) = g_hInstance;
    *((_DWORD *)this + 10) = 72;
    *((_DWORD *)this + 11) = 161;
    *((_QWORD *)this + 6) = DesktopWindow;
    *((_QWORD *)this + 11) = a2;
    *((_QWORD *)this + 7) = DesktopWindow;
    GetWindowRect(DesktopWindow, (LPRECT)this + 4);
    SendMessageW(Window, 0x432u, 0LL, (LPARAM)this + 40);
  }
  return Window;
}
