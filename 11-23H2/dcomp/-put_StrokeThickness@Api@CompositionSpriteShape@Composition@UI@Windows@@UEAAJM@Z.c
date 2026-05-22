/*
 * XREFs of ?put_StrokeThickness@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJM@Z @ 0x180012090
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetStrokeThickness@CompositionSpriteShape@Composition@UI@Windows@@QEAAJM@Z @ 0x1800120F8 (-SetStrokeThickness@CompositionSpriteShape@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::Api::put_StrokeThickness(
        Windows::UI::Composition::CompositionSpriteShape::Api *this,
        float a2)
{
  Windows::UI::Composition::CompositionSpriteShape *v2; // rdi
  Microsoft::WRL2::ContextSession *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::CompositionSpriteShape::Api *)((char *)this - 192);
  v3 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v4 = Windows::UI::Composition::CompositionSpriteShape::SetStrokeThickness(v2, a2);
    v5 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x2D1u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
