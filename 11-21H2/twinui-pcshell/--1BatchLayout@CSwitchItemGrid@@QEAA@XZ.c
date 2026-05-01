/*
 * XREFs of ??1BatchLayout@CSwitchItemGrid@@QEAA@XZ @ 0x1804BDFD0
 * Callers:
 *     _CSwitchItemGrid::RemoveAllDescendants_::_1_::dtor$0 @ 0x1804BF390 (_CSwitchItemGrid--RemoveAllDescendants_--_1_--dtor$0.c)
 *     _CSwitchItemGrid::SetItems_::_1_::dtor$0 @ 0x1804BFB6D (_CSwitchItemGrid--SetItems_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSwitchItemGrid::BatchLayout::~BatchLayout(CSwitchItemGrid::BatchLayout *this)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 208LL) + 64LL))(*(_QWORD *)this + 208LL);
}
