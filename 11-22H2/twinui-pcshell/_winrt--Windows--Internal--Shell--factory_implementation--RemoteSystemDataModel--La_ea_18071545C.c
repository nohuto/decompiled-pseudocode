/*
 * XREFs of _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchForSwitchAsync_::_1_::dtor$18 @ 0x18071545C
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchForSwitchAsync_::_1_::dtor_18(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~0x20u;
    winrt::hstring::~hstring((void **)(a2 + 232));
  }
}
