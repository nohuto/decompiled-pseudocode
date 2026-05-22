/*
 * XREFs of ?PostDestroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x180012AAC
 * Callers:
 *     ?PostDestroy@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x180012AA0 (-PostDestroy@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionIslandSite::PostDestroy(
        Windows::UI::Composition::CompositionIslandSite *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 120LL) + 168LL))(
    *(_QWORD *)(*((_QWORD *)this + 3) + 120LL),
    *((_QWORD *)this + 30));
  *((_QWORD *)this + 30) = 0LL;
  Windows::UI::Composition::CompositionObject::PostDestroy(this);
}
