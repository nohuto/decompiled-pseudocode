/*
 * XREFs of ?Attach@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositor@Composition@UI@Windows@@@Z @ 0x18003E140
 * Callers:
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@6@$$QEAPEAUICoreWindow@Core@56@$$QEA$$T3$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003C6E8 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PE.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4@AEAPEAUICoreWindow@Core@34@$$TPEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@AEAPEAUIDispatcherQueue@System@6@AEAPEAUICoreWindow@Core@56@$$QEA$$T$$QEAPEAVCompositorController@Core@456@$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003CAC0 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEA$$T111$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003E174 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@Comp.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::Attach(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  unsigned int result; // eax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  *a1 = a2;
  return result;
}
