/*
 * XREFs of ?SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIAnimationObject@234@@Z @ 0x18003FA48
 * Callers:
 *     ?SetExpressionReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIAnimationObject@345@@Z @ 0x18003F9D0 (-SetExpressionReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ?Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x180029C40 (-Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSes.c)
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 *     ??4?$ComPtr@UIAnimationObject@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAnimationObject@Composition@UI@Windows@@@Z @ 0x18004164C (--4-$ComPtr@UIAnimationObject@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAnimation.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008286C (-InternalUnlock@-$RefPtr@VCompositionObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::SetExpressionReferenceParameter(
        struct Microsoft::WRL2::ContextSession **this,
        HSTRING a2,
        struct Windows::UI::Composition::IAnimationObject *a3)
{
  unsigned int v3; // edi
  ParameterEntry *v6; // rbx
  struct Microsoft::WRL2::ContextSession *v7; // rdx
  bool v9; // [rsp+60h] [rbp+18h] BYREF
  ParameterEntry *v10; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v10 = 0LL;
  v9 = 0;
  if ( a3 )
  {
    Windows::UI::Composition::CompositionAnimation::GetElementForKey(
      (Windows::UI::Composition::CompositionAnimation *)this,
      a2,
      1,
      &v10,
      &v9);
    v6 = v10;
    Windows::UI::Composition::CompositionAnimation::OnParameterEntryChange(
      (Windows::UI::Composition::CompositionAnimation *)this,
      v10,
      v9);
    ParameterEntry::ClearMatrixValue(v6);
    *((_DWORD *)v6 + 2) = 0;
    *((_DWORD *)v6 + 8) = 2;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionObject>::InternalUnlock((char *)v6 + 16);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::IAnimationObject>::operator=((char *)v6 + 24, a3);
    v7 = this[3];
    ++*((_DWORD *)this + 76);
    Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Reset(
      (Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache *)(this + 39),
      v7);
  }
  else
  {
    v3 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0x117u);
  }
  return v3;
}
