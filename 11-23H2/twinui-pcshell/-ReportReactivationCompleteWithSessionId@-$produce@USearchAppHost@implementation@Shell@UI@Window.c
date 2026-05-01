/*
 * XREFs of ?ReportReactivationCompleteWithSessionId@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@@impl@winrt@@UEAAHPEAX@Z @ 0x1800501A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUhstring@1@@Z @ 0x1800501FC (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@-$event@U-$TypedEventH.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost4>::ReportReactivationCompleteWithSessionId(
        unsigned __int64 a1,
        winrt::impl *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  struct winrt::impl::hstring_header *v4; // [rsp+30h] [rbp+8h] BYREF
  struct winrt::impl::hstring_header **v5; // [rsp+38h] [rbp+10h]

  v2 = (a1 - 40) & ((unsigned __int128)-(__int128)a1 >> 64);
  try
  {
    v4 = winrt::impl::duplicate_hstring(a2, a2);
    v5 = &v4;
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>::operator()<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::hstring>(
      v2 + 96,
      v2,
      &v4);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
