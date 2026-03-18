/*
 * XREFs of VfSuspectApplyDifVolatileVerification @ 0x140ADA2B8
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140ACA308 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4C8 (VfDriverEnableVerifier.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402AFF70 (KeReleaseMutex.c)
 *     VfTargetReplaceIoCallbacks @ 0x1405CF258 (VfTargetReplaceIoCallbacks.c)
 *     VfDifCallbackReplacementRequested @ 0x1405D1BD4 (VfDifCallbackReplacementRequested.c)
 *     VfDriverLock @ 0x140ACA76C (VfDriverLock.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACB440 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140ACB4B0 (VfTargetDriversEnableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2FC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADB47C (VfThunkApplyWdmThunkToAllSession.c)
 */

__int64 __fastcall VfSuspectApplyDifVolatileVerification(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  int v5; // ebx

  v2 = *(_QWORD *)(a1 + 48);
  VfDriverLock();
  if ( (unsigned int)VfTargetDriversEnableVerifier(v2, a2) )
  {
    v5 = VfThunkApplyWdmThunkToAllSession(a1);
    if ( v5 >= 0 )
    {
      if ( VfDifCallbackReplacementRequested() && (v5 = VfTargetReplaceIoCallbacks(v2), v5 < 0) )
      {
        VfThunkApplyPristineToAllSession(a1);
        VfTargetDriversDisableVerifier();
      }
      else
      {
        ++dword_140C13954;
        ++*(_DWORD *)(a2 + 16);
      }
    }
  }
  else
  {
    v5 = -1073741801;
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v5 >= 0 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return (unsigned int)v5;
}
