/*
 * XREFs of ZwOpenKeyEx @ 0x14041D280
 * Callers:
 *     DifZwOpenKeyExWrapper @ 0x1405F1B40 (DifZwOpenKeyExWrapper.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406CED70 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140B75414 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess);
}
