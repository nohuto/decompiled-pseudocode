/*
 * XREFs of ?PostDestroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x180012170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::PostDestroy(
        Windows::UI::Composition::CompositionIsland *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 120LL) + 168LL))(
    *(_QWORD *)(*((_QWORD *)this + 3) + 120LL),
    *((_QWORD *)this + 57));
  *((_QWORD *)this + 57) = 0LL;
  Windows::UI::Composition::CompositionObject::PostDestroy(this);
}
