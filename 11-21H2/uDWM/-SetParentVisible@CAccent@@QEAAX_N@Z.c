/*
 * XREFs of ?SetParentVisible@CAccent@@QEAAX_N@Z @ 0x180017598
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800170B4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAccent::SetParentVisible(CAccent *this, char a2)
{
  if ( a2 != *((_BYTE *)this + 405) )
  {
    (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x10000LL);
    *((_BYTE *)this + 405) = a2;
  }
}
