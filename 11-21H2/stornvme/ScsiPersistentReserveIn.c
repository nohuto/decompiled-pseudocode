/*
 * XREFs of ScsiPersistentReserveIn @ 0x1C002091C
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     NVMeReservationReportCapabilities @ 0x1C001E638 (NVMeReservationReportCapabilities.c)
 *     NVMeReservationReportStatus @ 0x1C001E814 (NVMeReservationReportStatus.c)
 */

__int64 __fastcall ScsiPersistentReserveIn(__int64 a1, __int64 a2, _BYTE *a3)
{
  _DWORD *v3; // r9
  char v4; // bl
  unsigned int v6; // ebx
  unsigned __int8 v7; // r8
  unsigned __int8 v9; // cl
  unsigned __int16 v11; // [rsp+48h] [rbp+10h]

  v3 = (_DWORD *)(a2 + 60);
  v4 = *(_BYTE *)(a2 + 2);
  HIBYTE(v11) = a3[7];
  LOBYTE(v11) = a3[8];
  if ( v4 != 40 )
    v3 = (_DWORD *)(a2 + 16);
  if ( *v3 >= (unsigned int)v11 )
  {
    v7 = a3[1] & 0x1F;
    if ( v7 == 2 )
    {
      return (unsigned int)NVMeReservationReportCapabilities(a1, a2, v11);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 520LL) & 0x20) == 0 )
        goto LABEL_10;
      if ( (v7 & 0xFC) != 0 )
      {
        v6 = -1056964602;
        NVMeSetSenseData(a2, 6, 5, 0x24u);
        return v6;
      }
      v9 = v4 == 40 ? *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10) : *(_BYTE *)(a2 + 7);
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8LL * v9 + 1752) + 112LL) )
      {
LABEL_10:
        v6 = -1056964602;
        goto LABEL_5;
      }
      return (unsigned int)NVMeReservationReportStatus(a1, a2, v7, v11, 0);
    }
  }
  v6 = -1056964604;
LABEL_5:
  *(_BYTE *)(a2 + 3) = 6;
  return v6;
}
