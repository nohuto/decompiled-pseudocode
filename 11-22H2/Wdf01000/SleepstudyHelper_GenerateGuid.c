/*
 * XREFs of SleepstudyHelper_GenerateGuid @ 0x1C0088894
 * Callers:
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C0079560 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

int __fastcall SleepstudyHelper_GenerateGuid(
        _SleepstudyHelper_Namespace ComponentNamespace,
        unsigned __int64 ComponentUid,
        _GUID *pGuid)
{
  int result; // eax

  if ( !SleepstudyHelperRoutineBlock.GenerateGuid
    || (result = SleepstudyHelperRoutineBlock.GenerateGuid(ComponentNamespace, ComponentUid, pGuid),
        result == -1073741637) )
  {
    result = 0;
    *pGuid = GUID_SLEEPSTUDY_LIBRARY_UNSUPPORTED;
  }
  return result;
}
