/*
 * XREFs of ?get_Host@?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801A4740
 * Callers:
 *     <none>
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2>::get_Host(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = a1 + 120;
  if ( !a1 )
    v3 = 144LL;
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)&v6,
    (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)v3);
  v4 = v6;
  v6 = 0LL;
  *a2 = v4;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v6);
  return 0LL;
}
