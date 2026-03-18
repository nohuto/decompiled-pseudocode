/*
 * XREFs of HalpFreeDrsPool @ 0x140519670
 * Callers:
 *     HalpErrorDeferredHandler @ 0x140519620 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x140519914 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x140519B1C (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall HalpFreeDrsPool(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 == -1 )
    {
      ExFreePoolWithTag(a1, 0x61656857u);
    }
    else if ( *a1 == 1 )
    {
      *a1 = 0;
    }
  }
}
