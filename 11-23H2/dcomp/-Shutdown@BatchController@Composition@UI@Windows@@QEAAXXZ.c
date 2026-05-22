/*
 * XREFs of ?Shutdown@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x18001C940
 * Callers:
 *     ?PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x18001C73C (-PostDestroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?ClearList@BatchController@Composition@UI@Windows@@AEAAXAEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x18001C988 (-ClearList@BatchController@Composition@UI@Windows@@AEAAXAEAV-$RefPtr@VCompositionBatch@Compositi.c)
 */

void __fastcall Windows::UI::Composition::BatchController::Shutdown(Windows::UI::Composition::BatchController *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  Windows::UI::Composition::BatchController::ClearList(this, (char *)this + 32);
  Windows::UI::Composition::BatchController::ClearList(v2, (char *)this + 40);
  Windows::UI::Composition::BatchController::ClearList(v3, (char *)this + 48);
  Windows::UI::Composition::BatchController::ClearList(v4, (char *)this + 56);
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
}
