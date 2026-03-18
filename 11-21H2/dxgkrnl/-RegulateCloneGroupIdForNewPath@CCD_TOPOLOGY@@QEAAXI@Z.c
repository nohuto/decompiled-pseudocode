/*
 * XREFs of ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C03A9A88
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0FB0 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03AC838 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(CCD_TOPOLOGY *this, unsigned int a2)
{
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // eax
  _DWORD *v10; // rcx

  *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46) = -1;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, a2);
  *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    LOWORD(v5) = *(_WORD *)(v5 + 20);
  v6 = (unsigned __int16)v5;
  while ( v6 )
  {
    v7 = CCD_TOPOLOGY::GetPathDescriptor(this, --v6);
    if ( (*(_QWORD *)v7 & 0x4000000000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, 4714LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPath->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_CLONE_GROUP_VALID",
        4714LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v8 = *((_QWORD *)this + 8);
    v9 = 0;
    if ( *(_WORD *)(v8 + 20) )
    {
      v10 = (_DWORD *)(v8 + 240);
      while ( *v10 != *(_DWORD *)(296LL * v6 + v8 + 240) )
      {
        ++v9;
        v10 += 74;
        if ( v9 >= *(unsigned __int16 *)(v8 + 20) )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v9 = -559038737;
    }
    *((_DWORD *)v7 + 46) = v9 | 0xFE550000;
  }
}
