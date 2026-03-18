/*
 * XREFs of CcGetDeviceGuid @ 0x1407460A4
 * Callers:
 *     CcGetDeviceGuidAsync @ 0x14025E370 (CcGetDeviceGuidAsync.c)
 *     CcInitializeVolumeCacheMap @ 0x1402D1304 (CcInitializeVolumeCacheMap.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     IoVolumeDeviceToGuid @ 0x14068B980 (IoVolumeDeviceToGuid.c)
 */

__int64 __fastcall CcGetDeviceGuid(__int64 a1, GUID *a2)
{
  __int64 v4; // rcx
  struct _DEVICE_OBJECT *v5; // rcx

  if ( KeAreAllApcsDisabled() )
    return 3221225473LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v4 ? *(struct _DEVICE_OBJECT **)(v4 + 16) : *(struct _DEVICE_OBJECT **)(a1 + 8);
  if ( !v5 )
    return 3221225473LL;
  else
    return IoVolumeDeviceToGuid(v5, a2);
}
