/*
 * XREFs of VfSuspectApplyDifVolatileVerification @ 0x140ADA2A8
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140ACA2F8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4B8 (VfDriverEnableVerifier.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     VfTargetReplaceIoCallbacks @ 0x1405CF7C8 (VfTargetReplaceIoCallbacks.c)
 *     VfDifCallbackReplacementRequested @ 0x1405D2144 (VfDifCallbackReplacementRequested.c)
 *     VfDriverLock @ 0x140ACA75C (VfDriverLock.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACB430 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140ACB4A0 (VfTargetDriversEnableVerifier.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2EC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADB46C (VfThunkApplyWdmThunkToAllSession.c)
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
