/*
 * XREFs of ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x1805824D0
 * Callers:
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x1802E4BC0 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 *     _CMultitaskingViewButtonElement::PointerLeave_::_1_::dtor$0 @ 0x1802E4BF1 (_CMultitaskingViewButtonElement--PointerLeave_--_1_--dtor$0.c)
 *     ?PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180582540 (-PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerI.c)
 *     _CMultitaskingViewButtonElement::PointerDown_::_1_::dtor$0 @ 0x180582591 (_CMultitaskingViewButtonElement--PointerDown_--_1_--dtor$0.c)
 *     ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1805825B0 (-PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _CMultitaskingViewButtonElement::PointerMove_::_1_::dtor$0 @ 0x1805825F0 (_CMultitaskingViewButtonElement--PointerMove_--_1_--dtor$0.c)
 *     ?PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180582610 (-PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     _CMultitaskingViewButtonElement::PointerUp_::_1_::dtor$0 @ 0x180582661 (_CMultitaskingViewButtonElement--PointerUp_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x180582674 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMultitaskingViewButtonElement::CDetectRenderModeChange::~CDetectRenderModeChange(
        CMultitaskingViewButtonElement::CDetectRenderModeChange *this)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx

  v2 = CMultitaskingViewButtonElement::_CalcButtonRenderMode(*(_QWORD *)this);
  v4 = v2;
  if ( v2 != *((_DWORD *)this + 2) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 648LL))(*(_QWORD *)this, v2);
  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v3, v4);
  }
}
