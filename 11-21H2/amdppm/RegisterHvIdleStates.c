/*
 * XREFs of RegisterHvIdleStates @ 0x1C0024720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     GetHvPpmCapabilities @ 0x1C0023DB4 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C0024058 (RegisterHvCStates.c)
 *     RegisterHvLpiStates @ 0x1C002484C (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1C0024CB0 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  unsigned __int16 v4; // r9
  bool v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 280);
  v3 = 0;
  if ( (v1 & 0xE0000000000LL) != 0 )
  {
    v3 = RegisterHvLpiStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_16:
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v4,
        (__int64)&WPP_b02ab77d5f99361f7885e64d10ae00da_Traceguids,
        v3);
    }
  }
  else if ( (v1 & 0x200) != 0 )
  {
    v6 = 0;
    v3 = RegisterHvCStates(a1);
    if ( v3 >= 0 )
    {
      GetHvPpmCapabilities(&v6, 0LL);
      if ( v6 )
        v3 = RegisterVmIdleStates(a1);
    }
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 11;
      goto LABEL_16;
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 12;
      goto LABEL_16;
    }
  }
  return (unsigned int)v3;
}
