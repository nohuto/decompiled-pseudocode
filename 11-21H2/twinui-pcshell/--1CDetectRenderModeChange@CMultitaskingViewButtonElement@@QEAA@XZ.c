/*
 * XREFs of ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x1804C7B64
 * Callers:
 *     ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x180236460 (-PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ.c)
 *     _CMultitaskingViewButtonElement::PointerLeave_::_1_::dtor$0 @ 0x180236491 (_CMultitaskingViewButtonElement--PointerLeave_--_1_--dtor$0.c)
 *     ?PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C7BE0 (-PointerDown@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerI.c)
 *     _CMultitaskingViewButtonElement::PointerDown_::_1_::dtor$0 @ 0x1804C7C31 (_CMultitaskingViewButtonElement--PointerDown_--_1_--dtor$0.c)
 *     ?PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C7C50 (-PointerMove@CMultitaskingViewButtonElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     _CMultitaskingViewButtonElement::PointerMove_::_1_::dtor$0 @ 0x1804C7C90 (_CMultitaskingViewButtonElement--PointerMove_--_1_--dtor$0.c)
 *     ?PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804C7CB0 (-PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 *     _CMultitaskingViewButtonElement::PointerUp_::_1_::dtor$0 @ 0x1804C7D01 (_CMultitaskingViewButtonElement--PointerUp_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x1804C7D14 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
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
