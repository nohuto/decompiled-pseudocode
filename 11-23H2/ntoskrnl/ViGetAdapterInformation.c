/*
 * XREFs of ViGetAdapterInformation @ 0x140AC8E4C
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405CECC0 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140AC8E64 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall ViGetAdapterInformation(int a1)
{
  return ViGetAdapterInformationInternal(a1);
}
