/*
 * XREFs of ?get_ContentVisual@Partner@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x180019320
 * Callers:
 *     <none>
 * Callees:
 *     ??$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001C0BC (--$ToApi@UIVisual@Composition@UI@Windows@@@Visual@Composition@UI@Windows@@SAXPEAV0123@V-$ComPtrR.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTreeIsland::Partner::get_ContentVisual(
        Windows::UI::Composition::VisualTreeIsland::Partner *this,
        struct Windows::UI::Composition::IVisual **a2)
{
  char *v2; // rsi
  Microsoft::WRL2::ContextSession *v4; // rbx
  unsigned int v5; // edi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rax

  v2 = (char *)this - 504;
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 60);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v5 = 0;
    v6 = (Microsoft::WRL2::NestableRuntimeClass *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 296LL))(v2);
    Windows::UI::Composition::Visual::ToApi<Windows::UI::Composition::IVisual>(v6);
    *a2 = 0LL;
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
