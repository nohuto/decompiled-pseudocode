/*
 * XREFs of RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C0035130
 * Callers:
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0034FE4 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00351AC (RaidAdapterHwFirmwareGetInfoIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareGetInfoFromMiniport(__int64 a1, IRP *a2, __int64 a3, unsigned int a4)
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
    v7 = *(unsigned int *)(a3 + 44);
    if ( *(_DWORD *)(v7 + a3) == 2 && *(_DWORD *)(v7 + a3 + 4) == 24 )
    {
      *(_DWORD *)(a1 + 5236) = 2;
      *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (2 * *(_BYTE *)(v7 + a3 + 12))) & 2;
    }
    else
    {
      *(_DWORD *)(a1 + 5236) = 1;
    }
  }
  return (unsigned int)v6;
}
