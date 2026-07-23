/*
 * XREFs of sub_1402AACA0 @ 0x1402AACA0
 * Callers:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     sub_14029BAD0 @ 0x14029BAD0 (sub_14029BAD0.c)
 *     sub_1402AA860 @ 0x1402AA860 (sub_1402AA860.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     sub_1404183E0 @ 0x1404183E0 (sub_1404183E0.c)
 *     sub_140556050 @ 0x140556050 (sub_140556050.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     sub_1406BF5F0 @ 0x1406BF5F0 (sub_1406BF5F0.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     sub_14070FC40 @ 0x14070FC40 (sub_14070FC40.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     sub_140935320 @ 0x140935320 (sub_140935320.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     sub_14020B830 @ 0x14020B830 (sub_14020B830.c)
 *     sub_1402AACD0 @ 0x1402AACD0 (sub_1402AACD0.c)
 *     sub_140A7FE00 @ 0x140A7FE00 (sub_140A7FE00.c)
 */

__int64 __fastcall sub_1402AACA0(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !dword_140D06AD0 )
    return sub_1402AACD0(a1, a2);
  if ( dword_140D06AD0 == 2 || dword_140C1AA70 != 1 )
    return sub_14020B830(a1, a2);
  return sub_140A7FE00(a1, a2, a3, retaddr);
}
