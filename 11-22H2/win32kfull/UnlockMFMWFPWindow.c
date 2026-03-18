/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C0216A14
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01D66B0 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FFB10 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0213DC8 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C021675C (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C0216894 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0216738 (IsMFMWFPWindow.c)
 */

char __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  int v1; // eax
  _QWORD *v2; // r8

  LOBYTE(v1) = IsMFMWFPWindow(*a1);
  if ( v1 )
    LOBYTE(v1) = HMAssignmentUnlock(v2);
  else
    *v2 = 0LL;
  return v1;
}
