/*
 * XREFs of _winrt::make_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_unsigned_short_const_(&)[19]_enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode_&_winrt::Windows::Foundation::Rect_const_&_std::nullptr_t_bool__::_1_::dtor$5 @ 0x1803A0B7C
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::make_winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs_unsigned_short_const_____19__enum_winrt::WindowsUdk::UI::Shell::SearchAppActivationMode___winrt::Windows::Foundation::Rect_const___std::nullptr_t_bool__::_1_::dtor_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (*(_DWORD *)(a2 + 64) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~0x10u;
    winrt::hstring::~hstring((volatile signed __int32 **)(a2 + 144), a2, a3, a4);
  }
}
