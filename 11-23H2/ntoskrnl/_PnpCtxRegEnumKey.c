/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1408127FC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140374E40 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140B94274 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B943C0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B94B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B94D90 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140B95120 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x14086B4AC (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
