/*
 * XREFs of ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78
 * Callers:
 *     ?Destroy@CompositorController@Core@Composition@UI@Windows@@UEAAXXZ @ 0x18000F1F0 (-Destroy@CompositorController@Core@Composition@UI@Windows@@UEAAXXZ.c)
 *     ??1CompositorController@Core@Composition@UI@Windows@@UEAA@XZ @ 0x180010194 (--1CompositorController@Core@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?PostDestroy@Compositor@Composition@UI@Windows@@MEAAXXZ @ 0x18001C650 (-PostDestroy@Compositor@Composition@UI@Windows@@MEAAXXZ.c)
 *     ?RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@PEAUIUnknown@@PEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001CFA4 (-RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PE.c)
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 *     ?ActivateInstance@CompositorFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18003C560 (-ActivateInstance@CompositorFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@6@$$QEAPEAUICoreWindow@Core@56@$$QEA$$T3$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003C6E8 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PE.c)
 *     ?RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@5@PEAUICoreWindow@245@@Z @ 0x18003C96C (-RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQu.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4@AEAPEAUICoreWindow@Core@34@$$TPEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@AEAPEAUIDispatcherQueue@System@6@AEAPEAUICoreWindow@Core@56@$$QEA$$T$$QEAPEAVCompositorController@Core@456@$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003CAC0 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4.c)
 *     ??1Compositor@Composition@UI@Windows@@MEAA@XZ @ 0x18003DDEC (--1Compositor@Composition@UI@Windows@@MEAA@XZ.c)
 *     ??1CompositorCommon@Composition@UI@Windows@@MEAA@XZ @ 0x18003DE20 (--1CompositorCommon@Composition@UI@Windows@@MEAA@XZ.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEA$$T111$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003E174 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@Comp.c)
 *     ?Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180064ED0 (-Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionIslandEnvironment@Composition@UI@Windows@@V1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionIslandEnvironment@Composition@UI@Windows@@@Z @ 0x18006C290 (--$MakeAndInitialize2@VCompositionIslandEnvironment@Composition@UI@Windows@@V1234@@Details@WRL2@.c)
 *     ?CreateAsync@HolographicCompositorStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@345@U_GUID@@IPEAPEAU?$IAsyncOperation@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180116350 (-CreateAsync@HolographicCompositorStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@.c)
 *     ?CreateAsyncWithRefreshRate@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@345@U_GUID@@MPEAPEAU?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180119810 (-CreateAsyncWithRefreshRate@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows.c)
 *     ??1CompObjectDiagnosticsPrincipal@@EEAA@XZ @ 0x18019C7F0 (--1CompObjectDiagnosticsPrincipal@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease(
        Microsoft::WRL2::NestableRuntimeClass **a1)
{
  Microsoft::WRL2::NestableRuntimeClass *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v1);
  }
  return result;
}
