/*
 * XREFs of HalpFreeDrsPool @ 0x140519730
 * Callers:
 *     HalpErrorDeferredHandler @ 0x1405196E0 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1405199D4 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x140519BDC (HalpPmemErrorDeferredRecovery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
