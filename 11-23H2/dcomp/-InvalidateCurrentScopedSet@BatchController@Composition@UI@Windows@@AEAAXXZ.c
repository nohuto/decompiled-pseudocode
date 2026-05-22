/*
 * XREFs of ?InvalidateCurrentScopedSet@BatchController@Composition@UI@Windows@@AEAAXXZ @ 0x18015AF64
 * Callers:
 *     ?NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z @ 0x1800B7CC0 (-NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z.c)
 *     ?Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x1800B80E2 (-Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?NotifyBatchEnded@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@_N1@Z @ 0x18015AFF4 (-NotifyBatchEnded@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@_N1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::BatchController::InvalidateCurrentScopedSet(
        Windows::UI::Composition::BatchController *this)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)*((_QWORD *)this + 1);
  if ( v1 )
  {
    --*v1;
    *((_QWORD *)this + 1) = 0LL;
  }
}
