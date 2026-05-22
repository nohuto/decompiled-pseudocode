/*
 * XREFs of ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910
 * Callers:
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 *     ?RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@5@PEAUICoreWindow@245@@Z @ 0x18003C96C (-RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQu.c)
 *     ?RuntimeClassInitialize@CompositionDebugSettings@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18012DB08 (-RuntimeClassInitialize@CompositionDebugSettings@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCo.c)
 *     ?RuntimeClassInitialize@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCompositor@345@@Z @ 0x18018AEA4 (-RuntimeClassInitialize@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAAJPEAVCo.c)
 *     ?RuntimeClassInitialize@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadow@234@@Z @ 0x18018B460 (-RuntimeClassInitialize@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@QEAAJPE.c)
 *     ?RuntimeClassInitialize@CompositionAnimationIterator@Composition@UI@Windows@@QEAAJPEAVCompositionAnimationGroup@234@@Z @ 0x1801955E8 (-RuntimeClassInitialize@CompositionAnimationIterator@Composition@UI@Windows@@QEAAJPEAVCompositio.c)
 *     ?RuntimeClassInitialize@DebugReference@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@PEAVCompositionObject@345@@Z @ 0x18019FAFC (-RuntimeClassInitialize@DebugReference@Private@Composition@UI@Windows@@QEAAJPEAVCompositor@345@P.c)
 *     ?RuntimeClassInitialize@DebugPropertyRegistration@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVDebugReference@Private@234@V?$span@$$CBI$0?0@gsl@@@Z @ 0x18019FBE0 (-RuntimeClassInitialize@DebugPropertyRegistration@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionInteractionSourceCollection@2345@@Z @ 0x1801A21D0 (-RuntimeClassInitialize@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows.c)
 *     ?RuntimeClassInitialize@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@QEAAJPEAVInitialValueExpressionCollection@234@@Z @ 0x1801A260C (-RuntimeClassInitialize@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@QEAAJPEA.c)
 *     ?RuntimeClassInitialize@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAVInitialValueExpressionCollection@234@PEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Z @ 0x1801A2D5C (-RuntimeClassInitialize@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAVInitialV.c)
 *     ?RuntimeClassInitialize@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadow@234@@Z @ 0x1801A3690 (-RuntimeClassInitialize@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@QEAAJ.c)
 *     ?RuntimeClassInitialize@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJPEAVAccessor@VisualUnorderedCollectionImpl@234@PEAV6234@@Z @ 0x1801A3B04 (-RuntimeClassInitialize@VisualUnorderedCollectionIterator@Composition@UI@Windows@@QEAAJPEAVAcces.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize(
        Microsoft::WRL2::ContextRuntimeClass *this,
        struct Microsoft::WRL2::ContextSession *a2)
{
  unsigned int v4; // r8d

  *((_QWORD *)this + 3) = a2;
  if ( a2 != this )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
  v4 = *((_DWORD *)this + 8) & 0xFFFFFF00 | 0x1F;
  *((_DWORD *)this + 8) = v4;
  *((_DWORD *)this + 8) = v4 ^ (*((_DWORD *)a2 + 8) ^ v4) & 0x100;
  return 0LL;
}
