/*
 * XREFs of ZwSetInformationObject @ 0x14041B220
 * Callers:
 *     DifZwSetInformationObjectWrapper @ 0x1405F7270 (DifZwSetInformationObjectWrapper.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x140A1A998 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
