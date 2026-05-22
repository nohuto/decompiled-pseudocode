/*
 * XREFs of ?GetOrCreateNonDefaultPointerEventRouter@Partner@Visual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionPartner@345@@Z @ 0x18001C110
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z @ 0x18001CA44 (-GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUIComposition.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::GetOrCreateNonDefaultPointerEventRouter(
        Windows::UI::Composition::Visual::Partner *this,
        struct Windows::UI::Composition::ICompositionInteractionPartner **a2)
{
  Windows::UI::Composition::Visual *v2; // rdi
  Microsoft::WRL2::ContextSession *v4; // rbx
  int NonDefaultPointerEventRouter; // eax
  unsigned int v6; // edi

  v2 = (Windows::UI::Composition::Visual::Partner *)((char *)this - 216);
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    NonDefaultPointerEventRouter = Windows::UI::Composition::Visual::GetOrCreateNonDefaultPointerEventRouter(v2, a2);
    v6 = NonDefaultPointerEventRouter;
    if ( NonDefaultPointerEventRouter < 0 )
      DoStackCaptureDirect(NonDefaultPointerEventRouter, 0xBAEu);
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
