/*
 * XREFs of ZwOpenSection @ 0x14041B440
 * Callers:
 *     DifZwOpenSectionWrapper @ 0x1405F2560 (DifZwOpenSectionWrapper.c)
 *     NtGetNlsSectionPtr @ 0x1407A1EA0 (NtGetNlsSectionPtr.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B36E28 (CmpInitializeMachineDependentConfiguration.c)
 *     EmpMapPhysicalAddress @ 0x140B92E6C (EmpMapPhysicalAddress.c)
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
