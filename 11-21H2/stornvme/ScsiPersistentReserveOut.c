/*
 * XREFs of ScsiPersistentReserveOut @ 0x1C0020A04
 * Callers:
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     NVMeReservationAcquireCommand @ 0x1C001DFE0 (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x1C001E16C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x1C001E2EC (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x1C001E4D0 (NVMeReservationReleaseCommand.c)
 */

__int64 __fastcall ScsiPersistentReserveOut(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r10
  char v5; // r8
  char v7; // cl
  unsigned int v8; // ebx
  unsigned __int8 v9; // cl
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int16 v15; // [rsp+50h] [rbp+18h]

  v3 = a2;
  v5 = a3[2];
  if ( (v5 & 0xF) != 1 && (v5 & 0xF) != 3 && (v5 & 0xF) != 5 && (v5 & 0xF) != 6 && (v5 & 0xFu) - 7 >= 2 )
  {
    v7 = a3[1] & 0x1F;
    if ( (unsigned __int8)(v7 - 1) <= 1u || (unsigned __int8)(v7 - 4) <= 1u )
      goto LABEL_8;
  }
  if ( (v5 & 0xF0) != 0 )
    return (unsigned int)-1056964602;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1640) + 520LL) & 0x20) == 0
    || (*(_BYTE *)(a2 + 2) != 40 ? (v9 = *(_BYTE *)(a2 + 7)) : (v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10)),
        !*(_BYTE *)(*(_QWORD *)(a1 + 8LL * v9 + 1752) + 112LL)) )
  {
    v8 = -1056964602;
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return v8;
  }
  GetNamespaceId(a1, v9);
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    v11 = *(_QWORD *)(v3 + 64);
    v12 = 60LL;
  }
  else
  {
    v11 = *(_QWORD *)(v3 + 24);
    v12 = 16LL;
  }
  LOBYTE(v15) = a3[8];
  HIBYTE(v15) = a3[7];
  if ( *(_DWORD *)(v3 + v12) < (unsigned int)v15 )
  {
    v8 = -1056964604;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(v11 + 20) & 8) == 0 )
  {
    if ( (a3[1] & 0x1F) != 0 )
    {
      switch ( a3[1] & 0x1F )
      {
        case 1:
          return (unsigned int)NVMeReservationAcquireCommand(v10, v3);
        case 2:
        case 3:
          return (unsigned int)NVMeReservationReleaseCommand(v10, v3);
        case 4:
        case 5:
          return (unsigned int)NVMeReservationAcquireCommand(v10, v3);
      }
      if ( (a3[1] & 0x1F) != 6 )
      {
        if ( (a3[1] & 0x1F) != 7 )
        {
          NVMeSetSenseData(v3, 6, 5, 0x24u);
          return (unsigned int)-1056964602;
        }
        return (unsigned int)NVMeReservationRegisterAndMoveCommand(v10, v3);
      }
    }
    return (unsigned int)NVMeReservationRegisterCommand(v10, v3);
  }
LABEL_8:
  v8 = -1056964602;
LABEL_9:
  *(_BYTE *)(v3 + 3) = 6;
  return v8;
}
