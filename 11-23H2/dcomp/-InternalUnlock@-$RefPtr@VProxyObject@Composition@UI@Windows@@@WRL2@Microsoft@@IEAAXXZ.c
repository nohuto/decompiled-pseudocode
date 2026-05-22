/*
 * XREFs of ?InternalUnlock@?$RefPtr@VProxyObject@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x1800832B0
 * Callers:
 *     ?Destroy@Visual@Composition@UI@Windows@@UEAAXXZ @ 0x180028340 (-Destroy@Visual@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?OpenSharedResourceHandle@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAX@Z @ 0x1800353E0 (-OpenSharedResourceHandle@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPE.c)
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x18006FFC0 (-SetPropertyChangedListener@Partner@Visual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSIO.c)
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChangeCallbackMapEntry@234@@@QEAAXPEAVPropertyChangeCallbackMapEntry@Composition@UI@Windows@@@Z @ 0x180071CF0 (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChan.c)
 *     ?OpenSharedResourceHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionObject@345@PEAPEAUICompositionHandle@1Handles@Foundation@5@@Z @ 0x180094200 (-OpenSharedResourceHandle@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionObjec.c)
 *     ??1CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAA@XZ @ 0x180123048 (--1CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?GetSharedHandleFromIUnknown_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAUIUnknown@@PEAPEAX@Z @ 0x180128398 (-GetSharedHandleFromIUnknown_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAUIUnknown@@PE.c)
 *     ?OpenSharedResourceHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUICompositionObject@345@PEAPEAX@Z @ 0x180128940 (-OpenSharedResourceHandle@Partner@CompositorCommon@Composition@UI@Windows@@UEAAJPEAUIComposition.c)
 *     ?DebugProperties@Api@CompositionPartnerDebugSettings@Private@Composition@UI@Windows@@UEAAJPEAUICompositionObject@456@PEAUIDebugAnimationCallback@3456@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@6@PEAPEAUIClosable@Foundation@6@@Z @ 0x18012F5B0 (-DebugProperties@Api@CompositionPartnerDebugSettings@Private@Composition@UI@Windows@@UEAAJPEAUIC.c)
 *     ?DebugProperty@Api@CompositionPartnerDebugSettings@Private@Composition@UI@Windows@@UEAAJPEAUICompositionObject@456@PEAUIDebugAnimationCallback@3456@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@6@@Z @ 0x18012F6D0 (-DebugProperty@Api@CompositionPartnerDebugSettings@Private@Composition@UI@Windows@@UEAAJPEAUICom.c)
 *     ??_GSceneModelTransform@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180141AB0 (--_GSceneModelTransform@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ?BindSwapChainSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionSwapChain@234@@Z @ 0x1801594E0 (-BindSwapChainSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionSwapCh.c)
 *     ?Destroy@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAXXZ @ 0x180180DD0 (-Destroy@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x180192C4C (-RuntimeClassInitialize@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAAJPEAVCompositor@3.c)
 *     ?SetTransform@?$SceneModelTransformGeneratedT@VCompositionTransform@Composition@UI@Windows@@@Scenes@Composition@UI@Windows@@QEAAJPEAVComponentTransform3D@345@@Z @ 0x180193048 (-SetTransform@-$SceneModelTransformGeneratedT@VCompositionTransform@Composition@UI@Windows@@@Sce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::ProxyObject>::InternalUnlock(
        volatile signed __int32 **a1,
        __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx

  result = (__int64)a1;
  v3 = *a1;
  if ( v3 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      LOBYTE(a2) = 1;
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 64LL))(v3, a2);
    }
  }
  return result;
}
