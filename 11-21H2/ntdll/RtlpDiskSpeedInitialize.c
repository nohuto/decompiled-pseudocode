/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x18000AFE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetVolumeHandle @ 0x18000AEC4 (RtlpGetVolumeHandle.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18000B04C (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlGetNtSystemRoot @ 0x1800509E0 (RtlGetNtSystemRoot.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

_BOOL8 RtlpDiskSpeedInitialize()
{
  unsigned __int16 *NtSystemRoot; // rax
  int VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = (unsigned __int16 *)RtlGetNtSystemRoot();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v4);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v4;
    }
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  return VolumeHandle >= 0;
}
