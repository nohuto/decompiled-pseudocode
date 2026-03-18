/*
 * XREFs of PopLidSwitchReliabilityUpdateCallback @ 0x140828E20
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopBroadcastSessionInfo @ 0x140828EBC (PopBroadcastSessionInfo.c)
 *     PopEvaluatePowerButtonSuppressionState @ 0x1409960C8 (PopEvaluatePowerButtonSuppressionState.c)
 */

__int64 __fastcall PopLidSwitchReliabilityUpdateCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int128 v6; // xmm0
  int v7; // edi
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]

  v4 = *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 == *a1 )
    v4 = *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4 - a1[1];
  v5 = 0;
  if ( !v4 && a3 == 4 && a2 )
  {
    v6 = *(_OWORD *)a1;
    v10 = *a2;
    v9 = v6;
    PopBroadcastSessionInfo(0LL, 20LL, &v9);
    v7 = *a2;
    if ( PopPlatformAoAc )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C20B50);
      BYTE1(PopPowerButtonSuppression) = v7 != 0 ? PopPowerButtonSuppression : 0;
      PopEvaluatePowerButtonSuppressionState();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
