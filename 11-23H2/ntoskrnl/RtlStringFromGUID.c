/*
 * XREFs of RtlStringFromGUID @ 0x140685290
 * Callers:
 *     VhdInitialize @ 0x140B3BDDC (VhdInitialize.c)
 *     SepSecureBootSetRegistryKey @ 0x140B4CF20 (SepSecureBootSetRegistryKey.c)
 *     PipHardwareConfigInit @ 0x140B6C43C (PipHardwareConfigInit.c)
 *     PiInitFirmwareResources @ 0x140B6EC94 (PiInitFirmwareResources.c)
 *     CimfsInitialize @ 0x140B74594 (CimfsInitialize.c)
 *     BapdpRegisterFwUpdateResults @ 0x140B97A14 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
