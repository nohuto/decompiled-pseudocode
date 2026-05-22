/*
 * XREFs of ?PostDestroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ @ 0x180159FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001E154 (-EnsureMessageExtensions@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?GetCoreWindowCI@Compositor@Composition@UI@Windows@@QEAAPEAUICoreWindow_CompositionIslands@Core@34@XZ @ 0x18008B604 (-GetCoreWindowCI@Compositor@Composition@UI@Windows@@QEAAPEAUICoreWindow_CompositionIslands@Core@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x180108A7C (-EndPrivateCallout@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionIslandTarget::PostDestroy(
        Windows::UI::Composition::Compositor **this)
{
  struct Windows::UI::Core::ICoreWindow_CompositionIslands *CoreWindowCI; // rsi
  const char *v3; // r9
  __int64 v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CoreWindowCI = Windows::UI::Composition::Compositor::GetCoreWindowCI(this[3]);
  if ( !CoreWindowCI )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      99LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionislandtarget.cpp",
      v3);
  v4 = *((_QWORD *)this[3] + 3);
  ++*(_DWORD *)(v4 + 88);
  if ( *(_DWORD *)(v4 + 80) != *(_DWORD *)(v4 + 84) + *(_DWORD *)(v4 + 88) )
    Microsoft::WRL2::FailFast::Unexpected("Begin callout counts");
  Microsoft::WRL2::ContextSession::EnsureMessageExtensions((Microsoft::WRL2::ContextSession *)v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 128) + 96LL))(*(_QWORD *)(v4 + 128));
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1809LL,
      (__int64)"onecore\\private\\sdk\\inc\\wrl2\\Wrl2Agile.cpp",
      (const char *)(unsigned int)v5,
      v7);
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Core::ICoreWindow_CompositionIslands *))(*(_QWORD *)CoreWindowCI
                                                                                             + 72LL))(CoreWindowCI);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      105LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionislandtarget.cpp",
      (const char *)(unsigned int)v6,
      v7);
  Microsoft::WRL2::ContextSession::EndPrivateCallout((Microsoft::WRL2::ContextSession *)v4);
  Windows::UI::Composition::CompositionObject::PostDestroy((Windows::UI::Composition::CompositionObject *)this);
}
