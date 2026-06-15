/*
 * XREFs of ?SetSpatialStreamGrantCount@CSharedStreamGroupProxy@@UEAAJ_KI_J@Z @ 0x1800FA920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::SetSpatialStreamGrantCount(CSharedStreamGroupProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10));
}
