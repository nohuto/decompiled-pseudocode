/*
 * XREFs of KeReleaseMutant @ 0x1402AFC60
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B660 (LdrUnloadAlternateResourceModuleEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271270 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeReleaseMutex @ 0x1402AFF40 (KeReleaseMutex.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F6DF0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402F7A78 (LdrpGetFromMUIMemCache.c)
 *     EtwpEnableMetaProviderGuid @ 0x14031CDCC (EtwpEnableMetaProviderGuid.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403A1D34 (LdrpSetAlternateResourceModuleHandle.c)
 *     DifKeReleaseMutantWrapper @ 0x1405E4C90 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x1405E4DD0 (DifKeReleaseMutexWrapper.c)
 *     EtwpFixBootLoggers @ 0x140B68B2C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutantEx @ 0x14040FD6C (KeReleaseMutantEx.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  KeReleaseMutantEx((ULONG_PTR)Mutant);
  return 0;
}
