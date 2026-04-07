/*
 * XREFs of ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x18001DD04
 * Callers:
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x18001EDA4 (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18002A830 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x1800367E4 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6720 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualProxy::SetSize(CVisualProxy *this, double a2, double a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 360LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
