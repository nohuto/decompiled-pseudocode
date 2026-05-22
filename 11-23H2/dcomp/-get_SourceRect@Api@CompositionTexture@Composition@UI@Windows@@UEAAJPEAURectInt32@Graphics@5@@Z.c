/*
 * XREFs of ?get_SourceRect@Api@CompositionTexture@Composition@UI@Windows@@UEAAJPEAURectInt32@Graphics@5@@Z @ 0x1800A3A60
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?get_SourceRect@CompositionTexture@Composition@UI@Windows@@AEAAJPEAURectInt32@Graphics@4@@Z @ 0x1800A3AE8 (-get_SourceRect@CompositionTexture@Composition@UI@Windows@@AEAAJPEAURectInt32@Graphics@4@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTexture::Api::get_SourceRect(
        Windows::UI::Composition::CompositionTexture::Api *this,
        struct Windows::Graphics::RectInt32 *a2)
{
  Windows::UI::Composition::CompositionTexture *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int SourceRect; // eax

  v2 = (Windows::UI::Composition::CompositionTexture::Api *)((char *)this - 128);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    SourceRect = Windows::UI::Composition::CompositionTexture::get_SourceRect(v2, a2);
    v5 = SourceRect;
    if ( SourceRect < 0 )
      DoStackCaptureDirect(SourceRect, 0xBEu);
    else
      v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
