/*
 * XREFs of IopBugCheckProgressEfiVariableServicesAvailable @ 0x140552964
 * Callers:
 *     IoSaveInitialBugCheckProgress @ 0x1405512B0 (IoSaveInitialBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1405516C4 (IoUpdateBugCheckProgressEnvVariable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KeFrozenProcessorCount @ 0x140577014 (KeFrozenProcessorCount.c)
 */

bool IopBugCheckProgressEfiVariableServicesAvailable()
{
  return BugCheckProgressEfiSafeToCall
      && (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount() <= 1
      && !BugCheckProgressEfiCalled
      && (unsigned __int8)off_140C01D50[0]() == 0;
}
