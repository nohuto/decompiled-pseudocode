/*
 * XREFs of ?put_SourceRect@Api@CompositionTexture@Composition@UI@Windows@@UEAAJURectInt32@Graphics@5@@Z @ 0x1800A3D20
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?put_SourceRect@CompositionTexture@Composition@UI@Windows@@AEAAJURectInt32@Graphics@4@@Z @ 0x1800A3DB4 (-put_SourceRect@CompositionTexture@Composition@UI@Windows@@AEAAJURectInt32@Graphics@4@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionTexture::Api::put_SourceRect(__int64 a1, __int128 *a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 - 128;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v8 = *a2;
    v6 = Windows::UI::Composition::CompositionTexture::put_SourceRect(v2, &v8);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0xCAu);
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
