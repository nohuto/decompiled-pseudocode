/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C0001EC4
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C0002208 (RaUnitAtaPassThroughMarshalResults.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C0002360 (RaUnitSetAtaPassThroughCdb.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0002420 (RaUnitAtaPassThroughValidateInput.c)
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C00145D0 (RaSendIrpSynchronous.c)
 *     PortPassThroughBuildIrpEx @ 0x1C001510C (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C0015538 (PortPassThroughFreeIrpEx.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  __int64 v3; // rax
  _IRP *v4; // r12
  char *v6; // r15
  __int64 v7; // rcx
  int Status; // edi
  _IRP *MasterIrp; // rdi
  _IRP *v12; // rbx
  unsigned __int64 v13; // r9
  __int64 MdlAddress_low; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  KPROCESSOR_MODE AccessMode; // al
  __int64 v18; // r8
  IRP *v19; // r13
  _BYTE *Srb; // rbx
  char v21; // cl
  int v22; // ecx
  unsigned __int16 v23; // ax
  int v24; // ecx
  int MdlAddress; // eax
  char *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  _IRP *v30; // rcx
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  int v33; // ecx
  unsigned __int16 Size; // ax
  int v35; // ecx
  __int64 v36; // rcx
  _IRP *v37; // rcx
  _BYTE *v38; // rax
  PVOID P; // [rsp+58h] [rbp-31h]
  __int128 v41; // [rsp+60h] [rbp-29h] BYREF
  __int128 v42; // [rsp+70h] [rbp-19h] BYREF
  __int128 v43; // [rsp+80h] [rbp-9h]
  __int128 v44; // [rsp+90h] [rbp+7h]

  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&v41 = 0LL;
  v4 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(v3 + 568);
  v42 = 0LL;
  LODWORD(v3) = *(_DWORD *)(v7 + 184);
  v43 = 0LL;
  v44 = 0LL;
  if ( (v3 & 2) != 0 || (*(_BYTE *)(a1 + 450) & 0x10) != 0 )
  {
    Status = RaUnitAtaPassThroughValidateInput(a1);
    if ( Status >= 0 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      v12 = MasterIrp;
      if ( IoIs32bitProcess(a2) )
      {
        v30 = a2->AssociatedIrp.MasterIrp;
        MasterIrp = (_IRP *)&v42;
        v31 = *(_OWORD *)&v30->Type;
        *((_QWORD *)&v44 + 1) = v30->ThreadListEntry.Flink;
        v32 = *(_QWORD *)&v30->Flags;
        *(_QWORD *)&v44 = v30->AssociatedIrp.MasterIrp;
        *((_QWORD *)&v43 + 1) = *(&v30->Flags + 1);
        v42 = v31;
        *(_QWORD *)&v43 = v32;
      }
      MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
      if ( !(_DWORD)MdlAddress_low )
        goto LABEL_13;
      v4 = MasterIrp->AssociatedIrp.MasterIrp;
      v15 = *(_QWORD *)(a1 + 24);
      if ( !a3 )
        v4 = (_IRP *)((char *)v4 + (_QWORD)v12);
      v13 = (MdlAddress_low + (unsigned __int64)((unsigned __int16)v4 & 0xFFF) + 4095) >> 12;
      if ( *(_BYTE *)(v15 + 4242) )
      {
        v16 = *(_DWORD *)(v15 + 764);
        if ( *(_DWORD *)(v15 + 372) < v16 )
          v16 = *(_DWORD *)(v15 + 372);
      }
      else
      {
        v16 = *(_DWORD *)(v15 + 372);
      }
      if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v15 + 368) || (unsigned int)v13 > v16 )
      {
        Status = -1073741811;
      }
      else
      {
LABEL_13:
        if ( a3 )
          AccessMode = a2->RequestorMode;
        else
          AccessMode = 0;
        LOBYTE(v13) = MasterIrp->Size & 2;
        v19 = (IRP *)PortPassThroughBuildIrpEx(
                       *(_QWORD *)(a1 + 8),
                       (int)v4,
                       MdlAddress_low,
                       v13,
                       AccessMode,
                       a2,
                       0,
                       0LL,
                       0,
                       0LL);
        if ( v19 )
        {
          LOBYTE(v18) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 442LL);
          Srb = (_BYTE *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0LL, v18, 1LL);
          if ( Srb && (P = (PVOID)RaidAllocatePool(64LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8))) != 0LL )
          {
            v21 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 442LL);
            Srb[3] = 0;
            if ( v21 == 1 )
            {
              v33 = *((_DWORD *)Srb + 6);
              *((_DWORD *)Srb + 5) = 0;
              Size = MasterIrp->Size;
              *(_QWORD *)&v41 = Srb;
              if ( (Size & 2) != 0 )
              {
                v33 |= 0x40u;
                *((_DWORD *)Srb + 6) = v33;
                Size = MasterIrp->Size;
              }
              if ( (Size & 4) != 0 )
                v33 |= 0x80u;
              v35 = v33 | 0x100;
              *((_DWORD *)Srb + 6) = v35;
              if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
                *((_DWORD *)Srb + 6) = v35 | 0x80000;
              v36 = *((unsigned int *)Srb + 13);
              *((_DWORD *)Srb + 15) = MasterIrp->MdlAddress;
              *((_QWORD *)Srb + 8) = v4;
              *((_QWORD *)Srb + 10) = v19;
              *((_DWORD *)Srb + 10) = HIDWORD(MasterIrp->MdlAddress);
              Srb[v36 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
              Srb[v36 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
              Srb[v36 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
              v6 = &Srb[*((unsigned int *)Srb + 30)];
              *((_QWORD *)v6 + 2) = P;
              v26 = v6 + 24;
              *(_DWORD *)v6 = 64;
              *((_DWORD *)v6 + 1) = 32;
              *(_WORD *)(v6 + 9) = 4175;
            }
            else
            {
              v22 = *((_DWORD *)Srb + 3);
              *(_WORD *)Srb = 88;
              Srb[2] = 0;
              Srb[5] = *((_BYTE *)&MasterIrp->Size + 2);
              Srb[6] = *((_BYTE *)&MasterIrp->Size + 3);
              Srb[7] = *((_BYTE *)&MasterIrp->Size + 4);
              Srb[10] = 16;
              v23 = MasterIrp->Size;
              if ( (v23 & 2) != 0 )
              {
                v22 |= 0x40u;
                *((_DWORD *)Srb + 3) = v22;
                v23 = MasterIrp->Size;
              }
              if ( (v23 & 4) != 0 )
                v22 |= 0x80u;
              v24 = v22 | 0x100;
              *((_DWORD *)Srb + 3) = v24;
              if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
                *((_DWORD *)Srb + 3) = v24 | 0x80000;
              MdlAddress = (int)MasterIrp->MdlAddress;
              *((_QWORD *)Srb + 4) = P;
              v26 = Srb + 72;
              *((_DWORD *)Srb + 4) = MdlAddress;
              *((_QWORD *)Srb + 3) = v4;
              Srb[11] = 79;
              *((_QWORD *)Srb + 6) = v19;
              *((_DWORD *)Srb + 5) = HIDWORD(MasterIrp->MdlAddress);
            }
            RaUnitSetAtaPassThroughCdb(MasterIrp, v26, 0LL);
            v19->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
            RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v19);
            LOBYTE(v27) = a3;
            RaUnitAtaPassThroughMarshalResults(Srb, MasterIrp, v27, &a2->IoStatus);
            if ( IoIs32bitProcess(a2) )
            {
              v37 = a2->AssociatedIrp.MasterIrp;
              *(_OWORD *)&v37->Type = *(_OWORD *)&MasterIrp->Type;
              *(_QWORD *)&v37->Flags = *(_QWORD *)&MasterIrp->Flags;
              v37->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
              v37->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
            }
            Status = a2->IoStatus.Status;
          }
          else
          {
            Status = -1073741801;
          }
          PortPassThroughFreeIrpEx(v19);
          if ( Srb )
          {
            if ( P )
              ExFreePoolWithTag(P, 0x4E536152u);
            if ( Srb[2] == 40 )
            {
              v38 = Srb;
              if ( (_QWORD)v41 )
                v38 = (_BYTE *)v41;
              if ( v6 )
                *((_QWORD *)v6 + 2) = 0LL;
              *((_QWORD *)v38 + 10) = 0LL;
              *((_QWORD *)v38 + 13) = 0LL;
            }
            else
            {
              *((_QWORD *)Srb + 4) = 0LL;
              *((_QWORD *)Srb + 6) = 0LL;
              *((_QWORD *)Srb + 7) = 0LL;
            }
            ExFreePoolWithTag(Srb, 0x72536152u);
          }
        }
        else
        {
          Status = -1073741801;
        }
      }
    }
  }
  else
  {
    Status = -1073741808;
  }
  if ( StorEtwLoggingEnabled )
  {
    v41 = 0LL;
    IoGetActivityIdIrp(a2, &v41);
    if ( (byte_1C00799E2 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v28, &EventNonReadWriteRequestComplete, &v41, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
