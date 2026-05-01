/*
 * XREFs of SetWindowSubclass @ 0x18039100C
 * Callers:
 *     ?put_ActivationOptions@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHI@Z @ 0x1804F80E0 (-put_ActivationOptions@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Sh.c)
 *     ?put_ActivationOptions@?$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow_WASDK@34567@@impl@winrt@@UEAAHI@Z @ 0x1804F91E0 (-put_ActivationOptions@-$produce@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerH.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180391084 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall SetWindowSubclass(HWND hWnd, SUBCLASSPROC pfnSubclass, UINT_PTR uIdSubclass, DWORD_PTR dwRefData)
{
  __int64 (__fastcall *v4)(HWND, SUBCLASSPROC, _QWORD, DWORD_PTR); // rax

  v4 = (__int64 (__fastcall *)(HWND, SUBCLASSPROC, _QWORD, DWORD_PTR))qword_18098C428;
  if ( qword_18098C428 == -1 )
  {
    GetProcFromComCtl32(&qword_18098C428, 410LL);
    v4 = (__int64 (__fastcall *)(HWND, SUBCLASSPROC, _QWORD, DWORD_PTR))qword_18098C428;
  }
  if ( v4 )
    LODWORD(v4) = v4(hWnd, pfnSubclass, 0LL, dwRefData);
  return (int)v4;
}
