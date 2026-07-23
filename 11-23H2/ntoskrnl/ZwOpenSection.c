/*
 * XREFs of ZwOpenSection @ 0x14041B7D0
 * Callers:
 *     DifZwOpenSectionWrapper @ 0x1405F2AD0 (DifZwOpenSectionWrapper.c)
 *     NtGetNlsSectionPtr @ 0x1407A2090 (NtGetNlsSectionPtr.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B36E28 (CmpInitializeMachineDependentConfiguration.c)
 *     EmpMapPhysicalAddress @ 0x140B92E6C (EmpMapPhysicalAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
