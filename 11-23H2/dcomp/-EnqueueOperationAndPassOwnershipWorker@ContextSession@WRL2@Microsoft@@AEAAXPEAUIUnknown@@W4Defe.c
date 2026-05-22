/*
 * XREFs of ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280
 * Callers:
 *     ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x1800098E0 (-Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x1800099EC (-Destroy@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows.c)
 *     ?DisconnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x180009AB0 (-DisconnectIsland@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEA.c)
 *     ?Destroy@?$ContextEventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x180009BF0 (-Destroy@-$ContextEventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U-$InvokeModeOpt.c)
 *     ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x18000EC20 (-Remove@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@.c)
 *     ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x18000F23C (-Destroy@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI.c)
 *     ?Destroy@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x180010530 (-Destroy@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@ExpressionAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x180029AA0 (-Destroy@ExpressionAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x180029C40 (-Reset@AnimationObjectInfoCache@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAVContextSes.c)
 *     ?Destroy@CompositionBatch@Composition@UI@Windows@@UEAAXXZ @ 0x180029D80 (-Destroy@CompositionBatch@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ @ 0x180029E50 (-Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ @ 0x18002C400 (-FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ @ 0x18003E270 (-Destroy@KeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z @ 0x18003E52C (-EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z.c)
 *     ?SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z @ 0x18004B010 (-SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z.c)
 *     ?InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinition@@PEAVCompositionEasingFunction@234@@Z @ 0x18004BEE0 (-InsertKeyFrameHelper@KeyFrameAnimation@Composition@UI@Windows@@IEAAJMAEAUKeyframeValueDefinitio.c)
 *     ?SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x18005ECE8 (-SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIExpressionAnimation@345@@Z @ 0x18005F160 (-CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING.c)
 *     ?Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180064ED0 (-Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x1800650E8 (-Remove@-$ContextEventSource@U-$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchComplet.c)
 *     ?Destroy@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ @ 0x18008B080 (-Destroy@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Connection_3_ReconfigureOldIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAV1234@_N@Z @ 0x180111CB8 (-Connection_3_ReconfigureOldIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAV1234@.c)
 *     ?Remove@?$ContextEventSource@U?$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@PEAVVisualIslandSiteEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAJPEAVContextSession@23@UEventRegistrationToken@@@Z @ 0x180112F80 (-Remove@-$ContextEventSource@U-$ITypedEventHandler@PEAVVisualIslandSite@Composition@UI@Windows@@.c)
 *     ?SetAutomationHostProvider@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUIInspectable@@@Z @ 0x180113320 (-SetAutomationHostProvider@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJPEAUIInspectab.c)
 *     ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x18013117C (-Destroy@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Inter.c)
 *     ?Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180138B90 (-Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@VisualCapture@Composition@UI@Windows@@UEAAXXZ @ 0x180154D60 (-Destroy@VisualCapture@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?DropCallbacks@CompObjectDiagnosticsPrincipal@@AEAAXXZ @ 0x18019D674 (-DropCallbacks@CompObjectDiagnosticsPrincipal@@AEAAXXZ.c)
 *     ?NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D92C (-NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$span@$.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(__int64 a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rax

  if ( a2 )
  {
    ProcessHeap = GetProcessHeap();
    v5 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v7 = v5;
    if ( !v5 )
      Microsoft::WRL2::FailFast::OutOfMemory(v6);
    v5[1] = 0LL;
    v5[2] = 0LL;
    *v5 = 0LL;
    *v5 = a2;
    *((_DWORD *)v5 + 2) = 0;
    v8 = *(_QWORD *)(a1 + 144);
    if ( v8 )
      *(_QWORD *)(v8 + 16) = v7;
    else
      *(_QWORD *)(a1 + 136) = v7;
    *(_QWORD *)(a1 + 144) = v7;
  }
}
