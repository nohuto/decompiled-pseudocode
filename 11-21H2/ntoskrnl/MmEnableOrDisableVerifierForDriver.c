/*
 * XREFs of MmEnableOrDisableVerifierForDriver @ 0x140A812D0
 * Callers:
 *     VfAddVerifierEntry @ 0x140A9C668 (VfAddVerifierEntry.c)
 *     VfVolatileApplyDifVerification @ 0x140A9CA48 (VfVolatileApplyDifVerification.c)
 *     VfVolatileRemoveDifVerification @ 0x140A9CB44 (VfVolatileRemoveDifVerification.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     VfDriverApplyDifVerification @ 0x140A898F0 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140A89AB0 (VfDriverEnableVerifier.c)
 *     VfDriverRemoveDifVerification @ 0x140A89D94 (VfDriverRemoveDifVerification.c)
 */

__int64 __fastcall MmEnableOrDisableVerifierForDriver(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  struct _KTHREAD *Lock; // rbp
  unsigned int v9; // eax

  v3 = 0;
  *a2 = 0;
  Lock = MmAcquireLoadLock();
  if ( (a3 & 1) != 0 )
  {
    v9 = VfDriverEnableVerifier(a1, 0LL, a2);
LABEL_7:
    v3 = v9;
    goto LABEL_8;
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = VfDriverApplyDifVerification(a1, v7, a2);
    goto LABEL_7;
  }
  if ( (a3 & 4) != 0 )
  {
    v9 = VfDriverRemoveDifVerification(a1);
    goto LABEL_7;
  }
LABEL_8:
  MmReleaseLoadLock((__int64)Lock);
  return v3;
}
