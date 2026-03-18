/*
 * XREFs of ObQueryNameString @ 0x14075B370
 * Callers:
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F914 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x1403C75C0 (IopGetFileVolumeNameInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B83CC (SeSetLearningModeObjectInformation.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB214 (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x140A9E7C0 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140AA62B0 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140ADCB80 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14075B7F4 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
