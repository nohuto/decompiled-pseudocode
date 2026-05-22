/*
 * XREFs of ?CreateBatchSetImpl@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@I@Z @ 0x18015AE8C
 * Callers:
 *     ?Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x1800197B0 (-Start@KeyFrameAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVCompositionBatch@234@@Z @ 0x18001AB58 (-CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVComposit.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

void __fastcall Windows::UI::Composition::BatchController::CreateBatchSetImpl(
        Windows::UI::Composition::BatchController *this,
        struct Windows::UI::Composition::BatchSet **a2,
        int a3)
{
  DWORD CurrentThreadId; // ebp
  struct Windows::UI::Composition::BatchSet *v7; // rax
  __int64 v8; // rdx
  __int64 i; // rcx

  *a2 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v7 = (struct Windows::UI::Composition::BatchSet *)DefaultHeap::Alloc(8LL * (unsigned int)(a3 - 1) + 16);
  *a2 = v7;
  if ( !v7 )
    Microsoft::WRL2::FailFast::Do();
  *(_DWORD *)v7 = 1;
  v8 = 0LL;
  *((_DWORD *)v7 + 1) = a3;
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 192) )
  {
    if ( *(_DWORD *)(i + 136) == CurrentThreadId )
    {
      *((_QWORD *)v7 + v8 + 1) = i;
      v8 = (unsigned int)(v8 + 1);
    }
  }
}
