/*
 * XREFs of ?Start@ExpressionAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x18001AA30
 * Callers:
 *     <none>
 * Callees:
 *     ?StoreBatchSetOnObject@BatchController@Composition@UI@Windows@@AEAAXPEAUBatchMember@234@@Z @ 0x18001A98C (-StoreBatchSetOnObject@BatchController@Composition@UI@Windows@@AEAAXPEAUBatchMember@234@@Z.c)
 *     ?CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVCompositionBatch@234@@Z @ 0x18001AB58 (-CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVComposit.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ExpressionAnimator::Start(
        Windows::UI::Composition::ExpressionAnimator *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v5; // ecx
  __int64 i; // rax
  struct Windows::UI::Composition::BatchSet **v7; // r14
  struct Windows::UI::Composition::BatchSet *v8; // rax
  __int64 v9; // rax
  __int64 v11; // rbx
  __int64 *v12; // rsi
  DWORD v13; // eax
  DWORD v14; // edx
  __int64 j; // rax
  struct Windows::UI::Composition::CompositionBatch *v16; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::UI::Composition::BatchSet *v17; // [rsp+48h] [rbp+10h] BYREF

  if ( (*((_BYTE *)this + 152) & 4) == 0 )
  {
    v2 = (__int64 *)((char *)this + 224);
    v3 = *((_QWORD *)this + 3) + 680LL;
    CurrentThreadId = GetCurrentThreadId();
    v5 = CurrentThreadId;
    if ( *v2 || v2[1] )
      goto LABEL_23;
    if ( CurrentThreadId == *(_DWORD *)(v3 + 64) )
    {
      *v2 = *(_QWORD *)(v3 + 16) | 1LL;
      *(_QWORD *)(v3 + 16) = v2;
    }
    for ( i = *(_QWORD *)(v3 + 32); i; i = *(_QWORD *)(i + 192) )
    {
      if ( *(_DWORD *)(i + 136) == v5 )
        ++*(_DWORD *)(i + 140);
    }
    v17 = 0LL;
    v16 = 0LL;
    if ( GetCurrentThreadId() == *(_DWORD *)(v3 + 64) )
    {
      v7 = (struct Windows::UI::Composition::BatchSet **)(v3 + 8);
      if ( !*(_QWORD *)(v3 + 8) )
        Windows::UI::Composition::BatchController::CreateBatchSet(
          (Windows::UI::Composition::BatchController *)v3,
          (struct Windows::UI::Composition::BatchSet **)(v3 + 8),
          &v16);
      v8 = *v7;
      if ( !*v7 )
        goto LABEL_12;
      ++*(_DWORD *)v8;
    }
    else
    {
      Windows::UI::Composition::BatchController::CreateBatchSet(
        (Windows::UI::Composition::BatchController *)v3,
        &v17,
        &v16);
      v8 = v17;
    }
    if ( v8 )
    {
      v9 = (unsigned __int64)v8 | 1;
      goto LABEL_13;
    }
LABEL_12:
    v9 = (__int64)v16;
LABEL_13:
    v2[1] = v9;
    if ( (*((_BYTE *)this + 152) & 8) == 0 )
    {
LABEL_14:
      *((_BYTE *)this + 152) |= 4u;
      return 0LL;
    }
    v11 = *((_QWORD *)this + 3);
    v12 = (__int64 *)((char *)this + 240);
    v13 = GetCurrentThreadId();
    v14 = v13;
    if ( !*((_QWORD *)this + 30) && !*((_QWORD *)this + 31) )
    {
      if ( v13 == *(_DWORD *)(v11 + 672) )
      {
        *v12 = *(_QWORD *)(v11 + 624) | 1LL;
        *(_QWORD *)(v11 + 624) = v12;
      }
      for ( j = *(_QWORD *)(v11 + 640); j; j = *(_QWORD *)(j + 192) )
      {
        if ( *(_DWORD *)(j + 136) == v14 )
          ++*(_DWORD *)(j + 140);
      }
      Windows::UI::Composition::BatchController::StoreBatchSetOnObject(
        (struct Windows::UI::Composition::BatchSet **)(v11 + 608),
        (Windows::UI::Composition::ExpressionAnimator *)((char *)this + 240));
      goto LABEL_14;
    }
LABEL_23:
    Microsoft::WRL2::FailFast::Do();
  }
  return 0LL;
}
