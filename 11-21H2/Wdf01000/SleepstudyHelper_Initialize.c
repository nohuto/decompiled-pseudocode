/*
 * XREFs of SleepstudyHelper_Initialize @ 0x1C00BFA1C
 * Callers:
 *     ?SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z @ 0x1C0089D80 (-SleepStudyEvaluateDripsConstraint@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(SS_LIBRARY__ **InitializeHandle, void *Tag)
{
  NTSTATUS v4; // eax
  unsigned int v5; // r8d

  v4 = RtlRunOnceExecuteOnce(
         &SleepstudyHelperInitializeRunOnce,
         (PRTL_RUN_ONCE_INIT_FN)SleepstudyHelperInitializeOnce,
         0LL,
         0LL);
  v5 = 0;
  if ( v4 >= 0 && unk_1C00AB2F0 )
    return (unsigned int)unk_1C00AB2F0(InitializeHandle, Tag, 0LL);
  else
    *InitializeHandle = (SS_LIBRARY__ *)&SleepstudyHelperUnsupportedHandle;
  return v5;
}
