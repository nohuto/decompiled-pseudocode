/*
 * XREFs of ?Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x180029C40
 * Callers:
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?Destroy@ExpressionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180029AA0 (-Destroy@ExpressionAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ @ 0x18003D0F4 (-ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIAnimationObject@234@@Z @ 0x18003FA48 (-SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__.c)
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004ECA0 (-GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@.c)
 *     ?GenerateInstance@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180052740 (-GenerateInstance@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PE.c)
 *     ?SetReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionObject@345@@Z @ 0x1800595E0 (-SetReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4 (--$_Destroy_range@V-$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUA.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache::Reset(
        Windows::UI::Composition::CompositionAnimation::AnimationObjectInfoCache *this,
        struct Microsoft::WRL2::ContextSession *a2)
{
  __int64 v3; // rsi
  __int64 i; // rdi
  __int64 v6; // rdx

  *((_BYTE *)this + 24) &= 0xFCu;
  v3 = *((_QWORD *)this + 1);
  for ( i = *(_QWORD *)this; i != v3; i += 40LL )
  {
    v6 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(a2, v6);
  }
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(*(Windows::UI::Composition::AnimationObjectInfo **)this);
    *((_QWORD *)this + 1) = *(_QWORD *)this;
    ++*((_DWORD *)this + 7);
  }
}
