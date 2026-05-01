/*
 * XREFs of ??_G?$heap_implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18001D688
 * Callers:
 *     ??_ETabProxyWindow@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z @ 0x18020E750 (--_ETabProxyWindow@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18001D6C4 (--1TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::TabProxyWindow *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::~TabProxyWindow(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0xC0uLL);
  return a1;
}
