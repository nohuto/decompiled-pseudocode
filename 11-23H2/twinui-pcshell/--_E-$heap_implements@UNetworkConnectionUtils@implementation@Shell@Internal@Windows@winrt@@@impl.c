/*
 * XREFs of ??_E?$heap_implements@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180734430
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180734384 (--1NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::~NetworkConnectionUtils(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
