/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C0230320
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01F91D0 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C021C050 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C023008C (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C02301C4 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0230060 (IsMFMWFPWindow.c)
 */

__int64 __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx

  result = IsMFMWFPWindow(*a1);
  if ( (_DWORD)result )
    return HMAssignmentUnlock(v2);
  *v2 = 0LL;
  return result;
}
