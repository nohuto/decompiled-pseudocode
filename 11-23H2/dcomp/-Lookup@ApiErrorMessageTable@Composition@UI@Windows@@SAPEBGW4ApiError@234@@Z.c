/*
 * XREFs of ?Lookup@ApiErrorMessageTable@Composition@UI@Windows@@SAPEBGW4ApiError@234@@Z @ 0x18014997C
 * Callers:
 *     ?SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUICompositionBrush@234@@Z @ 0x1800459F0 (-SetSourceParameter@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIComp.c)
 *     ?TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@PEA_N@Z @ 0x18005C740 (-TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject.c)
 *     ?SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z @ 0x180086560 (-SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z.c)
 *     ?OriginateExpressionErrorInfo@Composition@UI@Windows@@YAXPEAUExpressionErrorInfo@123@PEBG@Z @ 0x1801499B4 (-OriginateExpressionErrorInfo@Composition@UI@Windows@@YAXPEAUExpressionErrorInfo@123@PEBG@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 *     ?ReturnHrMsgInvalidArgument@Composition@UI@Windows@@YAJW4ApiError@123@@Z @ 0x180149B78 (-ReturnHrMsgInvalidArgument@Composition@UI@Windows@@YAJW4ApiError@123@@Z.c)
 *     ?Freeze@CompositionVisualSurface@Composition@UI@Windows@@QEAAJXZ @ 0x180158E54 (-Freeze@CompositionVisualSurface@Composition@UI@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ApiErrorMessageTable::Lookup(int a1)
{
  _QWORD *v1; // rax

  v1 = &Windows::UI::Composition::ApiErrorMessageTable::s_rgEntries;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 2;
    if ( v1 == (_QWORD *)&Windows::UI::Composition::GlobalVisualCapture::s_InterfaceType )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
  }
  return v1[1];
}
