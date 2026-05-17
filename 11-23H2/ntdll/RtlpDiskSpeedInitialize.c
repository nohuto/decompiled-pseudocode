/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x18005F8B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180018810 (RtlGetNtSystemRoot.c)
 *     RtlpGetVolumeHandle @ 0x18005F798 (RtlpGetVolumeHandle.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x18005F91C (RtlQueryVolumeDiskSpeedPolicy.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 */

_BOOL8 __fastcall RtlpDiskSpeedInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *NtSystemRoot; // rax
  int VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = (unsigned __int16 *)RtlGetNtSystemRoot(a1, a2, a3, a4);
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v8);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v8;
    }
  }
  if ( Handle[0] )
    NtClose(Handle[0]);
  return VolumeHandle >= 0;
}
