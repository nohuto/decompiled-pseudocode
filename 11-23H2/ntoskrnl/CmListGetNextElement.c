/*
 * XREFs of CmListGetNextElement @ 0x140AF56A8
 * Callers:
 *     CmpIsCmRm @ 0x1406981A8 (CmpIsCmRm.c)
 *     CmpLogCheckpoint @ 0x1406989A4 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x140699FE8 (CmSnapshotRMTxArray.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3EDC (CmpIsKeyStackDeleted.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406D52E8 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DB000 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmGetVisibleSubkeyCount @ 0x1407108F8 (CmGetVisibleSubkeyCount.c)
 *     CmpSearchForTrans @ 0x140768924 (CmpSearchForTrans.c)
 *     CmpTransMgrPrepare @ 0x140768C8C (CmpTransMgrPrepare.c)
 *     CmpTransMgrRollback @ 0x1407D0C08 (CmpTransMgrRollback.c)
 *     CmUnRegisterCallback @ 0x140A0F470 (CmUnRegisterCallback.c)
 *     CmpCleanupLightWeightPrepare @ 0x140A1C5A4 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A1C894 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A1CA04 (CmpPrepareLightWeightTransaction.c)
 *     CmpRmAnalysisPhase @ 0x140A1EF04 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140A1F308 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140A2A24C (CmpLightWeightUpdateModificationActions.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140A2A2A8 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD **a1, _QWORD **a2, int a3)
{
  _QWORD *v3; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = *a1;
    *a2 = *a1;
  }
  if ( a1 == v3 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  return (char *)v3 - a3;
}
