/*
 * XREFs of ?Destroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ @ 0x18000C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z @ 0x18006D31C (-NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180082D58 (-InternalUnlock@-$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnchor::Destroy(Windows::UI::Composition::CompositionAnchor *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  Windows::UI::Composition::CompositionAnchor *v4; // rdx

  while ( 1 )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 24);
    if ( v2 == *((_QWORD **)this + 25) )
      break;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 56LL))(
      *v2,
      ((unsigned __int64)this + 128) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    memmove_0(
      *((void **)this + 24),
      (const void *)(*((_QWORD *)this + 24) + 56LL),
      *((_QWORD *)this + 25) - (*((_QWORD *)this + 24) + 56LL));
    *((_QWORD *)this + 25) -= 56LL;
  }
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    v4 = *(Windows::UI::Composition::CompositionAnchor **)(v3 + 280);
    if ( v4 != this || !this )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    Windows::UI::Composition::Visual::NotifyAnchorListening(*((Windows::UI::Composition::Visual **)this + 18), v4, 0);
    *(_QWORD *)(v3 + 280) = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionBatch>::InternalUnlock((char *)this + 144);
  }
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
