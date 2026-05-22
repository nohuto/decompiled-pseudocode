/*
 * XREFs of ?CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVCompositionBatch@234@@Z @ 0x18001AB58
 * Callers:
 *     ?Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x1800197B0 (-Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?StoreBatchSetOnObject@BatchController@Composition@UI@Windows@@AEAAXPEAUBatchMember@234@@Z @ 0x18001A98C (-StoreBatchSetOnObject@BatchController@Composition@UI@Windows@@AEAAXPEAUBatchMember@234@@Z.c)
 *     ?Start@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x18001AA30 (-Start@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?CreateBatchSetImpl@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@I@Z @ 0x18015AE8C (-CreateBatchSetImpl@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@I@Z.c)
 */

void __fastcall Windows::UI::Composition::BatchController::CreateBatchSet(
        Windows::UI::Composition::BatchController *this,
        struct Windows::UI::Composition::BatchSet **a2,
        struct Windows::UI::Composition::CompositionBatch **a3)
{
  unsigned int v6; // ebx
  DWORD CurrentThreadId; // eax
  __int64 v8; // r9

  *a2 = 0LL;
  *a3 = 0LL;
  v6 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    do
    {
      if ( *(_DWORD *)(v8 + 136) == CurrentThreadId )
      {
        if ( !*a3 )
          *a3 = (struct Windows::UI::Composition::CompositionBatch *)v8;
        ++v6;
      }
      v8 = *(_QWORD *)(v8 + 192);
    }
    while ( v8 );
    if ( v6 > 1 )
      Windows::UI::Composition::BatchController::CreateBatchSetImpl(this, a2, v6);
  }
}
