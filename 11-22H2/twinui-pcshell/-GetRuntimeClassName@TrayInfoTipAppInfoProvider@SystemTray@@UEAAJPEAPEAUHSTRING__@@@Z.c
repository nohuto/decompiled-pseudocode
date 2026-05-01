/*
 * XREFs of ?GetRuntimeClassName@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1805466C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall SystemTray::TrayInfoTipAppInfoProvider::GetRuntimeClassName(
        SystemTray::TrayInfoTipAppInfoProvider *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.SystemTray.TrayNotificationAppInfoProvider", 0x41u, a2);
}
