/*
 * XREFs of ObQueryNameString @ 0x14075B560
 * Callers:
 *     IoDeleteDevice @ 0x1403050A0 (IoDeleteDevice.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035FAB4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x1403C77A0 (IopGetFileVolumeNameInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B893C (SeSetLearningModeObjectInformation.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB784 (SmKmEtwAppendObjectName.c)
 *     IopCaptureObjectName @ 0x140A9E630 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140AA6120 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140ADCB70 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14075B9E4 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
