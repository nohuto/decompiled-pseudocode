/*
 * XREFs of RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0053504
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00847D4 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C0002D20 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0021860 (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r14
  size_t Length; // r15
  int v6; // edx
  unsigned int v7; // esi
  int PhysicalTopologyBufferForMiniport; // eax
  _DWORD *v9; // r13
  unsigned int v10; // ebx
  __int64 v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  v13 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v6 = *(_DWORD *)(&MasterIrp->Size + 1);
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      v7 = -1073741637;
LABEL_19:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v7);
    }
LABEL_7:
    v7 = 0;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  if ( (unsigned int)Length < 0x38 )
  {
    if ( (unsigned int)Length < 8 )
    {
      v7 = -1073741789;
      goto LABEL_19;
    }
    *(_DWORD *)&MasterIrp->Type = 56;
    *(_DWORD *)(&MasterIrp->Size + 1) = 56;
    a2->IoStatus.Information = 8LL;
    goto LABEL_7;
  }
  PhysicalTopologyBufferForMiniport = RaBuildQueryPhysicalTopologyBufferForMiniport(
                                        *(_QWORD *)(a1 + 8),
                                        (__int64)a2,
                                        (__int64 *)&P,
                                        (unsigned int *)&v13);
  v9 = P;
  v7 = PhysicalTopologyBufferForMiniport;
  if ( PhysicalTopologyBufferForMiniport >= 0 )
  {
    v7 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v13, 0LL, v12, 64);
    if ( ((v7 + 0x80000000) & 0x80000000) != 0 || v7 == -2147483643 )
    {
      v10 = v9[8];
      memset(MasterIrp, 0, Length);
      if ( (unsigned int)Length >= v10 )
        LODWORD(Length) = v10;
      memmove(MasterIrp, v9 + 7, (unsigned int)Length);
      *(_DWORD *)&MasterIrp->Type = 56;
      a2->IoStatus.Information = (unsigned int)Length;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72536152u);
  if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147483643 )
    goto LABEL_19;
  return RaidCompleteRequestEx(a2, 0, v7);
}
