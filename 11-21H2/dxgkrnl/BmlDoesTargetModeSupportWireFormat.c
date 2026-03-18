/*
 * XREFs of BmlDoesTargetModeSupportWireFormat @ 0x1C01BE814
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C01B5890 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C01B5B6C (BmlCompareTargetModesWithConstraint.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C01BD518 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall BmlDoesTargetModeSupportWireFormat(__int64 a1, int a2)
{
  __int64 v2; // rax
  char v3; // si
  unsigned int v4; // ebx
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx
  unsigned __int8 v11; // dl

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 128);
  if ( !v2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = *(_QWORD *)(a1 + 40);
  }
  v7 = *(_QWORD *)(v2 + 112);
  v8 = *(_QWORD *)(v7 + 40);
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    v8 = *(_QWORD *)(v7 + 40);
  }
  v9 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(v8 + 64) + 48);
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    v10 = *(_QWORD *)(v9 + 8);
  }
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v10 + 16)) )
    return (v11 & 0x3F) == 2;
  if ( (v11 & (unsigned __int8)(v4 >> 2) & 0x3F) != 0
    || ((a2 & v4 | ((a2 & v4 | ((a2 & v4) >> 6)) >> 6)) & 0x3F00) != 0
    || (a2 & v4) >= 0x4000000 )
  {
    return 1;
  }
  return v3;
}
