/*
 * XREFs of ?FailFastIfNotOnCreationThread@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18001F600
 * Callers:
 *     ?XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@67@@Z @ 0x18001ECF4 (-XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt.c)
 *     ?TryActivate@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHXZ @ 0x18001EDB0 (-TryActivate@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Wi.c)
 *     ?put_IsCloaked@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAH_N@Z @ 0x18001EE30 (-put_IsCloaked@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ?put_IsVisible@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAH_N@Z @ 0x18001EEA0 (-put_IsVisible@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ??1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18001F09C (--1XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?Position@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AURect@Foundation@67@XZ @ 0x18001F54C (-Position@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@Q.c)
 *     ?InsertAfter@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAH_K@Z @ 0x180421D80 (-InsertAfter@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Wi.c)
 *     ?XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIInspectable@Foundation@67@XZ @ 0x180422008 (-XamlContent@XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@_ea_180422008.c)
 *     ?get_IsActive@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x1804220E0 (-get_IsActive@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@W.c)
 *     ?get_IsCloaked@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180422160 (-get_IsCloaked@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ?get_IsVisible@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHPEA_N@Z @ 0x180422210 (-get_IsVisible@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@.c)
 *     ?put_Position@?$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostWindow@34567@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180422410 (-put_Position@-$produce@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@W.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow::FailFastIfNotOnCreationThread(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 14) != GetCurrentThreadId() )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x127,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostislandwindow.cpp",
      v1);
}
