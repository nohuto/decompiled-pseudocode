/*
 * XREFs of ZwSetInformationEnlistment @ 0x14041EB60
 * Callers:
 *     sub_140627040 @ 0x140627040 (sub_140627040.c)
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
  return sub_140433F80(EnlistmentHandle, *(_QWORD *)&EnlistmentInformationClass);
}
