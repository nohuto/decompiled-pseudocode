/*
 * XREFs of SetWindowSubclass @ 0x1802DAF94
 * Callers:
 *     ?put_ActivationOptions@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAHI@Z @ 0x1804233B0 (-put_ActivationOptions@-$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Sh.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x1802DB000 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall SetWindowSubclass(HWND hWnd, SUBCLASSPROC pfnSubclass, UINT_PTR uIdSubclass, DWORD_PTR dwRefData)
{
  __int64 (__fastcall *v4)(HWND, __int64 (__usercall *)@<rax>(HWND@<rcx>, UINT@<edx>, unsigned __int64@<r8>, __int64@<r9>, unsigned __int64, unsigned __int64), _QWORD, DWORD_PTR); // rax

  v4 = (__int64 (__fastcall *)(HWND, __int64 (__usercall *)@<rax>(HWND@<rcx>, UINT@<edx>, unsigned __int64@<r8>, __int64@<r9>, unsigned __int64, unsigned __int64), _QWORD, DWORD_PTR))qword_1807B2810;
  if ( qword_1807B2810 == -1 )
  {
    GetProcFromComCtl32(&qword_1807B2810, 410LL);
    v4 = (__int64 (__fastcall *)(HWND, __int64 (__usercall *)@<rax>(HWND@<rcx>, UINT@<edx>, unsigned __int64@<r8>, __int64@<r9>, unsigned __int64, unsigned __int64), _QWORD, DWORD_PTR))qword_1807B2810;
  }
  if ( v4 )
    LODWORD(v4) = v4(
                    hWnd,
                    winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow::s_WndProc,
                    0LL,
                    dwRefData);
  return (int)v4;
}
