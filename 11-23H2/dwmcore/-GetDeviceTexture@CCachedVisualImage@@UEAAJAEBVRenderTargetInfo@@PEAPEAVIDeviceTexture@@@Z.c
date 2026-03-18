/*
 * XREFs of ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800A2940
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004516C (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800A2A20 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetDeviceTexture(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v5; // eax
  __int64 v6; // rcx
  struct IRenderTargetBitmap *v7; // rbx
  unsigned int v8; // edi
  char *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  char *v12; // rcx
  struct IRenderTargetBitmap *v14; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  v5 = CCachedVisualImage::EnsureRenderTargetBitmap((CCachedVisualImage *)((char *)this - 72), a2, &v14);
  v7 = v14;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x182u, 0LL);
  }
  else
  {
    v9 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8;
    v10 = (*(__int64 (__fastcall **)(char *, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v9 + 48LL))(
            v9,
            a2,
            a3);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x185u, 0LL);
  }
  if ( v7 )
  {
    v12 = (char *)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v8;
}
