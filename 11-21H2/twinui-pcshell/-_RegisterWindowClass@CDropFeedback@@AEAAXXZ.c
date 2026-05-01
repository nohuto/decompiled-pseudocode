/*
 * XREFs of ?_RegisterWindowClass@CDropFeedback@@AEAAXXZ @ 0x18053039C
 * Callers:
 *     ?RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@@Z @ 0x18052F2AC (-RuntimeClassInitialize@CDropFeedback@@QEAAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

void __fastcall CDropFeedback::_RegisterWindowClass(CDropFeedback *this)
{
  HBRUSH StockObject; // rax
  WNDCLASSEXW v2; // [rsp+20h] [rbp-58h] BYREF

  v2.cbSize = 80;
  memset_0(&v2.style, 0, 0x4CuLL);
  v2.style = 3;
  v2.lpfnWndProc = (WNDPROC)CDropFeedback::s_WndProc;
  v2.hInstance = &_ImageBase;
  v2.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  StockObject = (HBRUSH)GetStockObject(4);
  v2.cbWndExtra = 8;
  v2.hbrBackground = StockObject;
  v2.lpszClassName = L"ImmersiveDropFeedback";
  RegisterClassExW(&v2);
}
