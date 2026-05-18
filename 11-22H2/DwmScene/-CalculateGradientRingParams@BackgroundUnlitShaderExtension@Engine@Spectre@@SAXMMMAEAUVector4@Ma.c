/*
 * XREFs of ?CalculateGradientRingParams@BackgroundUnlitShaderExtension@Engine@Spectre@@SAXMMMAEAUVector4@Math@Utils@3@0@Z @ 0x18007FE4C
 * Callers:
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@@Z @ 0x18007FED4 (-DefinePropertyLayouts@BackgroundUnlitShaderExtension@Engine@Spectre@@AEAAXPEAVShaderManager@23@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::BackgroundUnlitShaderExtension::CalculateGradientRingParams(
        float a1,
        float a2,
        float a3,
        struct Spectre::Utils::Math::Vector4 *a4,
        struct Spectre::Utils::Math::Vector4 *a5)
{
  *((_DWORD *)a4 + 1) = LODWORD(a1) ^ _xmm;
  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 3) = 0;
  *((_DWORD *)a4 + 2) = COERCE_UNSIGNED_INT(a1 + a2) ^ _xmm;
  *((_DWORD *)a5 + 3) = 0;
  *((float *)a5 + 1) = 1.0 / a2;
  *(float *)a5 = 1.0 / a1;
  *((float *)a5 + 2) = 1.0 / a3;
}
