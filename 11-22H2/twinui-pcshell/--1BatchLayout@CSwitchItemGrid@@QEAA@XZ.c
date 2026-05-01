/*
 * XREFs of ??1BatchLayout@CSwitchItemGrid@@QEAA@XZ @ 0x180578998
 * Callers:
 *     _CSwitchItemGrid::RemoveAllDescendants_::_1_::dtor$0 @ 0x180579DA0 (_CSwitchItemGrid--RemoveAllDescendants_--_1_--dtor$0.c)
 *     _CSwitchItemGrid::SetItems_::_1_::dtor$0 @ 0x18057A582 (_CSwitchItemGrid--SetItems_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSwitchItemGrid::BatchLayout::~BatchLayout(CSwitchItemGrid::BatchLayout *this)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 208LL) + 64LL))(*(_QWORD *)this + 208LL);
}
