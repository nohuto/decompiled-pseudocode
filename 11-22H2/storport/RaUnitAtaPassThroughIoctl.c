/*
 * XREFs of RaUnitAtaPassThroughIoctl @ 0x1C002531A
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaSendIrpSynchronous @ 0x1C0017514 (RaSendIrpSynchronous.c)
 *     PortPassThroughBuildIrpEx @ 0x1C001DF14 (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeIrpEx @ 0x1C001E544 (PortPassThroughFreeIrpEx.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     RaUnitAtaPassThroughMarshalResults @ 0x1C00257C6 (RaUnitAtaPassThroughMarshalResults.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0032248 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C005D124 (RaUnitAtaPassThroughValidateInput.c)
 *     RaUnitSetAtaPassThroughCdb @ 0x1C005E604 (RaUnitSetAtaPassThroughCdb.c)
 */

__int64 __fastcall RaUnitAtaPassThroughIoctl(__int64 a1, IRP *a2, char a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  _IRP *v8; // r15
  char *v9; // r12
  int Status; // edi
  _IRP *MasterIrp; // rdi
  _IRP *v12; // rbx
  _IRP *v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  __int64 MdlAddress_low; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  KPROCESSOR_MODE AccessMode; // al
  PIRP v20; // r13
  _BYTE *Srb; // rbx
  _BYTE *v22; // r15
  void *Pool; // rax
  void *v24; // rdx
  char v25; // cl
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  char *v29; // rdx
  int v30; // ecx
  int v31; // ecx
  int MdlAddress; // eax
  __int64 v33; // r8
  _IRP *v34; // rcx
  _BYTE *v35; // rsi
  __int64 v36; // rcx
  _BYTE *v39; // [rsp+58h] [rbp-31h]
  PVOID P[2]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v41; // [rsp+70h] [rbp-19h] BYREF
  __int128 v42; // [rsp+80h] [rbp-9h]
  __int128 v43; // [rsp+90h] [rbp+7h]

  v3 = *(_QWORD *)(a1 + 24);
  v39 = 0LL;
  P[0] = 0LL;
  v6 = *(_QWORD *)(v3 + 568);
  v8 = 0LL;
  v9 = 0LL;
  v41 = 0LL;
  LODWORD(v3) = *(_DWORD *)(v6 + 184);
  v42 = 0LL;
  v43 = 0LL;
  if ( (v3 & 2) != 0 || (*(_BYTE *)(a1 + 450) & 0x10) != 0 )
  {
    Status = RaUnitAtaPassThroughValidateInput(a1);
    if ( Status >= 0 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      v12 = MasterIrp;
      if ( IoIs32bitProcess(a2) )
      {
        v13 = a2->AssociatedIrp.MasterIrp;
        MasterIrp = (_IRP *)&v41;
        v14 = *(_OWORD *)&v13->Type;
        *((_QWORD *)&v43 + 1) = v13->ThreadListEntry.Flink;
        v15 = *(_QWORD *)&v13->Flags;
        *(_QWORD *)&v43 = v13->AssociatedIrp.MasterIrp;
        *((_QWORD *)&v42 + 1) = *(&v13->Flags + 1);
        v41 = v14;
        *(_QWORD *)&v42 = v15;
      }
      if ( DisableIEEE1667 && ((*((_BYTE *)&MasterIrp->Size + 4) - 92) & 0xFD) == 0 && LOBYTE(MasterIrp->Type) == 0xEE )
      {
        Status = -1073741637;
      }
      else
      {
        MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
        if ( !(_DWORD)MdlAddress_low )
          goto LABEL_22;
        v8 = MasterIrp->AssociatedIrp.MasterIrp;
        if ( !a3 )
          v8 = (_IRP *)((char *)v8 + (_QWORD)v12);
        v17 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v17 + 4306) )
        {
          v18 = *(_DWORD *)(v17 + 772);
          if ( *(_DWORD *)(v17 + 372) < v18 )
            v18 = *(_DWORD *)(v17 + 372);
        }
        else
        {
          v18 = *(_DWORD *)(v17 + 372);
        }
        if ( (unsigned int)MdlAddress_low > *(_DWORD *)(v17 + 368)
          || (unsigned int)((MdlAddress_low + (unsigned __int64)((unsigned __int16)v8 & 0xFFF) + 4095) >> 12) > v18 )
        {
          Status = -1073741811;
        }
        else
        {
LABEL_22:
          if ( a3 )
            AccessMode = a2->RequestorMode;
          else
            AccessMode = 0;
          v20 = PortPassThroughBuildIrpEx(
                  *(_QWORD *)(a1 + 8),
                  v8,
                  MdlAddress_low,
                  MasterIrp->Size & 2,
                  AccessMode,
                  a2,
                  0,
                  0LL,
                  0,
                  0LL);
          if ( v20 )
          {
            Srb = (_BYTE *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)(*(_QWORD *)(a1 + 24) + 442LL), 1);
            if ( Srb )
            {
              Pool = (void *)RaidAllocatePool(64LL, 79LL, 1314087250LL, *(_QWORD *)(a1 + 8));
              P[0] = Pool;
              v24 = Pool;
              if ( Pool )
              {
                v25 = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 442LL);
                Srb[3] = 0;
                if ( v25 == 1 )
                {
                  v26 = *((_DWORD *)Srb + 6);
                  *((_DWORD *)Srb + 5) = 0;
                  v39 = Srb;
                  if ( (MasterIrp->Size & 2) != 0 )
                  {
                    v26 |= 0x40u;
                    *((_DWORD *)Srb + 6) = v26;
                  }
                  if ( (MasterIrp->Size & 4) != 0 )
                    v26 |= 0x80u;
                  v27 = v26 | 0x100;
                  *((_DWORD *)Srb + 6) = v27;
                  if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
                    *((_DWORD *)Srb + 6) = v27 | 0x80000;
                  v28 = *((unsigned int *)Srb + 13);
                  *((_DWORD *)Srb + 15) = MasterIrp->MdlAddress;
                  *((_QWORD *)Srb + 8) = v8;
                  *((_QWORD *)Srb + 10) = v20;
                  *((_DWORD *)Srb + 10) = HIDWORD(MasterIrp->MdlAddress);
                  Srb[v28 + 8] = *((_BYTE *)&MasterIrp->Size + 2);
                  Srb[v28 + 9] = *((_BYTE *)&MasterIrp->Size + 3);
                  Srb[v28 + 10] = *((_BYTE *)&MasterIrp->Size + 4);
                  v9 = &Srb[*((unsigned int *)Srb + 30)];
                  *((_QWORD *)v9 + 2) = Pool;
                  v29 = v9 + 24;
                  *(_DWORD *)v9 = 64;
                  *((_DWORD *)v9 + 1) = 32;
                  *(_WORD *)(v9 + 9) = 4175;
                }
                else
                {
                  v30 = *((_DWORD *)Srb + 3);
                  *(_WORD *)Srb = 88;
                  Srb[2] = 0;
                  Srb[5] = *((_BYTE *)&MasterIrp->Size + 2);
                  Srb[6] = *((_BYTE *)&MasterIrp->Size + 3);
                  Srb[7] = *((_BYTE *)&MasterIrp->Size + 4);
                  Srb[10] = 16;
                  if ( (MasterIrp->Size & 2) != 0 )
                  {
                    v30 |= 0x40u;
                    *((_DWORD *)Srb + 3) = v30;
                  }
                  if ( (MasterIrp->Size & 4) != 0 )
                    v30 |= 0x80u;
                  v31 = v30 | 0x100;
                  *((_DWORD *)Srb + 3) = v31;
                  if ( (*(_BYTE *)(a1 + 449) & 0x10) == 0 )
                    *((_DWORD *)Srb + 3) = v31 | 0x80000;
                  MdlAddress = (int)MasterIrp->MdlAddress;
                  *((_QWORD *)Srb + 4) = v24;
                  v29 = Srb + 72;
                  *((_DWORD *)Srb + 4) = MdlAddress;
                  *((_QWORD *)Srb + 3) = v8;
                  Srb[11] = 79;
                  *((_QWORD *)Srb + 6) = v20;
                  *((_DWORD *)Srb + 5) = HIDWORD(MasterIrp->MdlAddress);
                }
                v22 = v39;
                RaUnitSetAtaPassThroughCdb(MasterIrp, v29, 0LL);
                v20->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Srb;
                RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v20);
                LOBYTE(v33) = a3;
                RaUnitAtaPassThroughMarshalResults(Srb, MasterIrp, v33, &a2->IoStatus);
                if ( IoIs32bitProcess(a2) )
                {
                  v34 = a2->AssociatedIrp.MasterIrp;
                  *(_OWORD *)&v34->Type = *(_OWORD *)&MasterIrp->Type;
                  *(_QWORD *)&v34->Flags = *(_QWORD *)&MasterIrp->Flags;
                  v34->ThreadListEntry.Flink = MasterIrp->ThreadListEntry.Blink;
                  v34->AssociatedIrp.MasterIrp = (_IRP *)MasterIrp->ThreadListEntry.Flink;
                }
                Status = a2->IoStatus.Status;
              }
              else
              {
                Status = -1073741801;
                v22 = 0LL;
              }
            }
            else
            {
              Status = -1073741801;
              v22 = 0LL;
            }
            v35 = Srb;
            PortPassThroughFreeIrpEx(v20);
            if ( Srb )
            {
              if ( P[0] )
                ExFreePoolWithTag(P[0], 0x4E536152u);
              if ( Srb[2] == 40 )
              {
                if ( v39 )
                  v35 = v22;
                if ( v9 )
                  *((_QWORD *)v9 + 2) = 0LL;
                *((_QWORD *)v35 + 10) = 0LL;
                *((_QWORD *)v35 + 13) = 0LL;
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
  }
  else
  {
    Status = -1073741808;
  }
  if ( StorEtwLoggingEnabled )
  {
    *(_OWORD *)P = 0LL;
    IoGetActivityIdIrp(a2, P);
    if ( (byte_1C0092A02 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v36, &EventNonReadWriteRequestComplete, P, a2, Status);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
