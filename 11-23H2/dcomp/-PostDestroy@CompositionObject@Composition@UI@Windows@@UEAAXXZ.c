/*
 * XREFs of ?PostDestroy@CompositionObject@Composition@UI@Windows@@UEAAXXZ @ 0x180073980
 * Callers:
 *     ?PostDestroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x180012170 (-PostDestroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?PostDestroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ @ 0x180012A20 (-PostDestroy@CompositionAnchor@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?PostDestroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x180012AAC (-PostDestroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?PostDestroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ @ 0x180159FD0 (-PostDestroy@CompositionIslandTarget@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionObject::PostDestroy(
        Windows::UI::Composition::CompositionObject *this)
{
  __int64 v2; // rdx
  int v3; // eax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 424LL);
  if ( !v2 )
    Microsoft::WRL2::FailFast::Do();
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)(v2 + 32) + 48LL))(
    *(_QWORD *)(v2 + 32),
    *(unsigned int *)(v2 + 64),
    *((unsigned int *)this + 30),
    0LL,
    &v4);
  *((_DWORD *)this + 30) = 0;
  if ( *((Windows::UI::Composition::CompositionObject **)this + 3) != this
    && *(_DWORD *)(*((_QWORD *)this + 3) + 104LL) != GetCurrentThreadId()
    || (v3 = *((_DWORD *)this + 8), (v3 & 0x10) == 0) )
  {
    Microsoft::WRL2::FailFast::Unexpected("PostDestroy preconditions");
  }
  *((_DWORD *)this + 8) = v3 & 0xFFFFFFEF;
}
