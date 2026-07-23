/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x1403B3964
 * Callers:
 *     IoConfigureCrashDump @ 0x140550024 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14083489C (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1403B39B8 (IopIsBitlockerOn.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 IopInitDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized || (unsigned __int8)IopIsBitlockerOn() )
    return 0LL;
  CapsuleTriageDumpBlock = (PVOID)ExAllocatePool2(64LL, 268288LL, 1886209091LL);
  if ( CapsuleTriageDumpBlock )
  {
    CapsuleTriageDumpBlockInitialized = 1;
    return 0LL;
  }
  return 3221225626LL;
}
