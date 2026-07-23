/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x180062740
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180018A20 (RtlGetNtSystemRoot.c)
 *     RtlpGetVolumeHandle @ 0x180062628 (RtlpGetVolumeHandle.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x1800627AC (RtlQueryVolumeDiskSpeedPolicy.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 */

_BOOL8 __fastcall RtlpDiskSpeedInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned __int16 *NtSystemRoot; // rax
  NTSTATUS VolumeHandle; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, &Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle, &v7);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v7;
    }
  }
  if ( Handle )
    NtClose(Handle);
  return VolumeHandle >= 0;
}
