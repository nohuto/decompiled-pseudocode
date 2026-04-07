/*
 * XREFs of ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x180105FFC
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x1800255E0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800E6E8C (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualProxy::SetSize(CVisualProxy *this, double a2, double a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 304LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
}
