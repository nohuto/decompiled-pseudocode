/*
 * XREFs of ViGetAdapterInformation @ 0x140AC8E5C
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405CE750 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140AC8E74 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall ViGetAdapterInformation(int a1)
{
  return ViGetAdapterInformationInternal(a1);
}
