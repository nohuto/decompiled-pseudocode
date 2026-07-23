/*
 * XREFs of PopPepUpdateIdleState @ 0x140310C48
 * Callers:
 *     PopPepUpdateConstraints @ 0x14028D4C4 (PopPepUpdateConstraints.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x140310A90 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentActiveActivity @ 0x140310B50 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepIdleTimeoutRoutine @ 0x140355490 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetLatency @ 0x14035B710 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14035E000 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetResidency @ 0x1403B3F24 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x14059F1A0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     PopPepGetComponentPreferedIdleState @ 0x140310CA8 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepTriggerActivity @ 0x14031438C (PopPepTriggerActivity.c)
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
