/*
 * XREFs of ?EnsureRegisteredInBatch@CompositionPropertyAnimator@Composition@UI@Windows@@MEAAXXZ @ 0x180190720
 * Callers:
 *     ?Start@NaturalMotionAnimator@Composition@UI@Windows@@UEAAJXZ @ 0x1801A1B80 (-Start@NaturalMotionAnimator@Composition@UI@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PEAPEAVBatchController@234@@Z @ 0x18001A958 (-GetBatchController@CompositorCommon@Composition@UI@Windows@@QEAAXW4CompositionBatchTypes@234@PE.c)
 *     ?StoreBatchSetOnObject@BatchController@Composition@UI@Windows@@AEAAXPEAUBatchMember@234@@Z @ 0x18001A98C (-StoreBatchSetOnObject@BatchController@Composition@UI@Windows@@AEAAXPEAUBatchMember@234@@Z.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionPropertyAnimator::EnsureRegisteredInBatch(
        Windows::UI::Composition::CompositionPropertyAnimator *this)
{
  struct Windows::UI::Composition::BatchMember *v2; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v4; // edx
  Windows::UI::Composition::BatchController *v5; // r8
  __int64 i; // rax
  __int64 v7; // rdi
  __int64 *v8; // rsi
  DWORD v9; // eax
  DWORD v10; // edx
  __int64 j; // rax
  Windows::UI::Composition::BatchController *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 152) & 4) == 0 )
  {
    v2 = (Windows::UI::Composition::CompositionPropertyAnimator *)((char *)this + 224);
    Windows::UI::Composition::CompositorCommon::GetBatchController(*((_QWORD *)this + 3), 5, &v12);
    CurrentThreadId = GetCurrentThreadId();
    v4 = CurrentThreadId;
    if ( *(_OWORD *)v2 == 0LL )
    {
      v5 = v12;
      if ( CurrentThreadId == *((_DWORD *)v12 + 16) )
      {
        *(_QWORD *)v2 = *((_QWORD *)v12 + 2) | 1LL;
        *((_QWORD *)v5 + 2) = v2;
      }
      for ( i = *((_QWORD *)v5 + 4); i; i = *(_QWORD *)(i + 192) )
      {
        if ( *(_DWORD *)(i + 136) == v4 )
          ++*(_DWORD *)(i + 140);
      }
      Windows::UI::Composition::BatchController::StoreBatchSetOnObject(
        (struct Windows::UI::Composition::BatchSet **)v5,
        v2);
      if ( (*((_BYTE *)this + 152) & 8) == 0 )
        goto LABEL_21;
      v7 = *((_QWORD *)this + 3);
      v8 = (__int64 *)((char *)this + 240);
      v9 = GetCurrentThreadId();
      v10 = v9;
      if ( !*((_QWORD *)this + 30) && !*((_QWORD *)this + 31) )
      {
        if ( v9 == *(_DWORD *)(v7 + 672) )
        {
          *v8 = *(_QWORD *)(v7 + 624) | 1LL;
          *(_QWORD *)(v7 + 624) = v8;
        }
        for ( j = *(_QWORD *)(v7 + 640); j; j = *(_QWORD *)(j + 192) )
        {
          if ( *(_DWORD *)(j + 136) == v10 )
            ++*(_DWORD *)(j + 140);
        }
        Windows::UI::Composition::BatchController::StoreBatchSetOnObject(
          (struct Windows::UI::Composition::BatchSet **)(v7 + 608),
          (Windows::UI::Composition::CompositionPropertyAnimator *)((char *)this + 240));
LABEL_21:
        *((_BYTE *)this + 152) |= 4u;
        return;
      }
    }
    Microsoft::WRL2::FailFast::Do();
  }
}
