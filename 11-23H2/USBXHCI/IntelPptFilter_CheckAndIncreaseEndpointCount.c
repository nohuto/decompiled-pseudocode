/*
 * XREFs of IntelPptFilter_CheckAndIncreaseEndpointCount @ 0x1C007C020
 * Callers:
 *     IntelPptFilter_FilterCommand @ 0x1C007C100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007C2F8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 */

char __fastcall IntelPptFilter_CheckAndIncreaseEndpointCount(__int64 a1, int a2)
{
  int v2; // eax
  int v4; // edi
  char v6; // [rsp+30h] [rbp-18h]

  v2 = *(_DWORD *)(a1 + 48);
  v4 = v2 + a2;
  if ( (unsigned int)(v2 + a2) > 0x40 )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = v2 + a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      a2,
      16,
      13,
      (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids,
      v2,
      v6);
  }
  *(_DWORD *)(a1 + 48) = v4;
  return 1;
}
