/*
 * XREFs of PopPepUpdateIdleState @ 0x1403109B8
 * Callers:
 *     PopPepUpdateConstraints @ 0x14028D234 (PopPepUpdateConstraints.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x140310800 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x1403108C0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepIdleTimeoutRoutine @ 0x1403552F0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetLatency @ 0x14035B570 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14035DE60 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetResidency @ 0x1403B3D44 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14059ECB0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     PopPepGetComponentPreferedIdleState @ 0x140310A18 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepTriggerActivity @ 0x1403140FC (PopPepTriggerActivity.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    if ( a3 )
      LODWORD(result) = result | 0x80000000;
    return PopPepTriggerActivity(a1, a2, 1LL, (unsigned int)result);
  }
  return result;
}
