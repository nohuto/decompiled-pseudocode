/*
 * XREFs of ??_EPathKeyFrameAnimationResources@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x1801782F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@0@@Z @ 0x180177D90 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCSharedAllocation@DirectComposition@@@WRL@Microsoft@@@.c)
 */

Windows::UI::Composition::PathKeyFrameAnimationResources *__fastcall Windows::UI::Composition::PathKeyFrameAnimationResources::`vector deleting destructor'(
        Windows::UI::Composition::PathKeyFrameAnimationResources *this,
        char a2)
{
  DirectComposition::CDelayedDestructionObject **v4; // rcx

  v4 = (DirectComposition::CDelayedDestructionObject **)*((_QWORD *)this + 1);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<DirectComposition::CSharedAllocation>>>(
      v4,
      *((DirectComposition::CDelayedDestructionObject ***)this + 2));
    std::_Deallocate<16,0>(
      *((void **)this + 1),
      (*((_QWORD *)this + 3) - *((_QWORD *)this + 1)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
