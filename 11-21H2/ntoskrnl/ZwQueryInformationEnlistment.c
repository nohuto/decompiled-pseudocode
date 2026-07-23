/*
 * XREFs of ZwQueryInformationEnlistment @ 0x14041E160
 * Callers:
 *     sub_140624670 @ 0x140624670 (sub_140624670.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, *(_QWORD *)&EnlistmentInformationClass);
}
