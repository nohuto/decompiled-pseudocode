/*
 * XREFs of ??1?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A0E10
 * Callers:
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
Microsoft::WRL2::NestableRuntimeClass *__fastcall Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::~RefPtr<Windows::UI::Composition::CompositionDrawingSurface>(
        Microsoft::WRL2::NestableRuntimeClass **a1)
{
  return Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(a1);
}
