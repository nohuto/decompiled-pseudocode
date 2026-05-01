/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch$81 @ 0x18072BBBD
 * Callers:
 *     <none>
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800DBDB8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::LaunchUriData::GetForLaunchUri_::_1_::catch_81(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  winrt::hstring::operator=((volatile signed __int32 **)(a2 + 128), (winrt::impl **)&c_hostSystemId, a3);
  return 0LL;
}
