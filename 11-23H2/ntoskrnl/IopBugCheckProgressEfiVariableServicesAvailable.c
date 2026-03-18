/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405522A4
 * Callers:
 *     IoSaveInitialBugCheckProgress @ 0x140550BF0 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140551004 (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x140576B24 (KeFrozenProcessorCount.c)
 */

bool IopBugCheckProgressEfiVariableServicesAvailable()
{
  return BugCheckProgressEfiSafeToCall
      && (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount() <= 1
      && !BugCheckProgressEfiCalled
      && (unsigned __int8)off_140C01D50[0]() == 0;
}
