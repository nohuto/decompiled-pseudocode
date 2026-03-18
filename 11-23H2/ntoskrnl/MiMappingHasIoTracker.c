/*
 * XREFs of MiMappingHasIoTracker @ 0x140335DE4
 * Callers:
 *     MmUnmapIoSpace @ 0x140335CD0 (MmUnmapIoSpace.c)
 *     MmProtectMdlSystemAddress @ 0x14061EDD0 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402848B0 (MI_IS_PHYSICAL_ADDRESS.c)
 */

unsigned __int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v1) >> 9) & 1;
}
