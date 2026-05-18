/*
 * XREFs of ?GetActiveSizeForOffscreenRenderBuffers@ImageProcessingManager@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@W4OffscreenTargetSize@123@@Z @ 0x1800732B0
 * Callers:
 *     ?GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073374 (-GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VDepthBuffer.c)
 *     ?GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073438 (-GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VFrameBuffe.c)
 * Callees:
 *     <none>
 */

float *__fastcall Spectre::Engine::ImageProcessingManager::GetActiveSizeForOffscreenRenderBuffers(
        __int64 a1,
        float *a2,
        int a3)
{
  float *result; // rax
  float v4; // xmm1_4

  result = a2;
  v4 = (float)*(int *)(a1 + 12) / flt_180113050[a3];
  *a2 = (float)*(int *)(a1 + 8) / flt_180113050[a3];
  a2[1] = v4;
  return result;
}
