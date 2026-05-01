/*
 * XREFs of ?RuntimeClassInitialize@DragInputHandler@@QEAAJPEAUIExternalDragHost@@@Z @ 0x180587A68
 * Callers:
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x18058761C (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??4?$ComPtr@UIExternalDragHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIExternalDragHost@@@Z @ 0x1805877A4 (--4-$ComPtr@UIExternalDragHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIExternalDragHost@@@Z.c)
 *     ?Shutdown@DragInputHandler@@UEAAJXZ @ 0x180587BD0 (-Shutdown@DragInputHandler@@UEAAJXZ.c)
 */

__int64 __fastcall DragInputHandler::RuntimeClassInitialize(DragInputHandler *this, struct IExternalDragHost *a2)
{
  const char *v4; // r9
  HWND v5; // rcx
  WNDCLASSEXW v7; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v7.cbSize = 80;
  memset_0(&v7.style, 0, 0x4CuLL);
  v7.cbWndExtra = 8;
  v7.lpfnWndProc = (WNDPROC)CWRLImpWndProc<DragInputHandler>::s_WndProcBase;
  v7.hInstance = &_ImageBase;
  v7.lpszClassName = L"MTVDragInputHandler";
  RegisterClassExW(&v7);
  CreateWindowExW(0x8200000u, L"MTVDragInputHandler", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
  v5 = (HWND)*((_QWORD *)this + 3);
  if ( !v5 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x47,
             (int)"pcshell\\twinui\\multitaskingview\\lib\\draginputhandler.cpp",
             v4);
  if ( SetForegroundWindow(v5) )
  {
    SetCapture(*((HWND *)this + 3));
    Microsoft::WRL::ComPtr<IExternalDragHost>::operator=((__int64 *)this + 5, (__int64)a2);
    return 0LL;
  }
  else
  {
    DragInputHandler::Shutdown(this);
    return 2147500037LL;
  }
}
