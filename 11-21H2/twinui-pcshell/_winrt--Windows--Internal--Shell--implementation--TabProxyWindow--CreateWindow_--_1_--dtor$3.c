/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow_::_1_::dtor$3 @ 0x180214F55
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::CreateWindow_::_1_::dtor_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( (*(_DWORD *)(a2 + 200) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 200) &= ~2u;
    winrt::hstring::~hstring((volatile signed __int32 **)(a2 + 128), a2, a3, a4);
  }
}
