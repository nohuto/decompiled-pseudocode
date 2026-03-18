/*
 * XREFs of ?AddResponseRef@CResponseItem@@UEAAXXZ @ 0x1801DFA70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x180074924 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

void __fastcall CResponseItem::AddResponseRef(CResponseItem *this)
{
  CMILRefCountImpl::AddReference((CResponseItem *)((char *)this + 8));
  ++*((_DWORD *)this + 4);
}
