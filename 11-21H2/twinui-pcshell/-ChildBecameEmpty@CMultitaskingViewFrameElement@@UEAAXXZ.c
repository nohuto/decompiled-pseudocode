/*
 * XREFs of ?ChildBecameEmpty@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1804C1E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1804C4AA8 (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 */

void __fastcall CMultitaskingViewFrameElement::ChildBecameEmpty(CMultitaskingViewFrameElement *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)this + 408LL))(this) )
    AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___(*((_QWORD *)this + 37));
}
