/*
 * XREFs of PopEsQueueStateEvaluation @ 0x1407EEF7C
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140864350 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsInStandbyEvaluate @ 0x14099A030 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x1407EEF9C (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
