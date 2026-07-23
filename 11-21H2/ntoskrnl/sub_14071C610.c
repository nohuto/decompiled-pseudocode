/*
 * XREFs of sub_14071C610 @ 0x14071C610
 * Callers:
 *     FsRtlOplockFsctrl @ 0x14071C5D0 (FsRtlOplockFsctrl.c)
 *     FsRtlOplockFsctrlEx @ 0x14071C5F0 (FsRtlOplockFsctrlEx.c)
 *     FsRtlUpperOplockFsctrl @ 0x14092E730 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     sub_140240DB4 @ 0x140240DB4 (sub_140240DB4.c)
 *     sub_14024E7F8 @ 0x14024E7F8 (sub_14024E7F8.c)
 *     sub_1402A22E0 @ 0x1402A22E0 (sub_1402A22E0.c)
 *     sub_1402A2490 @ 0x1402A2490 (sub_1402A2490.c)
 *     sub_1402A2DE8 @ 0x1402A2DE8 (sub_1402A2DE8.c)
 *     IoIsOperationSynchronous @ 0x1402A2FA0 (IoIsOperationSynchronous.c)
 *     sub_1402A386C @ 0x1402A386C (sub_1402A386C.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402A3F9C @ 0x1402A3F9C (sub_1402A3F9C.c)
 *     FsRtlCheckOplockEx @ 0x1402A5CB0 (FsRtlCheckOplockEx.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1403857EC @ 0x1403857EC (sub_1403857EC.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_140542458 @ 0x140542458 (sub_140542458.c)
 *     sub_1406BE148 @ 0x1406BE148 (sub_1406BE148.c)
 *     sub_14092E8CC @ 0x14092E8CC (sub_14092E8CC.c)
 *     sub_14092EA08 @ 0x14092EA08 (sub_14092EA08.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14071C610(__int64 *Oplock, PIRP Irp, unsigned int a3, int a4, unsigned int a5)
{
  unsigned int v7; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int v9; // ebx
  struct _IRP *MasterIrp; // r13
  int MdlAddress; // eax
  int v12; // ebx
  void *v13; // rax
  int v14; // edx
  ULONG Options; // eax
  PFAST_MUTEX *v17; // rsi
  bool v18; // cf
  int v20; // ebx
  int v21; // eax
  void *Pool2; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rbx
  _QWORD *v25; // r14
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  char v29; // r9
  int v30; // [rsp+40h] [rbp-58h]
  int v31; // [rsp+44h] [rbp-54h]
  int v32; // [rsp+48h] [rbp-50h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  void *v34; // [rsp+58h] [rbp-40h]
  PVOID v35; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+18h]
  int v37; // [rsp+B8h] [rbp+20h]

  v37 = a4;
  v36 = a3;
  v7 = 0;
  v34 = 0LL;
  P = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100000) != 0 )
    {
      if ( a3 != 1
        || (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFFFFF7F) != 0
        || (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 7) != 7 )
      {
        return (unsigned int)-1073741598;
      }
      v7 = sub_1402A22E0(Irp);
      if ( v7 )
        return v7;
      return (unsigned int)sub_1403857EC(Oplock, (__int64)CurrentStackLocation, 0LL, 1u, 0, 0xC8u, a5);
    }
    if ( (Options & 0x10000) != 0 )
    {
      v7 = sub_1402A22E0(Irp);
      if ( !v7 )
      {
        v17 = (PFAST_MUTEX *)*Oplock;
        if ( !*Oplock )
        {
          v17 = (PFAST_MUTEX *)sub_1406BE148();
          *Oplock = (__int64)v17;
        }
        v35 = v17;
        ExAcquireFastMutexUnsafe(v17[19]);
        v7 = FsRtlCheckOplockEx((POPLOCK)Oplock, Irp, 0x30000000u, 0LL, 0LL, 0LL);
        if ( !v7 )
        {
          P = (PVOID)ExAllocatePool2(288LL, 72LL, 1869763398LL);
          v7 = sub_1402A2490(Oplock, (__int64)CurrentStackLocation, 0LL, 0x10000u, (__int64)&P, 0, 0, a5);
        }
        if ( P )
        {
          sub_140240DB4((__int64)v17, (__int64)P);
          ExFreePoolWithTag(P, 0);
        }
        ExReleaseFastMutexUnsafe(v17[19]);
      }
    }
    return v7;
  }
  v9 = 2;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x90000u:
LABEL_51:
      v23 = v9 | 0x40;
      if ( a3 == 1
        && !IoIsOperationSynchronous(Irp)
        && (Irp->Flags & 0x40) == 0
        && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        return (unsigned int)sub_1403857EC(Oplock, (__int64)CurrentStackLocation, (__int64)Irp, 1u, 0, v23, a5);
      }
      goto LABEL_56;
    case 0x90004u:
      if ( a3
        || IoIsOperationSynchronous(Irp)
        || (Irp->Flags & 0x40) != 0
        || (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
      {
        v7 = -1073741598;
        Irp->IoStatus.Status = -1073741598;
        goto LABEL_58;
      }
      return (unsigned int)sub_1402A2490(Oplock, (__int64)CurrentStackLocation, (__int64)Irp, 0x10u, 0LL, 1, 0, a5);
    case 0x90008u:
LABEL_50:
      v9 *= 2;
      goto LABEL_51;
    case 0x9000Cu:
      v29 = 1;
      return (unsigned int)sub_140542458(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v29, a5);
    case 0x90010u:
      return (unsigned int)sub_14092E8CC(*Oplock, Irp->Tail.Overlay.CurrentStackLocation, Irp);
    case 0x90014u:
      return (unsigned int)sub_14092EA08(*Oplock, Irp, Irp);
    case 0x90050u:
      v29 = 0;
      return (unsigned int)sub_140542458(*Oplock, (__int64)CurrentStackLocation, (__int64)Irp, v29, a5);
    case 0x9005Cu:
      v9 = 4;
      goto LABEL_50;
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 590400 )
  {
    v7 = -1073741811;
LABEL_67:
    Irp->IoStatus.Status = v7;
    goto LABEL_58;
  }
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC || CurrentStackLocation->Parameters.Read.Length < 0x18 )
  {
    v7 = -1073741789;
    goto LABEL_67;
  }
  if ( MasterIrp->Type > 1u )
    goto LABEL_69;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (MdlAddress & 1) == 0 )
  {
    if ( (MdlAddress & 2) != 0 )
    {
      LODWORD(v35) = *(_DWORD *)(&MasterIrp->Size + 1);
      v20 = (((unsigned __int8)v35 & 1) << 12) | (((unsigned __int8)v35 & 6) << 12);
      if ( !v20 || v20 == 4096 || v20 == 12288 || v20 == 20480 || v20 == 28672 )
      {
        if ( !IoIsOperationSynchronous(Irp) )
        {
          if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
          {
            *(_OWORD *)&MasterIrp->Type = 0LL;
            *(_QWORD *)&MasterIrp->Flags = 0LL;
            *(_DWORD *)&MasterIrp->Type = 1572865;
            Irp->IoStatus.Information = 24LL;
            Irp->IoStatus.Status = 0;
            IofCompleteRequest(Irp, 1);
            return 0;
          }
          if ( (v20 & 0x2000) != 0 )
          {
            Pool2 = (void *)ExAllocatePool2(288LL, 72LL, 1869763398LL);
            P = Pool2;
            v21 = *(_DWORD *)(&MasterIrp->Size + 1);
          }
          else
          {
            LOBYTE(v21) = (_BYTE)v35;
            Pool2 = v34;
          }
          v7 = sub_14039F3B0(
                 *Oplock,
                 (__int64)CurrentStackLocation,
                 (__int64)Irp,
                 ((v21 & 1) << 12) | ((unsigned __int8)(v21 & 6) << 12),
                 (unsigned __int64)&P & -(__int64)(Pool2 != 0LL),
                 a5);
          goto LABEL_24;
        }
        goto LABEL_72;
      }
    }
LABEL_69:
    v7 = -1073741811;
    Irp->IoStatus.Status = -1073741811;
    goto LABEL_58;
  }
  v32 = *(_DWORD *)(&MasterIrp->Size + 1);
  v31 = (v32 & 1) << 12;
  LODWORD(v35) = v32 & 4;
  v30 = (v32 & 2) << 12;
  v12 = v31 | v30 | ((_DWORD)v35 != 0 ? 0x4000 : 0);
  if ( v12 )
  {
    if ( v12 == 12288 )
    {
LABEL_17:
      if ( !a3 && !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
      {
        if ( (v12 & 0x2000) != 0 )
        {
          v13 = (void *)ExAllocatePool2(288LL, 72LL, 1869763398LL);
          P = v13;
          v14 = *(_DWORD *)(&MasterIrp->Size + 1);
        }
        else
        {
          v13 = v34;
          LOBYTE(v14) = v32;
        }
        v7 = sub_1402A2490(
               Oplock,
               (__int64)CurrentStackLocation,
               (__int64)Irp,
               ((v14 & 1) << 12) | ((unsigned __int8)(v14 & 6) << 12),
               (unsigned __int64)&P & -(__int64)(v13 != 0LL),
               1,
               0,
               a5);
LABEL_24:
        if ( P )
        {
          sub_140240DB4(*Oplock, (__int64)P);
          ExFreePoolWithTag(P, 0);
        }
        return v7;
      }
      goto LABEL_56;
    }
    if ( v12 != 28672 )
    {
      if ( v12 == 4096 )
        goto LABEL_17;
      if ( v12 != 20480 )
      {
LABEL_72:
        v7 = -1073741811;
        goto LABEL_57;
      }
    }
    if ( !IoIsOperationSynchronous(Irp) && (CurrentStackLocation->FileObject->Flags & 0x4000) == 0 )
    {
      v18 = (_DWORD)v35 != 0;
      LODWORD(v35) = -(int)v35;
      return (unsigned int)sub_1403857EC(
                             Oplock,
                             (__int64)CurrentStackLocation,
                             (__int64)Irp,
                             v36,
                             v37,
                             v31 | v30 | (v18 ? 16448 : 64),
                             a5);
    }
LABEL_56:
    v7 = -1073741598;
LABEL_57:
    Irp->IoStatus.Status = v7;
LABEL_58:
    IofCompleteRequest(Irp, 1);
    return v7;
  }
  v24 = *Oplock;
  if ( *Oplock )
  {
    v35 = 0LL;
    if ( (*(_DWORD *)(v24 + 144) & 0x10000) != 0 )
    {
      if ( sub_1402A3F9C(v24, (__int64)CurrentStackLocation->FileObject, &v35) )
      {
        v25 = v35;
        sub_1402A386C((__int64)v35);
        v26 = v25[7];
        v27 = (_QWORD *)v25[8];
        if ( *(_QWORD **)(v26 + 8) != v25 + 7 || (_QWORD *)*v27 != v25 + 7 )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        if ( *(_QWORD *)(v24 + 120) == v24 + 120 )
          *(_DWORD *)(v24 + 144) &= 0xFFFCFFFF;
        if ( v25[5] )
          sub_140240DB4(v24, (__int64)v25);
        ExFreePoolWithTag(v25, 0);
        sub_1402A2DE8(v24);
        sub_14024E7F8(v28);
      }
    }
  }
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 1);
  return 0;
}
