/*
 * XREFs of PspFindVsmEnclaveThread @ 0x1408826B4
 * Callers:
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E2E00 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405E33F8 (PsLoadVsmEnclaveData.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409ADDA4 (PspProcessDynamicEHContinuationTargets.c)
 *     PsCallEnclave @ 0x1409B35D0 (PsCallEnclave.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x1409BFCA0 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlpFindDynamicEHContinuationTarget @ 0x1409C019C (RtlpFindDynamicEHContinuationTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspFindVsmEnclaveThread(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
