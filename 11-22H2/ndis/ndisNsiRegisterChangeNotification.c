/*
 * XREFs of ndisNsiRegisterChangeNotification @ 0x1C011B730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisNsiRegisterChangeNotification(__int64 a1)
{
  char v1; // bl
  int v3; // [rsp+30h] [rbp-18h]

  v1 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      a1);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v3 = 0;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x16u,
        0x15u,
        (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
        v1,
        v3);
    }
  }
  return 0LL;
}
