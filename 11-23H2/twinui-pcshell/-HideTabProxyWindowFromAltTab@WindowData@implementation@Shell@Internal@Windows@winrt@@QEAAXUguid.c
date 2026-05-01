/*
 * XREFs of ?HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid@6@_N@Z @ 0x180639F20
 * Callers:
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x180636ADC (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 * Callees:
 *     ?at@?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAAAEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBUguid@4@@Z @ 0x180034A40 (-at@-$unordered_map@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180035BE0 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::HideTabProxyWindowFromAltTab(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v4; // rax

  AcquireSRWLockExclusive(a1);
  v4 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                             (__int64)&a1[3],
                                                                             a2);
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v4, 1);
  if ( a1 )
    ReleaseSRWLockExclusive(a1);
}
