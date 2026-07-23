/*
 * XREFs of ZwSetInformationEnlistment @ 0x14041DB20
 * Callers:
 *     DifZwSetInformationEnlistmentWrapper @ 0x1405F6D60 (DifZwSetInformationEnlistmentWrapper.c)
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
