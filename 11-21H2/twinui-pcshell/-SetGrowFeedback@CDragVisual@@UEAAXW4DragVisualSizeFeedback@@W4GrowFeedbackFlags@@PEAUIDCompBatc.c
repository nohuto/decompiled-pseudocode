/*
 * XREFs of ?SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180533780
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180535948 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 */

__int64 __fastcall CDragVisual::SetGrowFeedback(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  if ( a2 != *(_DWORD *)(a1 + 264) )
  {
    *(_DWORD *)(a1 + 264) = a2;
    return CDragVisual::_UpdateThumbnail(a1 - 24, 16 * (a3 & 1) + 1, 4LL);
  }
  return result;
}
