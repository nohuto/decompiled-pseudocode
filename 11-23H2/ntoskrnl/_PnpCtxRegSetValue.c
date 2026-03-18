/*
 * XREFs of _PnpCtxRegSetValue @ 0x140A60B84
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374E40 (PipUpdateDeviceProducts.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140B3FB4C (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlSetValue @ 0x1407D49D4 (_RegRtlSetValue.c)
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
