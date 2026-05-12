/*
 * XREFs of RaUnitStorageDiagnosticIoctl @ 0x1C00A99B0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001ECDC (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidDiagnosticIoctlStatusToNtStatus @ 0x1C003B008 (RaidDiagnosticIoctlStatusToNtStatus.c)
 *     RaBuildDiagnosticBufferForMiniport @ 0x1C0056374 (RaBuildDiagnosticBufferForMiniport.c)
 */

NTSTATUS __fastcall RaUnitStorageDiagnosticIoctl(__int64 a1, IRP *a2)
{
  char *v2; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  _IRP *MasterIrp; // rsi
  size_t Length; // r14
  signed int v8; // ebx
  int MdlAddress_high; // ecx
  int v11; // ecx
  __int128 v12; // xmm0
  signed int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // [rsp+28h] [rbp-40h]
  int v18; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v18 = 0;
  P = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !MasterIrp )
    goto LABEL_2;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x14 || (unsigned int)Length < 0x24 )
  {
    v8 = -1073741820;
    goto LABEL_29;
  }
  if ( *(_DWORD *)&MasterIrp->Type == 20 && *(_DWORD *)(&MasterIrp->Size + 1) == 20 )
  {
    MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
    if ( MdlAddress_high )
    {
      if ( MdlAddress_high < 4 && (int)MasterIrp->Flags < 1 )
      {
        if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
        {
          ++a2->CurrentLocation;
          a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
          return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
        }
        if ( MdlAddress_high != 2 )
        {
          v16 = -1073741637;
          if ( MdlAddress_high == 3 )
            v16 = -1073741811;
          v8 = v16;
          goto LABEL_33;
        }
        v8 = RaBuildDiagnosticBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, Length, &P, &v18);
        if ( v8 < 0 )
        {
          v2 = (char *)P;
        }
        else
        {
          v2 = (char *)P;
          v8 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v18, 0LL, v17, 128);
          if ( v8 < 0 )
          {
            v15 = 0LL;
          }
          else
          {
            memset_0(MasterIrp, 0, Length);
            v11 = *((_DWORD *)v2 + 5);
            if ( v11 == 6 )
            {
              *(_DWORD *)&MasterIrp->Type = 36;
              v8 = -2147483643;
              MasterIrp->AssociatedIrp.IrpCount = *((_DWORD *)v2 + 15);
              v12 = *(_OWORD *)(v2 + 44);
              *(_DWORD *)(&MasterIrp->Size + 1) = 36;
              *(_OWORD *)&MasterIrp->MdlAddress = v12;
              a2->IoStatus.Information = 36LL;
              goto LABEL_29;
            }
            if ( v11 )
            {
              v13 = RaidDiagnosticIoctlStatusToNtStatus(v11);
              a2->IoStatus.Information = 0LL;
              v8 = v13;
              goto LABEL_29;
            }
            *(_DWORD *)&MasterIrp->Type = 36;
            v14 = *((_DWORD *)v2 + 15);
            if ( v14 >= (int)Length - 32 )
              v14 = Length - 32;
            *(_DWORD *)(&MasterIrp->Size + 1) = v14 + 32;
            MasterIrp->AssociatedIrp.IrpCount = v14;
            *(_OWORD *)&MasterIrp->MdlAddress = *(_OWORD *)(v2 + 44);
            memmove(&MasterIrp->ThreadListEntry, v2 + 68, v14);
            v15 = *(unsigned int *)(&MasterIrp->Size + 1);
          }
          a2->IoStatus.Information = v15;
        }
LABEL_29:
        if ( v2 )
          ExFreePoolWithTag(v2, 0x72536152u);
        if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
          return RaidCompleteRequestEx(a2, 0, v8);
        goto LABEL_33;
      }
    }
  }
LABEL_2:
  v8 = -1073741811;
LABEL_33:
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, v8);
}
