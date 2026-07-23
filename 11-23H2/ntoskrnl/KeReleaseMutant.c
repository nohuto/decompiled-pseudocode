/*
 * XREFs of KeReleaseMutant @ 0x1402AFF20
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14020B640 (LdrUnloadAlternateResourceModuleEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140271620 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F7080 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402F7D08 (LdrpGetFromMUIMemCache.c)
 *     EtwpEnableMetaProviderGuid @ 0x14031D23C (EtwpEnableMetaProviderGuid.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403A26D4 (LdrpSetAlternateResourceModuleHandle.c)
 *     DifKeReleaseMutantWrapper @ 0x1405E5170 (DifKeReleaseMutantWrapper.c)
 *     DifKeReleaseMutexWrapper @ 0x1405E52B0 (DifKeReleaseMutexWrapper.c)
 *     EtwpFixBootLoggers @ 0x140B6801C (EtwpFixBootLoggers.c)
 * Callees:
 *     KeReleaseMutantEx @ 0x14041083C (KeReleaseMutantEx.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  KeReleaseMutantEx((ULONG_PTR)Mutant);
  return 0;
}
