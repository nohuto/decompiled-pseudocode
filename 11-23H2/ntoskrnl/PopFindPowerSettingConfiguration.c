/*
 * XREFs of PopFindPowerSettingConfiguration @ 0x14078307C
 * Callers:
 *     PopGetPowerSettingValue @ 0x14032CED0 (PopGetPowerSettingValue.c)
 *     PopInitilizeAcDcSettings @ 0x140384A34 (PopInitilizeAcDcSettings.c)
 *     PopSetPowerSettingValue @ 0x140782BE8 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140783270 (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7250 (PoRegisterPowerSettingCallback.c)
 *     PopGetSettingValue @ 0x1407EC470 (PopGetSettingValue.c)
 *     PopQueryPowerSettingUlong @ 0x14098BCCC (PopQueryPowerSettingUlong.c)
 * Callees:
 *     PopGetListHead @ 0x140783104 (PopGetListHead.c)
 *     PopStateIsSessionSpecific @ 0x140783178 (PopStateIsSessionSpecific.c)
 */

__int64 *__fastcall PopFindPowerSettingConfiguration(_QWORD *a1, int a2)
{
  __int64 **ListHead; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx

  ListHead = (__int64 **)PopGetListHead(a1);
  v5 = *ListHead;
  if ( (unsigned __int8)PopStateIsSessionSpecific(a1) )
  {
    while ( v5 != (__int64 *)ListHead )
    {
      if ( *((_DWORD *)v5 + 12) == a2 && (*((_DWORD *)v5 + 13) & 4) == 0 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  else
  {
    while ( v5 != (__int64 *)ListHead )
    {
      v6 = v5[4] - *a1;
      if ( !v6 )
        v6 = v5[5] - a1[1];
      if ( !v6 )
        return v5;
      v5 = (__int64 *)*v5;
    }
  }
  return 0LL;
}
