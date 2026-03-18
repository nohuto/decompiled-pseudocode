/*
 * XREFs of ZwSetInformationEnlistment @ 0x14041E1E0
 * Callers:
 *     DifZwSetInformationEnlistmentWrapper @ 0x1405F6CD0 (DifZwSetInformationEnlistmentWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, *(_QWORD *)&EnlistmentInformationClass);
}
