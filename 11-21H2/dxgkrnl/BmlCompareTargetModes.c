/*
 * XREFs of BmlCompareTargetModes @ 0x1C01B5A18
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C01B55A0 (BmlGetNextBestTargetMode.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlCompareRegionsWithPivot @ 0x1C01B2A10 (BmlCompareRegionsWithPivot.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C01B5B6C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C01BC66C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     BmlCompareTargetModesWithMonitor @ 0x1C01D09E0 (BmlCompareTargetModesWithMonitor.c)
 *     BmlCompareMonitorRegions @ 0x1C03AAF7C (BmlCompareMonitorRegions.c)
 *     BmlCompareWireFormat @ 0x1C03AB024 (BmlCompareWireFormat.c)
 */

__int64 __fastcall BmlCompareTargetModes(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v12; // rcx
  __int64 v13; // r8

  v6 = a3;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( a4 == a5 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    return 0xFFFFFFFFLL;
  if ( !a5 )
    return 1LL;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(120 * v6 + a1 + 16) + 24LL),
           *(_DWORD *)(*(_QWORD *)(120 * v6 + a1 + 16) + 28LL));
  if ( !Path )
    WdLogSingleEntry0(1LL);
  v12 = *((_QWORD *)Path + 12);
  if ( !v12 )
  {
    WdLogSingleEntry0(1LL);
    v12 = *((_QWORD *)Path + 12);
  }
  if ( !*(_QWORD *)(v12 + 96) )
    WdLogSingleEntry0(1LL);
  result = BmlCompareTargetModesWithConstraint(a1, (unsigned __int16)v6, a4, a5);
  if ( !(_DWORD)result )
  {
    LOBYTE(v13) = a6;
    result = BmlCompareTargetModesWithMonitor(a4, a5, v13, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
    if ( !(_DWORD)result )
    {
      result = BmlCompareRegionsWithPivot(
                 (struct _D3DKMDT_2DREGION *)(a4 + 84),
                 (struct _D3DKMDT_2DREGION *)(a5 + 84),
                 (struct _D3DKMDT_2DREGION *)(120 * v6 + a1 + 52));
      if ( !(_DWORD)result )
      {
        result = BmlCompareTargetModeWithVirtualRefreshRate(
                   (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a4 + 72),
                   (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a5 + 72));
        if ( !(_DWORD)result )
        {
          result = BmlCompareMonitorRegions(a4, a5);
          if ( !(_DWORD)result )
            return BmlCompareWireFormat(a4, a5);
        }
      }
    }
  }
  return result;
}
