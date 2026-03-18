/*
 * XREFs of ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18023F86C
 * Callers:
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1802388F0 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x18009746C (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x1800998E8 (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FC824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x18023EE4C (--$_Emplace_reallocate@AEAPEAV-$CWeakReference@VCResource@@@@AEAI@-$vector@U-$pair@PEAV-$CWeakRe.c)
 */

__int64 __fastcall CBaseExpression::RegisterIndirectTarget(struct CBaseExpression *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  CExpressionManager *v7; // rsi
  int inserted; // eax
  __int64 v9; // rcx
  int v10; // edi
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h]
  __int64 v15; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  v17 = a2;
  v3 = *((_QWORD *)a1 + 2);
  v15 = 0LL;
  v13 = a2;
  v14 = a3;
  v7 = *(CExpressionManager **)(v3 + 424);
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(v7, (struct CTargetMapEntry *)&v13, a1, 0LL);
  v10 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, inserted, 0xBDu, 0LL);
  }
  else
  {
    *((_BYTE *)v7 + 448) |= 4u;
    v10 = 0;
  }
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&v13);
  if ( v10 >= 0 )
  {
    v12 = *((_QWORD *)a1 + 39);
    if ( v12 == *((_QWORD *)a1 + 40) )
    {
      std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
        (__int128 **)a1 + 38,
        (char *)v12,
        &v17,
        &v18);
    }
    else
    {
      *(_QWORD *)v12 = a2;
      *(_DWORD *)(v12 + 8) = a3;
      *((_QWORD *)a1 + 39) += 16LL;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x118,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\baseexpression.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
}
