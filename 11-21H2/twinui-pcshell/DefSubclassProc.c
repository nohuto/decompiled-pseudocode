/*
 * XREFs of DefSubclassProc @ 0x1802DAC30
 * Callers:
 *     ?s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@CA_JPEAUHWND__@@I_K_J11@Z @ 0x1804236A0 (-s_WndProc@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@wi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x1802DB000 (_GetProcFromComCtl32.c)
 */

LRESULT __stdcall DefSubclassProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
  LRESULT result; // rax

  result = qword_1807B2808;
  if ( qword_1807B2808 == -1 )
  {
    GetProcFromComCtl32(&qword_1807B2808, 413LL);
    result = qword_1807B2808;
  }
  if ( result )
    return ((__int64 (__fastcall *)(HWND, _QWORD, WPARAM, LPARAM))result)(hWnd, uMsg, wParam, lParam);
  return result;
}
