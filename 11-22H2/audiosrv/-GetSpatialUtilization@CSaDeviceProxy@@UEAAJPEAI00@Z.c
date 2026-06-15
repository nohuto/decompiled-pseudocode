/*
 * XREFs of ?GetSpatialUtilization@CSaDeviceProxy@@UEAAJPEAI00@Z @ 0x1801080D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::GetSpatialUtilization(
        CSaDeviceProxy *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, unsigned int *))(**((_QWORD **)this + 9)
                                                                                           + 168LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           a4);
}
