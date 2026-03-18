/*
 * XREFs of ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801EE130
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EDC04 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x1801ECA1C (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1801ED480 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::TryTargetNextBuffer(CCaptureRenderTarget *this)
{
  unsigned int v2; // ebx
  int NextBufferIndexAvailable; // eax
  int RenderTargetForFrameBuffer; // eax
  __int64 v5; // rcx

  v2 = 0;
  NextBufferIndexAvailable = CCaptureRenderTarget::GetNextBufferIndexAvailable(this);
  if ( NextBufferIndexAvailable >= 0 )
  {
    *((_DWORD *)this + 484) = NextBufferIndexAvailable;
    RenderTargetForFrameBuffer = CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(this);
    v2 = RenderTargetForFrameBuffer;
    if ( RenderTargetForFrameBuffer < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderTargetForFrameBuffer, 0x307u, 0LL);
  }
  return v2;
}
