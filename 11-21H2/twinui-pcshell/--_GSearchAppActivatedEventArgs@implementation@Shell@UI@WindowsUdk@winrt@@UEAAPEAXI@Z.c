/*
 * XREFs of ??_GSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAAPEAXI@Z @ 0x1800F4B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ @ 0x1800F6DE4 (--1SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *__fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::`scalar deleting destructor'(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *this,
        char a2)
{
  winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::~SearchAppActivatedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x98uLL);
  return this;
}
