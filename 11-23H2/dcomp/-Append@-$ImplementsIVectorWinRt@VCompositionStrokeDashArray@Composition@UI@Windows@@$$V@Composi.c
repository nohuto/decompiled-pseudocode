/*
 * XREFs of ?Append@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJM@Z @ 0x1801705E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Append@?$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJM@Z @ 0x18017066C (-Append@-$VectorBasedCollection@M@Composition@UI@Windows@@QEAAJM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::CompositionStrokeDashArray,>::Append(
        __int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // edi
  int v4; // eax

  v1 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (*(_BYTE *)(a1 - 128) & 2) != 0 )
  {
    v4 = Windows::UI::Composition::VectorBasedCollection<float>::Append(a1 - 32);
    v3 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x91u);
    else
      v3 = 0;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v3;
}
