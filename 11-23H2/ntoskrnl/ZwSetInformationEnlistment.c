/*
 * XREFs of ZwSetInformationEnlistment @ 0x14041E570
 * Callers:
 *     DifZwSetInformationEnlistmentWrapper @ 0x1405F7240 (DifZwSetInformationEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
