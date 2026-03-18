/*
 * XREFs of ZwOpenKeyEx @ 0x14041DC40
 * Callers:
 *     DifZwOpenKeyExWrapper @ 0x140621CE0 (DifZwOpenKeyExWrapper.c)
 *     _RegRtlOpenKeyTransacted @ 0x14078003C (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140B30BB0 (MfgInitSystem.c)
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
