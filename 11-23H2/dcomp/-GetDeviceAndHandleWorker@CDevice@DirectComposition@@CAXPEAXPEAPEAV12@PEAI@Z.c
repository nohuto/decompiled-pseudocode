/*
 * XREFs of ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C
 * Callers:
 *     ?CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z @ 0x180004238 (-CResorceProxy_SetContent@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIUnknown@@@Z.c)
 *     ?SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z @ 0x18000EE84 (-SetAnimationProperty@CResourceProxy@DirectComposition@@QEAAJIPEAUIDCompositionAnimation@@@Z.c)
 *     ?RemoveAllVisuals@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJXZ @ 0x18000F3D0 (-RemoveAllVisuals@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJXZ.c)
 *     ?CResorceProxy_AddVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@H1@Z @ 0x18000F888 (-CResorceProxy_AddVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@H1@.c)
 *     ?SetInput@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAX@Z @ 0x18000F9A0 (-SetInput@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAX@Z.c)
 *     ?IsVersionSupported@DirectComposition@@YA_NPEAUIUnknown@@W4DeviceVersion@1@@Z @ 0x180011F64 (-IsVersionSupported@DirectComposition@@YA_NPEAUIUnknown@@W4DeviceVersion@1@@Z.c)
 *     ?GetDesktopDevicePartner@CSharedTarget@Composition@UI@Windows@@SAJPEAUIUnknown@@PEAPEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180016250 (-GetDesktopDevicePartner@CSharedTarget@Composition@UI@Windows@@SAJPEAUIUnknown@@PEAPEAUIDComposi.c)
 *     ??0CPrimitiveGroup@DirectComposition@@IEAA@PEAVCPrimitiveGroupProxy@1@@Z @ 0x1800180E0 (--0CPrimitiveGroup@DirectComposition@@IEAA@PEAVCPrimitiveGroupProxy@1@@Z.c)
 *     ?_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUIDCompositionInteractionConfigurationPartner@@W4Enum@InteractionProperty@@@Z @ 0x180024118 (-_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUI.c)
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?SetReferenceArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBI_K@Z @ 0x180033800 (-SetReferenceArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBI_K@Z.c)
 *     ?OpenSharedResourceHandle@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAX@Z @ 0x1800354E0 (-OpenSharedResourceHandle@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAX@Z.c)
 *     ?SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestructionObject@2@@Z @ 0x180063C1C (-SetDeletedNotificationTag@CResourceProxy@DirectComposition@@SAXPEAUIUnknown@@PEAVCDelayedDestru.c)
 *     ?GetManipulationTransformHandle@ManipulationTransform@Composition@UI@Windows@@QEAAIXZ @ 0x18008244C (-GetManipulationTransformHandle@ManipulationTransform@Composition@UI@Windows@@QEAAIXZ.c)
 *     ?SetInteraction@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionInteractionPartner@@@Z @ 0x18008D700 (-SetInteraction@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAU.c)
 *     ?SetTrigger@CAnimationBuilder@DirectComposition@@UEAAJPEAUIDCompositionAnimationTriggerPartner@@@Z @ 0x1800E86C0 (-SetTrigger@CAnimationBuilder@DirectComposition@@UEAAJPEAUIDCompositionAnimationTriggerPartner@@.c)
 *     ?EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ @ 0x1800E8AAC (-EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ.c)
 *     ?GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z @ 0x1800E8BF0 (-GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z.c)
 *     ?ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ @ 0x1800E901C (-ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ.c)
 *     ?CreateSurfaceFromVisualSnapshot@CDevice@DirectComposition@@UEAAJPEAUIDCompositionVisual2@@II_NPEAU_D3DMATRIX@@PEAPEAUIUnknown@@@Z @ 0x1800F0BF0 (-CreateSurfaceFromVisualSnapshot@CDevice@DirectComposition@@UEAAJPEAUIDCompositionVisual2@@II_NP.c)
 *     ?RedirectMouseToHwnd@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUHWND__@@KK@Z @ 0x1800F3BA0 (-RedirectMouseToHwnd@-$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAA.c)
 *     ?RemoveAllVisuals@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJXZ @ 0x1800F3F60 (-RemoveAllVisuals@-$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAA.c)
 *     ?RenderVisual@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z @ 0x1800F40D0 (-RenderVisual@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@IIIIW4DXGI_FORMAT@@PEAPEAX2PEAI@Z.c)
 *     ?SetInput@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAX@Z @ 0x1800F5530 (-SetInput@-$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAX@Z.c)
 *     ?SetInteraction@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAUIDCompositionInteractionPartner@@@Z @ 0x1800F5650 (-SetInteraction@-$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJP.c)
 *     ?ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCompositionColorPartner@@0PEAPEAUIDCompositionPrimitivePartner@@PEAPEAVCBitmapInfoFront@2@3PEAPEAVCVirtualSurface@2@@Z @ 0x1800F6A60 (-ValidatePrimitiveParameters@CDevice@DirectComposition@@AEAAJPEAUIDCompositionSurface@@PEAUIDCom.c)
 *     ??0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z @ 0x1800F7E10 (--0CFilterEffect@DirectComposition@@IEAA@PEAVCFilterEffectProxy@1@@Z.c)
 *     ?SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z @ 0x1800F829C (-SetInput@CFilterEffect@DirectComposition@@QEAAJIPEAUIUnknown@@I@Z.c)
 *     ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0 (-AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z.c)
 *     ?UpdateSegments@CGenericInk@DirectComposition@@UEAAJIPEBEIII@Z @ 0x1800F8BD0 (-UpdateSegments@CGenericInk@DirectComposition@@UEAAJIPEBEIII@Z.c)
 *     ?CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z @ 0x1800F8EA0 (-CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z.c)
 *     ?SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z @ 0x1800FAC8C (-SetHandleArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBQEAXI@Z.c)
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750 (-CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ @ 0x1800FCA3C (-NotifySuperWetInkWork@CSynchronousSuperWetInk@DirectComposition@@AEAAJXZ.c)
 *     ?SetTransformList@CTransform3DGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform3D@@I@Z @ 0x1800FD5A4 (-SetTransformList@CTransform3DGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform3D.c)
 *     ?SetTransformList@CTransformGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform@@I@Z @ 0x1800FD68C (-SetTransformList@CTransformGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform@@I@.c)
 *     ?CResorceProxy_RemoveVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@@Z @ 0x1800FE954 (-CResorceProxy_RemoveVisual@DirectComposition@@YAJPEAVCResourceProxy@1@PEAUIDCompositionVisual@@.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CDevice::GetDeviceAndHandleWorker(
        unsigned __int64 a1,
        struct DirectComposition::CDevice **a2,
        unsigned int *a3)
{
  struct DirectComposition::CDevice **v3; // r9
  unsigned int v4; // eax
  struct DirectComposition::CDevice *v5; // rcx

  v3 = (struct DirectComposition::CDevice **)(a1 & ~(DirectComposition::CProxyTable::s_pageSize - 1));
  if ( v3
    && *(_DWORD *)((a1 & ~(DirectComposition::CProxyTable::s_pageSize - 1)) + 0x10) < 0x100u
    && v3 == *((struct DirectComposition::CDevice ***)&DirectComposition::CProxyTable::s_proxyTableList
             + *(unsigned int *)((a1 & ~(DirectComposition::CProxyTable::s_pageSize - 1)) + 0x10))
    && (((_BYTE)a1 - (_BYTE)v3) & 0xF) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 12);
    v5 = *v3;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
  }
  *a2 = v5;
  *a3 = v4;
}
