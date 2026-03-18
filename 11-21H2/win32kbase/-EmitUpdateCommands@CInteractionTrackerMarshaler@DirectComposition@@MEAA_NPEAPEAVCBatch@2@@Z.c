/*
 * XREFs of ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022EE4C (-EmitApplyPositionShift@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F054 (-EmitConfigureInternalProperties@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCB.c)
 *     ?EmitDwmRestartCompleted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F0F8 (-EmitDwmRestartCompleted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F16C (-EmitDwmStarted@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCallbackPropertyIdSet@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F230 (-EmitSetCallbackPropertyIdSet@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F2B4 (-EmitSetInertiaCenterpointAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPE.c)
 *     ?EmitSetInertiaDecayRates@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F3C4 (-EmitSetInertiaDecayRates@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F45C (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F538 (-EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F704 (-EmitSetMaxPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMaxScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F788 (-EmitSetMaxScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F80C (-EmitSetMinPosition@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetMinScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F890 (-EmitSetMinScale@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022F9D8 (-EmitSetRequestedInOrder@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitUpdateCommands(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // bl
  _DWORD *v5; // rcx
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*((_DWORD *)this + 4) & 0x20) != 0 )
  {
    v7 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, (void **)&v7) )
      return v2;
    v5 = v7;
    *v7 = 16;
    *(_QWORD *)(v5 + 1) = 0LL;
    v5[3] = 0;
    v5[1] = 269;
    v5[2] = *((_DWORD *)this + 8);
    v5[3] = *((_DWORD *)this + 16);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  if ( DirectComposition::CInteractionTrackerMarshaler::EmitDwmStarted(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetCallbackPropertyIdSet(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaDecayRates(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMinPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMaxPosition(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMinScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetMaxScale(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetRequestedInOrder(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaCenterpointAnimations(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetInertiaModifierAnimations(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitSetManipulations(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitApplyPositionShift(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitConfigureInternalProperties(this, a2)
    && DirectComposition::CInteractionTrackerMarshaler::EmitDwmRestartCompleted(this, a2) )
  {
    return 1;
  }
  return v2;
}
