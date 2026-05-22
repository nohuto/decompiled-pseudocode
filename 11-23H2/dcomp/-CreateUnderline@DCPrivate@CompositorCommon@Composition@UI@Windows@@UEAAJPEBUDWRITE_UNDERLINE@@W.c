/*
 * XREFs of ?CreateUnderline@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEBUDWRITE_UNDERLINE@@W4DWRITE_GLYPH_ORIENTATION_ANGLE@@PEAPEAUICompositionUnderline@345@@Z @ 0x180127990
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::DCPrivate::CreateUnderline(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx

  *a4 = 0LL;
  v4 = a1 - 328;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 328));
  if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
  {
    v5 = -2147467263;
    DoStackCaptureDirect(-2147467263, 0x1B70u);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v5;
}
