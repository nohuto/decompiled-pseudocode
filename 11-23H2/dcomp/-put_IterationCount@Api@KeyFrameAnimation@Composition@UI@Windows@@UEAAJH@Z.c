/*
 * XREFs of ?put_IterationCount@Api@KeyFrameAnimation@Composition@UI@Windows@@UEAAJH@Z @ 0x18000DF50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetIterationCount2@KeyFrameAnimation@Composition@UI@Windows@@QEAAJM@Z @ 0x180083688 (-SetIterationCount2@KeyFrameAnimation@Composition@UI@Windows@@QEAAJM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::KeyFrameAnimation::Api::put_IterationCount(
        Windows::UI::Composition::KeyFrameAnimation::Api *this,
        int a2)
{
  Windows::UI::Composition::KeyFrameAnimation *v2; // rdi
  Microsoft::WRL2::ContextSession *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi

  v2 = (Windows::UI::Composition::KeyFrameAnimation::Api *)((char *)this - 344);
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 40);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::KeyFrameAnimation::SetIterationCount2(v2, (float)a2);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x618u);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
