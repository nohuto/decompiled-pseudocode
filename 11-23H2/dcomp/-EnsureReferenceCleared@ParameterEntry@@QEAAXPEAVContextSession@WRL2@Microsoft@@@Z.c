/*
 * XREFs of ?EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x18003E52C
 * Callers:
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ @ 0x18003D0F4 (-ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270 (-Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N@Z @ 0x18003FBF8 (-OnParameterEntryChange@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAVParameterEntry@@_N.c)
 *     ?GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004ECA0 (-GenerateInstance@ExpressionAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@.c)
 *     ?GenerateInstance@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PEAVCompositionObject@234@PEAUHSTRING__@@PEAVSubchannelMaskInfo@@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180052740 (-GenerateInstance@KeyFrameAnimation@Composition@UI@Windows@@UEAAJPEAVCompositionAnimation@234@PE.c)
 *     ?SetReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionObject@345@@Z @ 0x1800595E0 (-SetReferenceParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAU.c)
 * Callees:
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 */

void __fastcall ParameterEntry::EnsureReferenceCleared(
        ParameterEntry *this,
        struct Microsoft::WRL2::ContextSession *a2)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(a2, v4);
  }
  *((_DWORD *)this + 8) = 0;
}
