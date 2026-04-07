/*
 * XREFs of ?OnGlobalTimeUpdated@CTouchVisual@@MEAAJXZ @ 0x1800E9120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTouchVisual::OnGlobalTimeUpdated(CTouchVisual *this)
{
  (*(void (__fastcall **)(CTouchVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
  return 0LL;
}
