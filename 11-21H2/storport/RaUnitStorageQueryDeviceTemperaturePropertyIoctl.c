/*
 * XREFs of RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0053958
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0021860 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C004D658 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0054E88 (RaidUnitLogSenseTemperatureSrb.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceTemperaturePropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r15
  _DWORD *v3; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v7; // edx
  size_t Length; // r12
  signed int v9; // esi
  int v10; // ecx
  unsigned int v12; // ebx
  __int64 v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  v14 = 0;
  P = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v9 = -1073741637;
LABEL_21:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v9);
    }
LABEL_7:
    v9 = 0;
    return RaidCompleteRequestEx(a2, 0, v9);
  }
  if ( (unsigned int)Length < 0x28 )
  {
    if ( (unsigned int)Length < 8 )
    {
      v9 = -1073741789;
      goto LABEL_21;
    }
    *(_DWORD *)&MasterIrp->Type = 40;
    *(_DWORD *)(&MasterIrp->Size + 1) = 40;
    a2->IoStatus.Information = 8LL;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 564LL) & 0x20) == 0 )
  {
LABEL_16:
    v9 = RaidUnitLogSenseTemperatureSrb(a1, a2);
    goto LABEL_17;
  }
  v9 = RaBuildQueryTemperaturePropertyBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, (ULONG *)&v14);
  if ( v9 < 0 )
  {
    v3 = P;
  }
  else
  {
    v3 = P;
    v9 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v14, 0LL, v13, 64);
    if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2147483643 )
    {
      if ( (unsigned int)(v9 + 1073741822) > 0xE || (v10 = 18433, !_bittest(&v10, v9 + 1073741822)) )
      {
        if ( v9 != -1073741637 )
          goto LABEL_17;
      }
      goto LABEL_16;
    }
    v12 = v3[8];
    memset(MasterIrp, 0, Length);
    if ( (unsigned int)Length >= v12 )
      LODWORD(Length) = v12;
    memmove(MasterIrp, v3 + 7, (unsigned int)Length);
    *(_DWORD *)&MasterIrp->Type = 40;
    a2->IoStatus.Information = (unsigned int)Length;
  }
LABEL_17:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2147483643 )
    goto LABEL_21;
  return RaidCompleteRequestEx(a2, 0, v9);
}
