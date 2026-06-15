/*
 * XREFs of ?GetSpatialVssSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialVssSelectionMode@@@Z @ 0x18005D990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioDeviceStateReader::GetSpatialVssSelectionMode(
        SpatialAudioDeviceStateReader *this,
        enum SpatialVssSelectionMode *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *(_DWORD *)a2 = *((_DWORD *)this - 5);
  return result;
}
