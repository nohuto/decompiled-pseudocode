/*
 * XREFs of ?find_interface@?$implements@UWindowsTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@UIWindowsTrackerStatics@3456@Ustatic_lifetime@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801B6050
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::factory_implementation::WindowsTracker,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IWindowsTrackerStatics,winrt::static_lifetime>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6; // rax

  if ( winrt::operator==(a2, L"5") )
  {
    v6 = v3 + 16;
    return v6 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(v2, winrt::impl::guid_v<winrt::Windows::Internal::Shell::IWindowsTrackerStatics>) )
  {
    v6 = v3 + 24;
    return v6 & -(__int64)(v3 != 0);
  }
  return v4;
}
