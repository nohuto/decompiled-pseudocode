/*
 * XREFs of BmlDoesTargetModeSupportWireFormat @ 0x1C016C564
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C016F150 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C01762D4 (BmlCompareTargetModesWithConstraint.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C017793C (BmlDoesTargetModeObeyConstraint.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014680 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C0172110 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall BmlDoesTargetModeSupportWireFormat(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  char v3; // si
  __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned __int8 v8; // dl

  v2 = *(_DWORD *)(a1 + 128);
  v3 = 0;
  if ( !*(_QWORD *)(a1 + 40) )
    WdLogSingleEntry0(1LL);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
  if ( !*(_QWORD *)(v6 + 40) )
    WdLogSingleEntry0(1LL);
  v7 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v6 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v7 + 8) )
    WdLogSingleEntry0(1LL);
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(*(_QWORD *)(v7 + 8) + 16LL)) )
    return (v8 & 0x3F) == 2;
  if ( (v8 & (unsigned __int8)(v2 >> 2) & 0x3F) != 0
    || ((a2 & v2 | ((a2 & v2 | ((a2 & v2) >> 6)) >> 6)) & 0x3F00) != 0
    || (a2 & v2) >= 0x4000000 )
  {
    return 1;
  }
  return v3;
}
