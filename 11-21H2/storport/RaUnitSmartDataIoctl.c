/*
 * XREFs of RaUnitSmartDataIoctl @ 0x1C0052728
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C00145D0 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0021A54 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0021AA0 (StorBuildSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0021CDC (PortSrbTranslateSrbToNtStatus.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaUnitBuildSrbForSmartReadData @ 0x1C0050D44 (RaUnitBuildSrbForSmartReadData.c)
 *     RaUnitBuildSrbForSmartReturnStatus @ 0x1C0050FCC (RaUnitBuildSrbForSmartReturnStatus.c)
 *     RaUnitSmartReturnStatus @ 0x1C0052C4C (RaUnitSmartReturnStatus.c)
 */

__int64 __fastcall RaUnitSmartDataIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  signed int Status; // edi
  __int64 v4; // r14
  int v6; // ecx
  _IRP *MasterIrp; // r15
  unsigned int Length; // r9d
  __int64 v10; // rbx
  __int64 v11; // r9
  _OWORD *v12; // r15
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  unsigned __int64 v15; // rsi
  __int64 Pool; // rax
  __int64 v17; // rdi
  __int64 Srb; // rbp
  void *v19; // r12
  char v20; // al
  PVOID v21; // rdi
  PVOID v22; // rcx
  __int64 v23; // r8
  IRP *v24; // rax
  int v25; // eax
  IRP *v26; // r10
  _OWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // r9
  _OWORD *v30; // rax
  _OWORD *v31; // r15
  __int64 v32; // rcx
  __int128 v33; // xmm1
  bool v34; // cf
  _OWORD *v35; // r14
  __int128 v36; // xmm1
  IRP *v37; // rcx
  int v39; // [rsp+20h] [rbp-88h]
  int v40; // [rsp+20h] [rbp-88h]
  int v41; // [rsp+30h] [rbp-78h]
  __int64 v42; // [rsp+40h] [rbp-68h]
  _IO_STATUS_BLOCK v43; // [rsp+48h] [rbp-60h] BYREF
  char v44; // [rsp+B0h] [rbp+8h] BYREF
  PIRP v45; // [rsp+B8h] [rbp+10h]
  PIRP Irp; // [rsp+C0h] [rbp+18h]
  PVOID P; // [rsp+C8h] [rbp+20h]

  v45 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = 0;
  v4 = *(_QWORD *)(a1 + 3288);
  v6 = *(_DWORD *)(a1 + 3296);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v43 = 0LL;
  v44 = 0;
  if ( (((v6 - 8) & 0xFFFFFFFD) != 0 || (*(_BYTE *)(a1 + 450) & 0x10) == 0) && v6 != 11 )
  {
    Status = -1073741637;
LABEL_54:
    v15 = 0LL;
    goto LABEL_55;
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC )
    goto LABEL_53;
  if ( Length < 0x20C )
  {
    Status = -1073741789;
    goto LABEL_54;
  }
  if ( !MasterIrp
    || *(_DWORD *)&MasterIrp->Type != 12
    || *(_DWORD *)(&MasterIrp->Size + 1) != 12
    || LODWORD(MasterIrp->MdlAddress) > 1 )
  {
LABEL_53:
    Status = -1073741811;
    goto LABEL_54;
  }
  v10 = MEMORY[0xFFFFF78000000014];
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
    if ( v4 )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( !v4 )
  {
LABEL_20:
    Pool = RaidAllocatePool(64LL, 528LL, 1414750546LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 3288) = Pool;
    v4 = Pool;
    if ( !Pool )
    {
      Status = -1073741670;
      goto LABEL_54;
    }
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(v4 + 520) & 1) != 0 && MEMORY[0xFFFFF78000000014] - *(_QWORD *)v4 < 0x430E23400uLL )
  {
    *(_DWORD *)&MasterIrp->Type = 524;
    v11 = 4LL;
    *(_DWORD *)(&MasterIrp->Size + 1) = 524;
    LOBYTE(MasterIrp->MdlAddress) = (*(_DWORD *)(v4 + 520) & 2) != 0;
    v12 = (_OWORD *)((char *)&MasterIrp->MdlAddress + 1);
    v13 = (_OWORD *)(v4 + 8);
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v14 = v13[7];
      v13 += 8;
      *(v12 - 1) = v14;
      --v11;
    }
    while ( v11 );
    *(_DWORD *)(v4 + 520) |= 1u;
    v15 = 524LL;
    *(_QWORD *)v4 = v10;
    goto LABEL_55;
  }
LABEL_22:
  v17 = *(_QWORD *)(a1 + 24) + 344LL;
  v42 = v17;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 442LL), 1);
  if ( !Srb )
  {
    Status = -1073741801;
    goto LABEL_54;
  }
  v19 = (void *)RaidAllocatePool(64LL, 512LL, 1918067026LL, *(_QWORD *)(a1 + 8));
  if ( v19 )
  {
    P = (PVOID)RaidAllocatePool(64LL, 255LL, 1314087250LL, *(_QWORD *)(a1 + 8));
    if ( !P )
    {
      Status = -1073741801;
LABEL_28:
      v15 = 0LL;
      goto LABEL_29;
    }
    RaUnitBuildSrbForSmartReturnStatus(a1, (__int64)a2, Srb, (__int64)P, v39, *(_BYTE *)(v17 + 98));
    Status = RaUnitSmartReturnStatus(a1, Srb, &v44);
    if ( Status < 0 )
      goto LABEL_28;
    v20 = v44;
    v15 = 9LL;
    v21 = P;
    v22 = P;
    *(_DWORD *)&MasterIrp->Type = 524;
    *(_DWORD *)(&MasterIrp->Size + 1) = 9;
    LOBYTE(MasterIrp->MdlAddress) = v20;
    memset(v22, 0, 0xFFuLL);
    RaUnitBuildSrbForSmartReadData(a1, (__int64)v45, Srb, (__int64)v19, v40, (__int64)v21, v41, *(_BYTE *)(v42 + 98));
    v24 = StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), Srb, v23, &v43);
    Irp = v24;
    if ( !v24 )
    {
      Status = -1073741801;
      goto LABEL_29;
    }
    v25 = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v24);
    v26 = Irp;
    Status = v25;
    if ( v25 >= 0 )
    {
      Status = Irp->IoStatus.Status;
      if ( Status < 0 )
      {
LABEL_50:
        StorFreeSynchronousScsiRequest(v26);
LABEL_29:
        ExFreePoolWithTag(v19, 0x72536152u);
        if ( P )
          ExFreePoolWithTag(P, 0x4E536152u);
        goto LABEL_31;
      }
      Status = PortSrbTranslateSrbToNtStatus(*(_BYTE *)(Srb + 3));
    }
    if ( Status >= 0 )
    {
      if ( *(_BYTE *)(Srb + 2) == 40 )
      {
        v27 = *(_OWORD **)(Srb + 64);
        v28 = *(_DWORD *)(Srb + 60);
      }
      else
      {
        v27 = *(_OWORD **)(Srb + 24);
        v28 = *(_DWORD *)(Srb + 16);
      }
      if ( v28 >= 0x200 )
      {
        v29 = 4LL;
        *(_DWORD *)(&MasterIrp->Size + 1) = 524;
        v30 = v27;
        v31 = (_OWORD *)((char *)&MasterIrp->MdlAddress + 1);
        v32 = 4LL;
        do
        {
          *v31 = *v30;
          v31[1] = v30[1];
          v31[2] = v30[2];
          v31[3] = v30[3];
          v31[4] = v30[4];
          v31[5] = v30[5];
          v31[6] = v30[6];
          v31 += 8;
          v33 = v30[7];
          v30 += 8;
          *(v31 - 1) = v33;
          --v32;
        }
        while ( v32 );
        v34 = v44 != 0;
        *(_QWORD *)v4 = v10;
        *(_DWORD *)(v4 + 520) = (v34 ? 2 : 0) | *(_DWORD *)(v4 + 520) & 0xFFFFFFFD | 1;
        v35 = (_OWORD *)(v4 + 8);
        do
        {
          *v35 = *v27;
          v35[1] = v27[1];
          v35[2] = v27[2];
          v35[3] = v27[3];
          v35[4] = v27[4];
          v35[5] = v27[5];
          v35[6] = v27[6];
          v35 += 8;
          v36 = v27[7];
          v27 += 8;
          *(v35 - 1) = v36;
          --v29;
        }
        while ( v29 );
        v15 = 524LL;
      }
      else
      {
        Status = -1073741823;
      }
    }
    goto LABEL_50;
  }
  Status = -1073741801;
  v15 = 0LL;
LABEL_31:
  if ( *(_BYTE *)(v42 + 98) == 1 )
  {
    *(_QWORD *)(Srb + 80) = 0LL;
    *(_QWORD *)(Srb + 104) = 0LL;
  }
  else
  {
    *(_QWORD *)(Srb + 48) = 0LL;
    *(_QWORD *)(Srb + 56) = 0LL;
    *(_QWORD *)(Srb + 32) = 0LL;
  }
  ExFreePoolWithTag((PVOID)Srb, 0x72536152u);
LABEL_55:
  v37 = v45;
  v45->IoStatus.Information = v15;
  return RaidCompleteRequestEx(v37, 0, Status);
}
