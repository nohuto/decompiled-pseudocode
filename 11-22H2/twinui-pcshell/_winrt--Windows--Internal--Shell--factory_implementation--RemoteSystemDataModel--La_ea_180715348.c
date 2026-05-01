/*
 * XREFs of _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchForSwitchAsync_::_1_::dtor$6 @ 0x180715348
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchForSwitchAsync_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    winrt::hstring::~hstring((void **)(a2 + 152));
  }
}
