/*
 * XREFs of ?GetConnectionVisual@CompositionIslandSite@Composition@UI@Windows@@IEAAPEAVVisual@234@XZ @ 0x18008D008
 * Callers:
 *     ?OnDisconnecting@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x1800117C0 (-OnDisconnecting@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?OnConnected@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x18008CFD0 (-OnConnected@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

struct Windows::UI::Composition::Visual *__fastcall Windows::UI::Composition::CompositionIslandSite::GetConnectionVisual(
        Windows::UI::Composition::CompositionIslandSite *this)
{
  int v1; // edx
  int v2; // edx

  v1 = *((_DWORD *)this + 45);
  if ( !v1 )
    return 0LL;
  v2 = v1 - 1;
  if ( !v2 )
    return (struct Windows::UI::Composition::Visual *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23)
                                                                                        + 296LL))(*((_QWORD *)this + 23));
  if ( v2 != 1 )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  return (struct Windows::UI::Composition::Visual *)*((_QWORD *)this + 25);
}
