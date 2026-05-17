/*
 * XREFs of RtlpQueryDiskWriteConstraintPolicy @ 0x18012D0BC
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180049CD0 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlpGetVolumeHandle @ 0x18005F798 (RtlpGetVolumeHandle.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x18012D124 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskWriteConstraintPolicy(unsigned __int16 *a1, __int64 a2)
{
  int VolumeHandle; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  VolumeHandle = RtlpGetVolumeHandle(a1, &Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlpQueryDiskWriteConstraintPolicyByHandle(Handle, a2);
    if ( VolumeHandle >= 0 )
      VolumeHandle = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)VolumeHandle;
}
