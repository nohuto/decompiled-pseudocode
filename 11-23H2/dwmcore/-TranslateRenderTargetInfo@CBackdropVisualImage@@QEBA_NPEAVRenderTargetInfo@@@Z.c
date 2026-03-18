/*
 * XREFs of ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x1800B3E34
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800B26D4 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x180047074 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x1800ACAD8 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x1800ACB40 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 *     ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1800B3EA0 (-IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 */

bool __fastcall CBackdropVisualImage::TranslateRenderTargetInfo(
        CBackdropVisualImage *this,
        struct RenderTargetInfo *a2)
{
  const struct RenderTargetInfo *v3; // rdx
  CCachedVisualImage *v4; // rcx
  CCachedVisualImage::CCachedTarget *ExistingCachedTarget; // rax
  __int64 v6; // rbx
  __int64 RenderTargetInfo; // rax
  __int64 v8; // xmm1_8
  bool result; // al
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !CBackdropVisualImage::IsValid(this) )
    return 0;
  ExistingCachedTarget = CCachedVisualImage::FindExistingCachedTarget(v4, v3);
  v6 = (__int64)ExistingCachedTarget;
  if ( !ExistingCachedTarget || !CCachedVisualImage::CCachedTarget::IsValid(ExistingCachedTarget) || *(_BYTE *)(v6 + 57) )
    return 0;
  RenderTargetInfo = CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(v6, (__int64)v10);
  *(_OWORD *)a2 = *(_OWORD *)RenderTargetInfo;
  v8 = *(_QWORD *)(RenderTargetInfo + 16);
  result = 1;
  *((_QWORD *)a2 + 2) = v8;
  return result;
}
