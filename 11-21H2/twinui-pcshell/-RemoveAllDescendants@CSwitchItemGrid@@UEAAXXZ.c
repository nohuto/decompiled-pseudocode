/*
 * XREFs of ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1804BF320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804BA9A0 (-RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x1804BF4CC (-Reset@GridLayout@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSwitchItemGrid::RemoveAllDescendants(CSwitchItemGrid *this)
{
  char *v2; // rdi

  v2 = (char *)this + 208;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 26) + 56LL))((char *)this + 208);
  GridLayout::Reset((CSwitchItemGrid *)((char *)this + 768));
  CMultitaskingViewElementBase::RemoveAllDescendants(this);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 64LL))(v2);
}
