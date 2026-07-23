/*
 * XREFs of MiCreateSlabAllocationsFromKernelHal @ 0x140B486E4
 * Callers:
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 * Callees:
 *     MiActOnLargeKernelHalPages @ 0x14081E6F8 (MiActOnLargeKernelHalPages.c)
 */

__int64 MiCreateSlabAllocationsFromKernelHal()
{
  int v0; // ebx
  __int64 *i; // rdi
  __int64 result; // rax

  v0 = 0;
  for ( i = &qword_140C65A18; ; ++i )
  {
    result = MiActOnLargeKernelHalPages(
               *(char **)(*i + 48),
               (__int64 (__fastcall *)(char *, char *))MiCreateKernelHalSlabRange);
    if ( (int)result < 0 )
      break;
    if ( ++v0 )
    {
      if ( (MiFlags & 0x4000) != 0 )
        dword_140C6B504 |= 8u;
      return 0LL;
    }
  }
  return result;
}
