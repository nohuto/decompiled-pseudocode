/*
 * XREFs of ?NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z @ 0x1800B7CC0
 * Callers:
 *     ?Resume@CompositionBatch@Composition@UI@Windows@@QEAAJXZ @ 0x1800B804E (-Resume@CompositionBatch@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z @ 0x18000D204 (-MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV-$RefPtr.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 *     ?InvalidateCurrentScopedSet@BatchController@Composition@UI@Windows@@AEAAXXZ @ 0x18015AF64 (-InvalidateCurrentScopedSet@BatchController@Composition@UI@Windows@@AEAAXXZ.c)
 */

void __fastcall Windows::UI::Composition::BatchController::NotifyBatchResumed(
        Windows::UI::Composition::BatchController *this,
        struct Windows::UI::Composition::CompositionBatch *a2)
{
  __int64 v4; // rax

  if ( *((_DWORD *)a2 + 33) == 1 )
  {
    v4 = 40LL;
  }
  else
  {
    if ( *((_DWORD *)a2 + 33) != 2 )
      Microsoft::WRL2::FailFast::Do();
    v4 = 48LL;
  }
  Windows::UI::Composition::BatchController::MigrateBatch((__int64)this, (__int64)a2, (__int64)this + v4, 0);
  if ( *((_DWORD *)a2 + 34) == *(_DWORD *)(*((_QWORD *)a2 + 3) + 104LL) )
    Windows::UI::Composition::BatchController::InvalidateCurrentScopedSet(this);
}
