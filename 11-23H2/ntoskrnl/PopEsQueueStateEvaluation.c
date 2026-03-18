/*
 * XREFs of PopEsQueueStateEvaluation @ 0x140870820
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140864B80 (PopEsPowerSettingPolicyCallback.c)
 *     PopBatteryApplyCompositeState @ 0x140870480 (PopBatteryApplyCompositeState.c)
 *     PopEsInStandbyEvaluate @ 0x1409983B0 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x140870840 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
