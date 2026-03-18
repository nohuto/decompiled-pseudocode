/*
 * XREFs of ZwSetInformationKey @ 0x14041E240
 * Callers:
 *     DifZwSetInformationKeyWrapper @ 0x1405F70A0 (DifZwSetInformationKeyWrapper.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140687DC0 (IopApplyMutableTagToRegistryKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140A2AA20 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140A2AA90 (CmpDoReDoSetLastWriteTime.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&KeySetInformationClass);
}
