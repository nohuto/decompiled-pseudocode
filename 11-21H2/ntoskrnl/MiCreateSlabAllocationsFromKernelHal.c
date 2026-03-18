/*
 * XREFs of MiCreateSlabAllocationsFromKernelHal @ 0x140B06C30
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiActOnLargeKernelHalPages @ 0x14082BA68 (MiActOnLargeKernelHalPages.c)
 */

__int64 MiCreateSlabAllocationsFromKernelHal()
{
  __int64 result; // rax
  int v1; // ecx

  result = MiActOnLargeKernelHalPages(
             *(_QWORD *)(qword_140C4F4D0 + 48),
             (__int64 (__fastcall *)(unsigned __int64, __int64))MiCreateKernelHalSlabRange);
  if ( (int)result >= 0 )
  {
    v1 = dword_140C54F84 | 0x10;
    dword_140C54F84 |= 0x10u;
    if ( (MiFlags & 0x4000) != 0 )
      dword_140C54F84 = v1 | 8;
    return 0LL;
  }
  return result;
}
