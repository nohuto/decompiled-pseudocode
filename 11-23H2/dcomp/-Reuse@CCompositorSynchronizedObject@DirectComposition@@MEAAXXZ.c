/*
 * XREFs of ?Reuse@CCompositorSynchronizedObject@DirectComposition@@MEAAXXZ @ 0x1800EC320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CCompositorSynchronizedObject::Reuse(
        DirectComposition::CCompositorSynchronizedObject *this)
{
  (*(void (__fastcall **)(DirectComposition::CCompositorSynchronizedObject *, __int64))(*(_QWORD *)this + 40LL))(
    this,
    2LL);
  *((_DWORD *)this + 2) = 2;
}
