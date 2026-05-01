/*
 * XREFs of ??1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ @ 0x1804AC764
 * Callers:
 *     ?PointerLeave@HotTrackingElement@@UEAAXXZ @ 0x1804AD0E0 (-PointerLeave@HotTrackingElement@@UEAAXXZ.c)
 *     _HotTrackingElement::PointerLeave_::_1_::dtor$0 @ 0x1804AD111 (_HotTrackingElement--PointerLeave_--_1_--dtor$0.c)
 *     ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804AD130 (-PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _HotTrackingElement::PointerMove_::_1_::dtor$0 @ 0x1804AD170 (_HotTrackingElement--PointerMove_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HotTrackingElement::DetectHotTrackChange::~DetectHotTrackChange(
        HotTrackingElement::DetectHotTrackChange *this)
{
  _DWORD *v2; // rcx

  v2 = *(_DWORD **)this;
  if ( (v2[24] == 1) != *((_BYTE *)this + 8) )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 648LL))(v2);
    v2 = *(_DWORD **)this;
  }
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
