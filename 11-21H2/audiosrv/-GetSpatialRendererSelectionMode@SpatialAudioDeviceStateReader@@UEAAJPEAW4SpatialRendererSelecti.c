/*
 * XREFs of ?GetSpatialRendererSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialRendererSelectionMode@@@Z @ 0x1800105C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioDeviceStateReader::GetSpatialRendererSelectionMode(
        SpatialAudioDeviceStateReader *this,
        enum SpatialRendererSelectionMode *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *(_DWORD *)a2 = *((_DWORD *)this - 6);
  return result;
}
