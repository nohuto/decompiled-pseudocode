/*
 * XREFs of ??0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z @ 0x180568F94
 * Callers:
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x180569B70 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180569BC0 (-PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HotTrackingElement::DetectHotTrackChange *__fastcall HotTrackingElement::DetectHotTrackChange::DetectHotTrackChange(
        HotTrackingElement::DetectHotTrackChange *this,
        struct HotTrackingElement *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct HotTrackingElement *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_BYTE *)this + 8) = *(_DWORD *)(*(_QWORD *)this + 96LL) == 1;
  return this;
}
