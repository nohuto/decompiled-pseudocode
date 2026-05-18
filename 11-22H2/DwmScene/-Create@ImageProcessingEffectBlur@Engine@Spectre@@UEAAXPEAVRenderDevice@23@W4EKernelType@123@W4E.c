/*
 * XREFs of ?Create@ImageProcessingEffectBlur@Engine@Spectre@@UEAAXPEAVRenderDevice@23@W4EKernelType@123@W4ESampleLevel@123@W4EDownsampleScale@123@@Z @ 0x18009CAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ImageProcessingEffectBlur::Create(
        Spectre::Engine::ImageProcessingEffectBlur *a1,
        struct Spectre::Engine::RenderDevice *a2,
        int a3,
        int a4,
        int a5)
{
  *((_DWORD *)a1 + 94) = a5;
  *((_DWORD *)a1 + 92) = a3;
  *((_DWORD *)a1 + 93) = a4;
  Spectre::Engine::ImageProcessingEffectBlur::CreateBlurResources(a1, a2);
}
