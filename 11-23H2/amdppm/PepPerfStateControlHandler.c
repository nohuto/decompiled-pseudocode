/*
 * XREFs of PepPerfStateControlHandler @ 0x1C000B400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004990 (WPP_RECORDER_SF_d.c)
 */

void __fastcall PepPerfStateControlHandler(__int64 a1, __int64 *a2, char a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // [rsp+28h] [rbp-10h]
  char v8; // [rsp+50h] [rbp+18h] BYREF
  char v9; // [rsp+51h] [rbp+19h]
  char v10; // [rsp+52h] [rbp+1Ah]
  char v11; // [rsp+53h] [rbp+1Bh]

  if ( a3 )
  {
    if ( !a4 )
    {
      v4 = *a2;
      v5 = *(_QWORD *)(a1 + 48);
      v8 = BYTE1(*a2);
      v10 = v4;
      v9 = BYTE2(v4);
      v11 = BYTE3(v4);
      v6 = PoFxProcessorNotification(v5, 43LL, &v8);
      if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = v6;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0x26u,
          (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
          v7);
      }
    }
  }
}
