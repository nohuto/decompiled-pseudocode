/*
 * XREFs of RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0035F9C
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0035E50 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0036018 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoFromMiniport(__int64 a1, IRP *a2, unsigned int *a3, ULONG a4)
{
  int v6; // edx
  __int64 v7; // rcx

  v6 = RaidAdapterSendSrbIoControlSynchronously(
         a1,
         a2,
         a3,
         a4,
         (__int64 (__fastcall *)(_QWORD))PortSrbTranslateFirmwareIoctlStatusToNtStatus,
         0,
         64);
  if ( v6 >= 0 )
  {
    v7 = a3[11];
    if ( *(unsigned int *)((char *)a3 + v7) == 2 && *(unsigned int *)((char *)a3 + v7 + 4) == 24 )
    {
      *(_DWORD *)(a1 + 5300) = 2;
      *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (2 * *((_BYTE *)a3 + v7 + 12))) & 2;
    }
    else
    {
      *(_DWORD *)(a1 + 5300) = 1;
    }
  }
  return (unsigned int)v6;
}
