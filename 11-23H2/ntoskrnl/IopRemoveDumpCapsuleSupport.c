/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x140396854
 * Callers:
 *     IoConfigureCrashDump @ 0x140550024 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14083489C (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 IopRemoveDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized == 1 )
  {
    if ( CapsuleTriageDumpBlock )
    {
      ExFreePoolWithTag(CapsuleTriageDumpBlock, 0);
      CapsuleTriageDumpBlock = 0LL;
    }
    CapsuleTriageDumpBlockInitialized = 0;
  }
  return 0LL;
}
