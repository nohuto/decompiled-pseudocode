/*
 * XREFs of ndisSriovQueryLuid @ 0x1C0124700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisSriovQueryLuid(__int64 a1, _QWORD *a2)
{
  int v5; // [rsp+30h] [rbp-18h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x6Bu,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1);
  *a2 = *(_QWORD *)(a1 + 4876);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v5 = 0;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x6Cu,
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      a1,
      v5);
  }
  return 0LL;
}
