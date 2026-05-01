/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x180047760
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x1800477CC (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x18004787C (RtlpGetVolumeHandle.c)
 *     RtlGetNtSystemRoot_0 @ 0x18004A3D0 (RtlGetNtSystemRoot_0.c)
 *     NtClose_0 @ 0x18004A3F4 (NtClose_0.c)
 */

_BOOL8 RtlpDiskSpeedInitialize()
{
  __int64 NtSystemRoot_0; // rax
  int VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot_0 = RtlGetNtSystemRoot_0();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot_0, Handle);
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
    NtClose_0(Handle[0]);
  return VolumeHandle >= 0;
}
