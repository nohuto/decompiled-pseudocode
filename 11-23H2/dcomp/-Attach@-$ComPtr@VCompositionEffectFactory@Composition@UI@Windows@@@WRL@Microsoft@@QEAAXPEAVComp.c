/*
 * XREFs of ?Attach@?$ComPtr@VCompositionEffectFactory@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionEffectFactory@Composition@UI@Windows@@@Z @ 0x18001A924
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAUIGraphicsEffect@Effects@Graphics@4@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAUIGraphicsEffect@Effects@Graphics@6@AEAPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@6@@Z @ 0x180019F38 (--$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAVCompositor@234.c)
 *     ??$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAV1234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionEffectFactory@Composition@UI@Windows@@$$QEAPEAV3456@@Z @ 0x180019FF8 (--$MakeAndInitialize2@VCompositionEffectFactory@Composition@UI@Windows@@V1234@PEAV1234@@Details@.c)
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionEffectFactory>::Attach(
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
