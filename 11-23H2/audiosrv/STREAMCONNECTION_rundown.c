/*
 * XREFs of STREAMCONNECTION_rundown @ 0x180126290
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 */

__int64 __fastcall STREAMCONNECTION_rundown(_QWORD *a1)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids, a1);
  }
  return ReleaseStreamConnection(a1);
}
