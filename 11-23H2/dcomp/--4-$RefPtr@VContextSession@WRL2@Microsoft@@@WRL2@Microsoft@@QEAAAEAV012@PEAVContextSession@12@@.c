/*
 * XREFs of ??4?$RefPtr@VContextSession@WRL2@Microsoft@@@WRL2@Microsoft@@QEAAAEAV012@PEAVContextSession@12@@Z @ 0x180100B70
 * Callers:
 *     ?CopySurface@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionDrawingSurface@234@PEAPEAUIDXGISurface@@@Z @ 0x180100D90 (-CopySurface@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionDrawingS.c)
 *     ?EnumerateVisualTreePreOrder@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUIVisual@234@0PEAUIVisualTreeEnumerationDiagnostics@234@@Z @ 0x180100ED0 (-EnumerateVisualTreePreOrder@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUIVis.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL2::RefPtr<Microsoft::WRL2::ContextSession>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  return a1;
}
