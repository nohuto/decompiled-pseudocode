/*
 * XREFs of ??_E?$heap_implements@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180577CAC
 * Callers:
 *     ??_ETabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z @ 0x18020E490 (--_ETabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805799BC (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::~TabProxyWindowFactory(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
