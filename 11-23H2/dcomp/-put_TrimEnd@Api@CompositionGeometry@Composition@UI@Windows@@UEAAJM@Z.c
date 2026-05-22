/*
 * XREFs of ?put_TrimEnd@Api@CompositionGeometry@Composition@UI@Windows@@UEAAJM@Z @ 0x180012860
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?SetTrimEnd@CompositionGeometry@Composition@UI@Windows@@QEAAJM@Z @ 0x1800128C8 (-SetTrimEnd@CompositionGeometry@Composition@UI@Windows@@QEAAJM@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGeometry::Api::put_TrimEnd(
        Windows::UI::Composition::CompositionGeometry::Api *this,
        float a2)
{
  Windows::UI::Composition::CompositionGeometry *v2; // rdi
  Microsoft::WRL2::ContextSession *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::CompositionGeometry::Api *)((char *)this - 136);
  v3 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v4 = Windows::UI::Composition::CompositionGeometry::SetTrimEnd(v2, a2);
    v5 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0xABu);
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
