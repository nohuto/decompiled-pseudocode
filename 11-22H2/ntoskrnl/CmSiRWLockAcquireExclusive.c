/*
 * XREFs of CmSiRWLockAcquireExclusive @ 0x14074787C
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x140207D84 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9BBC (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14037483C (CmSiSetProcessWorkingSetMaximum.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF6670 (HvLockHiveFlusherExclusive.c)
 *     CmpDumpKeyToBuffer @ 0x140AF68F4 (CmpDumpKeyToBuffer.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B3B6E8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CmSiRWLockAcquireExclusive(unsigned __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = KeAbPreAcquire((__int64)a1, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (__int64)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
