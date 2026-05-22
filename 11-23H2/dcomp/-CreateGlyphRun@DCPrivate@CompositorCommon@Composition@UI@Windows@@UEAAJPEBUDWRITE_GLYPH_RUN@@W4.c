/*
 * XREFs of ?CreateGlyphRun@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEBUDWRITE_GLYPH_RUN@@W4DWRITE_MEASURING_MODE@@W4DWRITE_GLYPH_ORIENTATION_ANGLE@@PEAPEAUICompositionGlyphRun@345@@Z @ 0x180125DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::DCPrivate::CreateGlyphRun(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx

  v5 = a1 - 328;
  *a5 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 328));
  if ( (*(_BYTE *)(v5 + 32) & 2) != 0 )
  {
    v6 = -2147467263;
    DoStackCaptureDirect(-2147467263, 0x1B2Au);
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v5);
  return v6;
}
