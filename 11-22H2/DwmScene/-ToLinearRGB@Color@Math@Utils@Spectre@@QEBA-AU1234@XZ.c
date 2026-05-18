/*
 * XREFs of ?ToLinearRGB@Color@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x180067DC0
 * Callers:
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     powf @ 0x18000C05C (powf.c)
 */

__int64 __fastcall Spectre::Utils::Math::Color::ToLinearRGB(__int64 a1, __int64 a2)
{
  float v4; // xmm0_4
  __int64 result; // rax

  *(float *)a2 = powf(*(float *)a1, 2.2);
  *(float *)(a2 + 4) = powf(*(float *)(a1 + 4), 2.2);
  v4 = powf(*(float *)(a1 + 8), 2.2);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  result = a2;
  *(float *)(a2 + 8) = v4;
  return result;
}
