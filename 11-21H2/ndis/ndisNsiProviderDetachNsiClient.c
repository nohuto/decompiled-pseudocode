/*
 * XREFs of ndisNsiProviderDetachNsiClient @ 0x1C00B6D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisNsiProviderDetachNsiClient(__int64 a1)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      a1);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0xDu,
        (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
        a1);
  }
  return 0LL;
}
