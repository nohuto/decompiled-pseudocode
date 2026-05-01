/*
 * XREFs of ?_GetAnimationType@CDropFeedbackItem@@AEAA?AW4DCompThumbnailAnimation@@XZ @ 0x1805392CC
 * Callers:
 *     ?Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z @ 0x180539210 (-Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z.c)
 *     ?UpdateGutters@CDropFeedbackItem@@UEAAJXZ @ 0x180539240 (-UpdateGutters@CDropFeedbackItem@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDropFeedbackItem::_GetAnimationType(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 72);
  result = 0LL;
  if ( (v1 & 0x100) != 0 )
    return 5LL;
  if ( (v1 & 8) != 0 )
    return 6LL;
  if ( (v1 & 0x400000) != 0 )
    return 18LL;
  if ( (v1 & 0x10) != 0 )
    return 1LL;
  if ( (v1 & 0x1000) != 0 )
    return 3LL;
  if ( (v1 & 0x20) != 0 )
    return 2LL;
  if ( (v1 & 0x200000) != 0 )
    return 17LL;
  return result;
}
