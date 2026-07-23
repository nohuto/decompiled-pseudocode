/*
 * XREFs of MiSetNonPagedPoolNoSteal @ 0x140641DF8
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x14020D950 (MmBuildMdlForNonPagedPool.c)
 *     MiGetPhysicalAddress @ 0x14028C1B0 (MiGetPhysicalAddress.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiSetNonPagedPoolNoSteal(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v3; // rtt

  result = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  do
  {
    if ( (result & 0x200) != 0 )
      break;
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    v3 = result;
    result = _InterlockedCompareExchange64(a1, result | 0x220, result);
  }
  while ( v3 != result );
  return result;
}
