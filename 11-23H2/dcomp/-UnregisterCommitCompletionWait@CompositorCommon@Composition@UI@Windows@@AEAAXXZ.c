/*
 * XREFs of ?UnregisterCommitCompletionWait@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001BCF4
 * Callers:
 *     ?OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ @ 0x18001C18C (-OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ @ 0x180064ED0 (-Destroy@CompositorCommon@Composition@UI@Windows@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::UnregisterCommitCompletionWait(
        Windows::UI::Composition::CompositorCommon *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 57) + 656LL) + 280LL))(
    *(_QWORD *)(*((_QWORD *)this + 57) + 656LL),
    *((_QWORD *)this + 128));
  *((_BYTE *)this + 1032) &= ~1u;
}
