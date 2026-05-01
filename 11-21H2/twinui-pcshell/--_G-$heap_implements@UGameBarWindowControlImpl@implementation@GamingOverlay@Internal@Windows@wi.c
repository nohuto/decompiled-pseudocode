/*
 * XREFs of ??_G?$heap_implements@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18032D2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UEAA@XZ @ 0x18032C2E0 (--1GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::`scalar deleting destructor'(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *a1,
        char a2)
{
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::~GameBarWindowControlImpl(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
