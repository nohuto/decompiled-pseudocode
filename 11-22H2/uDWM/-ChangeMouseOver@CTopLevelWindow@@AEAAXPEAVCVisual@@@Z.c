/*
 * XREFs of ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x1800072BC
 * Callers:
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180007294 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x1800E621C (-HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTopLevelWindow::ChangeMouseOver(CTopLevelWindow *this, struct CVisual *a2)
{
  CBaseObject *v2; // rbx
  __int64 v4; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 96);
  if ( a2 != v2 )
  {
    *((_QWORD *)this + 96) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    if ( v2 )
      (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v2 + 128LL))(v2);
    v4 = *((_QWORD *)this + 96);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4);
    if ( v2 )
      CBaseObject::Release(v2);
  }
}
