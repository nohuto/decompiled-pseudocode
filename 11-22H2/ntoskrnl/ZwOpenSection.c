/*
 * XREFs of ZwOpenSection @ 0x14041AD80
 * Callers:
 *     DifZwOpenSectionWrapper @ 0x1405F25F0 (DifZwOpenSectionWrapper.c)
 *     NtGetNlsSectionPtr @ 0x1407A23B0 (NtGetNlsSectionPtr.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B3A520 (CmpInitializeMachineDependentConfiguration.c)
 *     EmpMapPhysicalAddress @ 0x140B93E6C (EmpMapPhysicalAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
