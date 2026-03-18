/*
 * XREFs of ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180059058
 * Callers:
 *     ?TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z @ 0x180058C84 (-TranslateRenderTargetInfo@CBackdropVisualImage@@QEBA_NPEAVRenderTargetInfo@@@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005C500 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x1800590C0 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 *     ?CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x180086D24 (-CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z.c)
 */

struct CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::FindExistingCachedTarget(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 24);
  v4 = (_QWORD *)*((_QWORD *)this + 25);
  while ( v2 != v4 )
  {
    CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(*v2, v6);
    if ( CanRenderToTargetFromSource(a2, (const struct RenderTargetInfo *)v6) )
      return (struct CCachedVisualImage::CCachedTarget *)*v2;
    ++v2;
  }
  return 0LL;
}
