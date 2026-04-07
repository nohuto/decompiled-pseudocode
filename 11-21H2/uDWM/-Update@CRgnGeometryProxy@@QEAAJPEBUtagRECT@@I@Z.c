/*
 * XREFs of ?Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z @ 0x1800D198C
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180028C20 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRgnGeometryProxy::Update(CRgnGeometryProxy *this, const struct tagRECT *a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct tagRECT *, _QWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 1000LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3,
           0,
           0);
}
