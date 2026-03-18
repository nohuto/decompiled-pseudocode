/*
 * XREFs of VfSuspectRemoveDifVolatileVerification @ 0x140ADACA4
 * Callers:
 *     VfDriverRemoveAllDifVerification @ 0x1405CEEA0 (VfDriverRemoveAllDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140ACA7A8 (VfDriverRemoveDifVerification.c)
 * Callees:
 *     VfTargetRecoverIoCallbacks @ 0x1405CF204 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACB440 (VfTargetDriversDisableVerifier.c)
 *     VfSuspectDifRemoveEntry @ 0x140ADA37C (VfSuspectDifRemoveEntry.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2FC (VfThunkApplyPristineToAllSession.c)
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
