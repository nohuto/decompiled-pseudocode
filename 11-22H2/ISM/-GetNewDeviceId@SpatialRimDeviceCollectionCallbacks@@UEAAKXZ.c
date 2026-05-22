/*
 * XREFs of ?GetNewDeviceId@SpatialRimDeviceCollectionCallbacks@@UEAAKXZ @ 0x1800E7FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::GetNewDeviceId(SpatialRimDeviceCollectionCallbacks *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 176LL))(*((_QWORD *)this + 2));
}
