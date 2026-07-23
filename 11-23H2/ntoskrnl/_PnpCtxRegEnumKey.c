/*
 * XREFs of _PnpCtxRegEnumKey @ 0x140812ACC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374FE0 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140B94274 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B943C0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B94B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B94D90 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140B95120 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x14086B6EC (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
