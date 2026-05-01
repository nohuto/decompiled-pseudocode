/*
 * XREFs of ?ButtonClicked@CSwitchItemElement@@UEAAXPEAUIGlyphButton@@@Z @ 0x180572CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSwitchItemElement::ButtonClicked(CSwitchItemElement *this, struct IGlyphButton *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 45);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *((_QWORD *)this + 44));
}
