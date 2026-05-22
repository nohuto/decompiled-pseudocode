/*
 * XREFs of ?EnsureNeedsRebuild@AnimationController@Composition@UI@Windows@@AEAAXXZ @ 0x18000617C
 * Callers:
 *     ?TryGetController@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAPEAVAnimationController@234@@Z @ 0x1800060C0 (-TryGetController@KeyFrameAnimator@Composition@UI@Windows@@UEAAJPEAPEAVAnimationController@234@@.c)
 * Callees:
 *     ?AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x18003BDBC (-AddDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 */

void __fastcall Windows::UI::Composition::AnimationController::EnsureNeedsRebuild(
        Windows::UI::Composition::AnimationController *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 152);
  if ( (v1 & 1) == 0 )
  {
    *((_BYTE *)this + 152) = v1 | 1;
    DirectComposition::CDevice::AddDirtyRebuildableObject(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      (struct DirectComposition::CRebuildableObject *)(((unsigned __int64)this + 136) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  }
}
