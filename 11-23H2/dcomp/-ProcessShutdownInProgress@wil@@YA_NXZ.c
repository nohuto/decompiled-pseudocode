/*
 * XREFs of ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180064534
 * Callers:
 *     ?Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z @ 0x18001DCDC (-Initialize@CDevice@DirectComposition@@AEAAJPEAUIUnknown@@@Z.c)
 *     ??1CDevice@DirectComposition@@QEAA@XZ @ 0x18005E2D8 (--1CDevice@DirectComposition@@QEAA@XZ.c)
 *     ?ScheduleFireEventCallback@ApiTelemetryLogger@details@wil@@AEAAXXZ @ 0x1800644E4 (-ScheduleFireEventCallback@ApiTelemetryLogger@details@wil@@AEAAXXZ.c)
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180065AA8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x180067928 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180068238 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180095890 (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800959C8 (-destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1800E42E4 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1800E4B5C (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800E4CFC (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800E4D90 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ??1ApiTelemetryLogger@details@wil@@EEAA@XZ @ 0x1800ED804 (--1ApiTelemetryLogger@details@wil@@EEAA@XZ.c)
 *     ?FillMeshAttribute@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4SceneAttributeSemantic@3456@W4DirectXPixelFormat@DirectX@Graphics@6@PEAUIMemoryBuffer@Foundation@6@@Z @ 0x180132470 (-FillMeshAttribute@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4SceneAttributeSemantic@34.c)
 *     ?RuntimeClassInitialize@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180132ABC (-RuntimeClassInitialize@SceneMesh@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z.c)
 *     ?get_Bounds@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneBoundingBox@3456@@Z @ 0x180132DC0 (-get_Bounds@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneBoundingBox@3456@@Z.c)
 *     ?get_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAW4DirectXPrimitiveTopology@DirectX@Graphics@6@@Z @ 0x180132E90 (-get_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJPEAW4DirectXPrimitiveTo.c)
 *     ?put_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4DirectXPrimitiveTopology@DirectX@Graphics@6@@Z @ 0x180132F50 (-put_PrimitiveTopology@Api@SceneMesh@Scenes@Composition@UI@Windows@@UEAAJW4DirectXPrimitiveTopol.c)
 *     ?get_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterial@3456@@Z @ 0x180133C20 (-get_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMa.c)
 *     ?get_Mesh@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMesh@3456@@Z @ 0x180133D00 (-get_Mesh@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMesh@3.c)
 *     ?get_UVMappings@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMeshMaterialAttributeMap@3456@@Z @ 0x180133DE0 (-get_UVMappings@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUIScene.c)
 *     ?put_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterial@3456@@Z @ 0x180133EC0 (-put_Material@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMater.c)
 *     ?put_Mesh@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMesh@3456@@Z @ 0x180133FD0 (-put_Mesh@Api@SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMesh@3456.c)
 *     ?RuntimeClassInitialize@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18013F4E0 (-RuntimeClassInitialize@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAAJPEAVC.c)
 *     ?get_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUVector4@Numerics@Foundation@6@@Z @ 0x18013F640 (-get_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAU.c)
 *     ?get_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z @ 0x18013F700 (-get_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPE.c)
 *     ?get_MetallicFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18013F7E0 (-get_MetallicFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAM@.c)
 *     ?get_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneMaterialInput@3456@@Z @ 0x18013F8A0 (-get_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UE.c)
 *     ?get_RoughnessFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAM@Z @ 0x18013F980 (-get_RoughnessFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAM.c)
 *     ?put_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJUVector4@Numerics@Foundation@6@@Z @ 0x18013FA40 (-put_BaseColorFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJUVec.c)
 *     ?put_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x18013FB50 (-put_BaseColorInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUI.c)
 *     ?put_MetallicFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJM@Z @ 0x18013FC90 (-put_MetallicFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?put_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneMaterialInput@3456@@Z @ 0x18013FDA0 (-put_MetallicRoughnessInput@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UE.c)
 *     ?put_RoughnessFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJM@Z @ 0x18013FEE0 (-put_RoughnessFactor@Api@SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAJM@Z.c)
 *     ?FindFirstComponentOfType@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJW4SceneComponentType@3456@PEAPEAUISceneComponent@3456@@Z @ 0x1801422F0 (-FindFirstComponentOfType@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJW4SceneComponentType.c)
 *     ?RuntimeClassInitialize@SceneNode@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x1801440EC (-RuntimeClassInitialize@SceneNode@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z.c)
 *     ?get_Children@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180144940 (-get_Children@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU-$IVector@PEAVSceneNode@S.c)
 *     ?get_Components@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@6@@Z @ 0x180144A30 (-get_Components@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAU-$IVector@PEAVSceneComp.c)
 *     ?get_Parent@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneNode@3456@@Z @ 0x180144C20 (-get_Parent@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneNode@3456@@Z.c)
 *     ?get_Transform@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneModelTransform@3456@@Z @ 0x180144DF0 (-get_Transform@Api@SceneNode@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneModelTransform@345.c)
 *     ?RuntimeClassInitialize@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18014518C (-RuntimeClassInitialize@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAAJPEAVCompos.c)
 *     ?get_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAW4CompositionBitmapInterpolationMode@456@@Z @ 0x180145360 (-get_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJP.c)
 *     ?get_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@456@@Z @ 0x180145420 (-get_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUICompositi.c)
 *     ?get_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAW4SceneWrappingMode@3456@@Z @ 0x180145500 (-get_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAW4SceneW.c)
 *     ?get_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAW4SceneWrappingMode@3456@@Z @ 0x1801455C0 (-get_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAW4SceneW.c)
 *     ?put_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4CompositionBitmapInterpolationMode@456@@Z @ 0x180145680 (-put_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW.c)
 *     ?put_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@456@@Z @ 0x180145750 (-put_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositionS.c)
 *     ?put_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrappingMode@3456@@Z @ 0x180145830 (-put_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrap.c)
 *     ?put_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrappingMode@3456@@Z @ 0x180145900 (-put_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrap.c)
 *     ?RuntimeClassInitialize@SceneVisual@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180145D04 (-RuntimeClassInitialize@SceneVisual@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z.c)
 *     ?get_Root@Api@SceneVisual@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneNode@3456@@Z @ 0x180145DA0 (-get_Root@Api@SceneVisual@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUISceneNode@3456@@Z.c)
 *     ?put_Root@Api@SceneVisual@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneNode@3456@@Z @ 0x180145E80 (-put_Root@Api@SceneVisual@Scenes@Composition@UI@Windows@@UEAAJPEAUISceneNode@3456@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall wil::ProcessShutdownInProgress(wil *this)
{
  char v1; // bl

  v1 = 0;
  if ( wil::details::g_processShutdownInProgress
    || wil::details::g_pfnDllShutdownInProgress && (unsigned __int8)wil::details::g_pfnDllShutdownInProgress(this) )
  {
    return 1;
  }
  return v1;
}
