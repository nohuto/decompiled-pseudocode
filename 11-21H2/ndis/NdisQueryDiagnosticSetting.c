/*
 * XREFs of NdisQueryDiagnosticSetting @ 0x1C0122770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C002F054 (WPP_RECORDER_SF_S.c)
 *     wcscmp_0 @ 0x1C003601D (wcscmp_0.c)
 *     WPP_RECORDER_SF_SD @ 0x1C006CFE8 (WPP_RECORDER_SF_SD_ea_1C006CFE8.c)
 */

__int64 __fastcall NdisQueryDiagnosticSetting(const wchar_t *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-28h]

  if ( !wcscmp_0(a1, L"NblTracking") )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 8), v2, v3, 0xFu, v7, a1);
    return *(unsigned int *)ndisNblTrackerMode;
  }
  else if ( !wcscmp_0(a1, L"OidWatchdogTimeout") )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 0x10u, v7, a1);
    return 270000LL;
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0x1Bu,
        0x11u,
        (struct _GUID *)&WPP_44b390fadec23ba9bcae0cc9320a34b9_Traceguids,
        a1);
    return 0xFFFFFFFFLL;
  }
}
