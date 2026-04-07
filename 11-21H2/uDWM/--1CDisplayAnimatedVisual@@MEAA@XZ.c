/*
 * XREFs of ??1CDisplayAnimatedVisual@@MEAA@XZ @ 0x18005ABC8
 * Callers:
 *     ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ @ 0x18005A84C (--1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ.c)
 *     ??_ECDisplayAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B45B0 (--_ECDisplayAnimatedVisual@@MEAAPEAXI@Z.c)
 *     ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800B57F8 (--1CDisplayDisconnectAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B5B6C (--1CDisplayDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B636C (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800B725C (--1CDisplayExtendAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B7CB0 (--1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800B85C4 (--1CDisplayMixedModeAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800BA10C (--1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800BA5B0 (--1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ.c)
 *     ??1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ @ 0x1800BAC3C (--1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0 (--1-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@@Z @ 0x18005AE28 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree.c)
 */

void __fastcall CDisplayAnimatedVisual::~CDisplayAnimatedVisual(CDisplayAnimatedVisual *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CDisplayAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayDisconnectAnimatedVisual::`vftable'{for `IAnimationListener'};
  wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>((__int64 *)this + 52);
  std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Erase_tree<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
    (char *)this + 400,
    (char *)this + 400,
    *(_QWORD *)(*((_QWORD *)this + 50) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 50), 0x28uLL);
  std::_Tree_val<std::_Tree_simple_types<CWindowData *>>::_Erase_tree<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
    (char *)this + 384,
    (char *)this + 384,
    *(_QWORD *)(*((_QWORD *)this + 48) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 48), 0x28uLL);
  v2 = (void *)*((_QWORD *)this + 41);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 43) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual(this);
}
