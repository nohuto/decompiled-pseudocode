/*
 * XREFs of ?QueryInterface@TrayInfoTipAppInfoProvider@SystemTray@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A2E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::QueryInterface(__int64 a1, struct _GUID *a2, void **a3)
{
  return SystemTray::TrayInfoTipAppInfoProvider::QueryInterface(
           (SystemTray::TrayInfoTipAppInfoProvider *)(a1 - 8),
           a2,
           a3);
}
