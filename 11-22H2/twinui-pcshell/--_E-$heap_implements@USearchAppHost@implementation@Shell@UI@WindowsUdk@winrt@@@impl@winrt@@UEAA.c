/*
 * XREFs of ??_E?$heap_implements@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x180466C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1804664B4 (--1SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ.c)
 */

winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *__fastcall winrt::impl::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost>::`vector deleting destructor'(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost *a1,
        char a2)
{
  winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::~SearchAppHost(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
