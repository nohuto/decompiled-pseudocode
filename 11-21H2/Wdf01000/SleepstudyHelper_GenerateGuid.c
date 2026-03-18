/*
 * XREFs of SleepstudyHelper_GenerateGuid @ 0x1C0091024
 * Callers:
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C0089F00 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SleepstudyHelper_GenerateGuid(
        __int64 ComponentNamespace,
        unsigned __int64 ComponentUid,
        _GUID *pGuid)
{
  __int64 result; // rax

  if ( !unk_1C00AB300 || (result = unk_1C00AB300(ComponentNamespace, ComponentUid), (_DWORD)result == -1073741637) )
  {
    result = 0LL;
    *pGuid = GUID_SLEEPSTUDY_LIBRARY_UNSUPPORTED;
  }
  return result;
}
