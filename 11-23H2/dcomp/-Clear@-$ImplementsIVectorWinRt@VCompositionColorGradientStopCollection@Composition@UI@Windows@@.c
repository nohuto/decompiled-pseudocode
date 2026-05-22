/*
 * XREFs of ?Clear@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJXZ @ 0x180084350
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$VectorBasedCollection@V?$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Composition@UI@Windows@@QEAAXXZ @ 0x18000CEC0 (-Clear@-$VectorBasedCollection@V-$RefPtr@VSceneNode@Scenes@Composition@UI@Windows@@@WRL2@Microso.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ImplementsIVectorWinRt<Windows::UI::Composition::CompositionColorGradientStopCollection,Windows::UI::Composition::ICompositionColorGradientStopCollection>::Clear(
        __int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // edi

  v1 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (*(_BYTE *)(a1 - 128) & 2) != 0 )
  {
    Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneNode>>::Clear((__int64 *)(a1 - 32));
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
