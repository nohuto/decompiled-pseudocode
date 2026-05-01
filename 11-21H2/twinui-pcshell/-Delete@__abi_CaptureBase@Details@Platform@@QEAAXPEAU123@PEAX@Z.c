/*
 * XREFs of ?Delete@__abi_CaptureBase@Details@Platform@@QEAAXPEAU123@PEAX@Z @ 0x18003D230
 * Callers:
 *     ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x1800100D8 (--_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z.c)
 *     ??1__abi_CapturePtr@Details@Platform@@QEAA@XZ @ 0x18041FE74 (--1__abi_CapturePtr@Details@Platform@@QEAA@XZ.c)
 *     ??3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z @ 0x18041FE94 (--3__abi_CaptureBase@Details@Platform@@SAXPEAX0@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
