/*
 * XREFs of ZwSetInformationObject @ 0x14041BC70
 * Callers:
 *     DifZwSetInformationObjectWrapper @ 0x1405F7750 (DifZwSetInformationObjectWrapper.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x140A1AB98 (CmpFlushBackupHive.c)
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
