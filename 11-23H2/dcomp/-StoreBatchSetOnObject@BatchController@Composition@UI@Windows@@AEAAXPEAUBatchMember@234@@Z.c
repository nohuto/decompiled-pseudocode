/*
 * XREFs of ?StoreBatchSetOnObject@BatchController@Composition@UI@Windows@@AEAAXPEAUBatchMember@234@@Z @ 0x18001A98C
 * Callers:
 *     ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z @ 0x180019CDC (-RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 *     ?Start@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x18001AA30 (-Start@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180190720 (-EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     ?CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVCompositionBatch@234@@Z @ 0x18001AB58 (-CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVComposit.c)
 */

void __fastcall Windows::UI::Composition::BatchController::StoreBatchSetOnObject(
        struct Windows::UI::Composition::BatchSet **this,
        struct Windows::UI::Composition::BatchMember *a2)
{
  struct Windows::UI::Composition::BatchSet **v4; // rdi
  struct Windows::UI::Composition::BatchSet *v5; // rax
  __int64 v6; // rax
  struct Windows::UI::Composition::CompositionBatch *v7; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::BatchSet *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  if ( GetCurrentThreadId() == *((_DWORD *)this + 16) )
  {
    v4 = this + 1;
    if ( !this[1] )
      Windows::UI::Composition::BatchController::CreateBatchSet(
        (Windows::UI::Composition::BatchController *)this,
        this + 1,
        &v7);
    v5 = *v4;
    if ( !*v4 )
      goto LABEL_5;
    ++*(_DWORD *)v5;
  }
  else
  {
    Windows::UI::Composition::BatchController::CreateBatchSet(
      (Windows::UI::Composition::BatchController *)this,
      &v8,
      &v7);
    v5 = v8;
  }
  if ( v5 )
  {
    v6 = (unsigned __int64)v5 | 1;
    goto LABEL_6;
  }
LABEL_5:
  v6 = (__int64)v7;
LABEL_6:
  *((_QWORD *)a2 + 1) = v6;
}
