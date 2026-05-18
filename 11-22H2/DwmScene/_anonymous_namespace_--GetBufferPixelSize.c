/*
 * XREFs of _anonymous_namespace_::GetBufferPixelSize @ 0x1800732F0
 * Callers:
 *     ?GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073374 (-GetOffscreenDepthBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VDepthBuffer.c)
 *     ?GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@W4OffscreenTargetSize@123@@Z @ 0x180073438 (-GetOffscreenRenderBuffer@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VFrameBuffe.c)
 * Callees:
 *     _o_ceilf_0 @ 0x18000BFFC (_o_ceilf_0.c)
 */

int *__fastcall anonymous_namespace_::GetBufferPixelSize(int *a1, __int64 a2)
{
  int v3; // ebx
  int v4; // eax
  float X_4; // [rsp+24h] [rbp-14h]

  X_4 = *((float *)&a2 + 1);
  v3 = (int)o_ceilf_0(*(float *)&a2);
  v4 = (int)o_ceilf_0(X_4);
  if ( v3 < 1 )
    v3 = 1;
  *a1 = v3;
  if ( v4 < 1 )
    v4 = 1;
  a1[1] = v4;
  return a1;
}
