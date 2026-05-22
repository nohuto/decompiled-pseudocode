/*
 * XREFs of ?UpdateInputContext@SpatialRimDeviceCollectionCallbacks@@UEAAJAEAUMPCMatrix4x4@@_J1@Z @ 0x1800DC930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::UpdateInputContext(
        SpatialRimDeviceCollectionCallbacks *this,
        struct MPCMatrix4x4 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct MPCMatrix4x4 *))(**((_QWORD **)this + 2) + 152LL))(
           *((_QWORD *)this + 2),
           a2);
}
