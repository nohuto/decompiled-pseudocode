/*
 * XREFs of ??1?$RefPtr@VConditionalExpressionAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A2030
 * Callers:
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z @ 0x180090AD0 (-AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>::~RefPtr<Windows::UI::Composition::ConditionalExpressionAnimator>(
        Microsoft::WRL2::NestableRuntimeClass **a1)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(a1);
}
