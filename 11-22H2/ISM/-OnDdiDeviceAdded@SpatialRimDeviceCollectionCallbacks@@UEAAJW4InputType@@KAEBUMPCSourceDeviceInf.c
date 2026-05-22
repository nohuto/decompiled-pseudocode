/*
 * XREFs of ?OnDdiDeviceAdded@SpatialRimDeviceCollectionCallbacks@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800E8FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::OnDdiDeviceAdded(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 192LL))(*(_QWORD *)(a1 + 16));
}
