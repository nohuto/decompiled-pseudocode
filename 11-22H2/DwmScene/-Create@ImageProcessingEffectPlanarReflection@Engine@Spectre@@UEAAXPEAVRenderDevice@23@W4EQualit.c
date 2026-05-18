/*
 * XREFs of ?Create@ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAXPEAVRenderDevice@23@W4EQualityLevel@ImageProcessingEffect@23@@Z @ 0x180093CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ImageProcessingEffectPlanarReflection::Create(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = *a1;
  *((_DWORD *)a1 + 36) = a3;
  return (*(__int64 (**)(void))(v3 + 48))();
}
