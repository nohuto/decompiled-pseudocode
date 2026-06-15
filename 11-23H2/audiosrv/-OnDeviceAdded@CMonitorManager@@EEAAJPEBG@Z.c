/*
 * XREFs of ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x180004D10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceAdded(PVOID pv, const unsigned __int16 *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, 1u, a2);
}
