/*
 * XREFs of RegisterHvIdleStates @ 0x1C002F320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     RegisterHvPepIdleStatesV2 @ 0x1C002F3F4 (RegisterHvPepIdleStatesV2.c)
 *     RegisterHvCStates @ 0x1C0039C58 (RegisterHvCStates.c)
 *     RegisterHvLpiStates @ 0x1C003A30C (RegisterHvLpiStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  unsigned __int16 v3; // r9

  v1 = *(_QWORD *)(a1 + 280);
  v2 = 0;
  if ( (v1 & 0xE0000000000LL) != 0 )
  {
    v2 = RegisterHvLpiStates();
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = 10;
LABEL_13:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v3,
        (__int64)&WPP_1134dcafb4bf3ea3981945bba7864b28_Traceguids,
        v2);
    }
  }
  else if ( (v1 & 0x200) != 0 )
  {
    v2 = RegisterHvPepIdleStatesV2();
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = 11;
      goto LABEL_13;
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v2 = RegisterHvCStates();
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = 12;
      goto LABEL_13;
    }
  }
  return (unsigned int)v2;
}
