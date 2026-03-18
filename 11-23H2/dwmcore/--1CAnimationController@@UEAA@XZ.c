/*
 * XREFs of ??1CAnimationController@@UEAA@XZ @ 0x180022BA4
 * Callers:
 *     ??_GCAnimationController@@UEAAPEAXI@Z @ 0x180022B60 (--_GCAnimationController@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterBatchProcessingCompleteListener@CExpressionManager@@QEAAXPEAVIBatchProcessingCompleteListener@@@Z @ 0x180023464 (-UnRegisterBatchProcessingCompleteListener@CExpressionManager@@QEAAXPEAVIBatchProcessingComplete.c)
 */

void __fastcall CAnimationController::~CAnimationController(CAnimationController *this)
{
  *(_QWORD *)this = &CAnimationController::`vftable'{for `CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>'};
  *((_QWORD *)this + 14) = &CAnimationController::`vftable'{for `IBatchProcessingCompleteListener'};
  CExpressionManager::UnRegisterBatchProcessingCompleteListener(
    *(CExpressionManager **)(*((_QWORD *)this + 2) + 424LL),
    (struct IBatchProcessingCompleteListener *)(((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::~CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>(this);
}
