/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData_::_1_::dtor$4 @ 0x18072622A
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 144) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 144) &= ~8u;
    winrt::hstring::~hstring((void **)(a2 + 48));
  }
}
