/*
 * XREFs of ZwOpenSection @ 0x14041BE40
 * Callers:
 *     DifZwOpenSectionWrapper @ 0x140622730 (DifZwOpenSectionWrapper.c)
 *     NtGetNlsSectionPtr @ 0x140784CB0 (NtGetNlsSectionPtr.c)
 *     EmpMapPhysicalAddress @ 0x140B0DAC4 (EmpMapPhysicalAddress.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B17304 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess);
}
