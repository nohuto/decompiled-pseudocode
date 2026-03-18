/*
 * XREFs of ViGetAdapterInformation @ 0x140AC9E2C
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405CE7E0 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140AC9E44 (ViGetAdapterInformationInternal.c)
 */

__int64 __fastcall ViGetAdapterInformation(int a1)
{
  return ViGetAdapterInformationInternal(a1);
}
