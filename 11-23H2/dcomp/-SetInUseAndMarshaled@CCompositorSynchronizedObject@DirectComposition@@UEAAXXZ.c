/*
 * XREFs of ?SetInUseAndMarshaled@CCompositorSynchronizedObject@DirectComposition@@UEAAXXZ @ 0x1800EC360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CCompositorSynchronizedObject::SetInUseAndMarshaled(
        DirectComposition::CCompositorSynchronizedObject *this)
{
  if ( *((_DWORD *)this + 2) != 3 )
  {
    (*(void (__fastcall **)(DirectComposition::CCompositorSynchronizedObject *, __int64))(*(_QWORD *)this + 40LL))(
      this,
      3LL);
    *((_DWORD *)this + 2) = 3;
  }
}
