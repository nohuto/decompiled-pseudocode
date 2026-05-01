/*
 * XREFs of ?Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z @ 0x18006AE48
 * Callers:
 *     ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x180081DD0 (--_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z.c)
 *     ??1__abi_CapturePtr@Details@Platform@@QEAA@XZ @ 0x18076A6F0 (--1__abi_CapturePtr@Details@Platform@@QEAA@XZ.c)
 *     ??3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z @ 0x18076A74C (--3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Platform::Details::__abi_CaptureBase::Delete(
        Platform::Details::__abi_CaptureBase *this,
        struct Platform::Details::__abi_CaptureBase *a2,
        struct Platform::Details::__abi_CaptureBase *a3)
{
  (**(void (__fastcall ***)(struct Platform::Details::__abi_CaptureBase *, _QWORD))a2)(a2, 0LL);
  if ( a2 != a3 )
    Platform::Details::Heap::Free(a2);
}
