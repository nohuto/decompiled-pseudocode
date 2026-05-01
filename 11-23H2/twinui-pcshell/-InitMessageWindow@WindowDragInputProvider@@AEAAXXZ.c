/*
 * XREFs of ?InitMessageWindow@WindowDragInputProvider@@AEAAXXZ @ 0x18068B270
 * Callers:
 *     ?CreateMessageWindow@WindowDragInputProvider@@QEAAXUDispatcherQueue@System@Windows@winrt@@@Z @ 0x18068AF94 (-CreateMessageWindow@WindowDragInputProvider@@QEAAXUDispatcherQueue@System@Windows@winrt@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall WindowDragInputProvider::InitMessageWindow(WindowDragInputProvider *this)
{
  HINSTANCE hInstance; // rbx
  const char *v3; // r9
  WNDCLASSEXW v4; // [rsp+68h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  *(_QWORD *)&v4.cbClsExtra = 0LL;
  memset(&v4.hIcon, 0, 32);
  hInstance = GetModuleHandleW(0LL);
  v4.hIconSm = 0LL;
  v4.style = 0;
  v4.lpfnWndProc = (WNDPROC)WindowDragInputProvider::MsgWindowWndProc;
  v4.cbSize = 80;
  v4.hInstance = hInstance;
  v4.lpszClassName = L"SnapMessageWindow";
  RegisterClassExW(&v4);
  if ( !CreateWindowExW(
          0,
          L"SnapMessageWindow",
          L"Snap Message Window",
          0,
          0x80000000,
          0x80000000,
          0,
          0,
          HWND_MESSAGE,
          0LL,
          hInstance,
          this) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8C,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\windowdraginputprovider.cpp",
      v3);
}
