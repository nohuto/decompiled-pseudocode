/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor$1 @ 0x180214E65
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::OnTabChanged_::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (*(_DWORD *)(a2 + 192) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 192) &= ~2u;
    winrt::hstring::~hstring((volatile signed __int32 **)(a2 + 40), a2, a3, a4);
  }
}
