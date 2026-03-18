/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x140396674
 * Callers:
 *     IoConfigureCrashDump @ 0x14054F964 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14083459C (IoInitializeCrashDump.c)
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
