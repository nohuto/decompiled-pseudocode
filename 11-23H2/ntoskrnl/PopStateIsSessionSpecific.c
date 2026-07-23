/*
 * XREFs of PopStateIsSessionSpecific @ 0x140783178
 * Callers:
 *     PopSetPowerSettingValue @ 0x140782BE8 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x14078307C (PopFindPowerSettingConfiguration.c)
 *     PopGetListHead @ 0x140783104 (PopGetListHead.c)
 *     PopGetSettingNotificationName @ 0x140783270 (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7250 (PoRegisterPowerSettingCallback.c)
 *     PopSetNewPolicyValue @ 0x14082C7FC (PopSetNewPolicyValue.c)
 * Callees:
 *     <none>
 */

char __fastcall PopStateIsSessionSpecific(_QWORD *a1)
{
  char v1; // dl
  GUID **v2; // r10
  unsigned int v3; // r9d
  __int64 v4; // r8

  v1 = 0;
  v2 = PopSessionSpecificGuids;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)&(*v2)->Data1 - *a1;
    if ( !v4 )
      v4 = *(_QWORD *)(*v2)->Data4 - a1[1];
    if ( !v4 )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 2 )
      return v1;
  }
  return 1;
}
