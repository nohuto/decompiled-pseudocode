/*
 * XREFs of PopSetSystemState @ 0x14058DF1C
 * Callers:
 *     PoSetSystemState @ 0x14058DD70 (PoSetSystemState.c)
 *     PoSetUserPresent @ 0x14058DDC0 (PoSetUserPresent.c)
 *     PopAllowAwayModeSettingCallback @ 0x140864580 (PopAllowAwayModeSettingCallback.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 * Callees:
 *     PopResetIdleTime @ 0x1403B4A68 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x14058DF64 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x1405949E8 (PopDiagTraceSetSystemState.c)
 */

__int64 __fastcall PopSetSystemState(int a1, unsigned int a2)
{
  char v3; // bl
  __int64 result; // rax
  __int64 v5; // rdx

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v3 = a1;
    result = PopDiagTraceSetSystemState();
    if ( (v3 & 1) != 0 )
      result = PopResetIdleTime(3LL, v5);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
