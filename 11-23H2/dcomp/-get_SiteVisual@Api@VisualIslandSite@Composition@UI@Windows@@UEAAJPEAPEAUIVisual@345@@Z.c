/*
 * XREFs of ?get_SiteVisual@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x1800193C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIslandSite::Api::get_SiteVisual(
        Windows::UI::Composition::VisualIslandSite::Api *this,
        struct Windows::UI::Composition::IVisual **a2)
{
  unsigned int v3; // edi
  Microsoft::WRL2::ContextSession *v5; // rbx

  v3 = 0;
  *a2 = 0LL;
  v5 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 28);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 216) & 2) != 0 )
  {
    Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(*((Microsoft::WRL2::NestableRuntimeClass **)this
                                                                               + 4));
    *a2 = 0LL;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
