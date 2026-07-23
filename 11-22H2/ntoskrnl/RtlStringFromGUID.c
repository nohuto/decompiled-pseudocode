/*
 * XREFs of RtlStringFromGUID @ 0x140685290
 * Callers:
 *     VhdInitialize @ 0x140B3F4DC (VhdInitialize.c)
 *     PipHardwareConfigInit @ 0x140B6D528 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140B6DAA4 (SepSecureBootSetRegistryKey.c)
 *     PiInitFirmwareResources @ 0x140B6FC80 (PiInitFirmwareResources.c)
 *     CimfsInitialize @ 0x140B75330 (CimfsInitialize.c)
 *     BapdpRegisterFwUpdateResults @ 0x140B98A14 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
 * Callees:
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
