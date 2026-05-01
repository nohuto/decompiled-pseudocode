/*
 * XREFs of ??0hresult_no_interface@winrt@@QEAA@XZ @ 0x1801D06C0
 * Callers:
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D06E4 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D07C4 (-GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803531C8 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

winrt::hresult_no_interface *__fastcall winrt::hresult_no_interface::hresult_no_interface(
        winrt::hresult_no_interface *this)
{
  winrt::hresult_error::hresult_error(this, 2147500034LL);
  return this;
}
