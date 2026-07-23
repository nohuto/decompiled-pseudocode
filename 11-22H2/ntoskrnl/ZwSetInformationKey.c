/*
 * XREFs of ZwSetInformationKey @ 0x14041DB80
 * Callers:
 *     DifZwSetInformationKeyWrapper @ 0x1405F7130 (DifZwSetInformationKeyWrapper.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140687DC0 (IopApplyMutableTagToRegistryKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140A2AAD0 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x140A2AB40 (CmpDoReDoSetLastWriteTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
