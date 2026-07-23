/*
 * XREFs of VfSuspectRemoveDifVolatileVerification @ 0x140ADAC94
 * Callers:
 *     VfDriverRemoveAllDifVerification @ 0x1405CF410 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140ACA798 (VfDriverRemoveDifVerification.c)
 * Callees:
 *     VfTargetRecoverIoCallbacks @ 0x1405CF774 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACB430 (VfTargetDriversDisableVerifier.c)
 *     VfSuspectDifRemoveEntry @ 0x140ADA36C (VfSuspectDifRemoveEntry.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2EC (VfThunkApplyPristineToAllSession.c)
 */

__int64 __fastcall VfSuspectRemoveDifVolatileVerification(__int64 a1)
{
  int v2; // edi

  VfTargetRecoverIoCallbacks(*(_QWORD *)(a1 + 48));
  v2 = VfThunkApplyPristineToAllSession(a1);
  if ( v2 >= 0 )
  {
    VfTargetDriversDisableVerifier();
    VfSuspectDifRemoveEntry((const UNICODE_STRING *)(a1 + 88));
    ++dword_140C13958;
    *(_DWORD *)(a1 + 104) &= ~0x2000000u;
  }
  return (unsigned int)v2;
}
