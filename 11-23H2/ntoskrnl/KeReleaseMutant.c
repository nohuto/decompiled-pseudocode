/*
 * XREFs of KeReleaseMutant @ 0x1402AFA30
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B640 (LdrUnloadAlternateResourceModuleEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271390 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeReleaseMutex @ 0x1402AFF70 (KeReleaseMutex.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F6DF0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402F7A78 (LdrpGetFromMUIMemCache.c)
 *     EtwpEnableMetaProviderGuid @ 0x14031CFAC (EtwpEnableMetaProviderGuid.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403A24F4 (LdrpSetAlternateResourceModuleHandle.c)
 *     DifKeReleaseMutantWrapper @ 0x1405E4C00 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x1405E4D40 (DifKeReleaseMutexWrapper.c)
 *     EtwpFixBootLoggers @ 0x140B6801C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutantEx @ 0x1404105DC (KeReleaseMutantEx.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  KeReleaseMutantEx((ULONG_PTR)Mutant);
  return 0;
}
