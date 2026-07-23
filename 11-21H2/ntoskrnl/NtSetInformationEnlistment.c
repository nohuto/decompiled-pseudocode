/*
 * XREFs of NtSetInformationEnlistment @ 0x1403DFDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtSetInformationEnlistment(
        HANDLE EnlistmentHandle,
        ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
        PVOID EnlistmentInformation,
        ULONG EnlistmentInformationLength)
{
  return NtSetInformationEnlistment_0(
           EnlistmentHandle,
           EnlistmentInformationClass,
           EnlistmentInformation,
           EnlistmentInformationLength);
}
