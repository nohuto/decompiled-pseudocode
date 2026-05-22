/*
 * XREFs of ?OnFinalRelease_NoLock@NestableRuntimeClass@WRL2@Microsoft@@UEAAX_N@Z @ 0x180088740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL2::NestableRuntimeClass::OnFinalRelease_NoLock(
        Microsoft::WRL2::NestableRuntimeClass *this)
{
  if ( this )
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
}
