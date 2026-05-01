/*
 * XREFs of ?DragStarted@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@@Z @ 0x1804B96F0
 * Callers:
 *     ?DragStarted@CSwitchItemElement@@UEAAXPEAUIUnknown@@@Z @ 0x1804B8300 (-DragStarted@CSwitchItemElement@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::DragStarted(CMultitaskingViewElementBase *this, struct IUnknown *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v4 = &v2[*((_QWORD *)this + 3)];
  while ( v2 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, struct IUnknown *))(*(_QWORD *)*v2 + 432LL))(*v2, a2);
    ++v2;
  }
}
