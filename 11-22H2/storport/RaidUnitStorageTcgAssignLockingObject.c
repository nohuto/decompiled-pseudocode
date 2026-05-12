/*
 * XREFs of RaidUnitStorageTcgAssignLockingObject @ 0x1C00528E0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidUnitStorageTcgAssignLockingObject(__int64 a1, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v4; // r14
  char v5; // r15
  __int64 v6; // r12
  _IRP *v7; // r13
  _IRP *MasterIrp; // rbx
  unsigned int Options; // ecx
  unsigned int Flink; // eax
  unsigned int v12; // eax
  int TcgProperties; // edi
  _IRP *v14; // r14
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  char v18; // r11
  __int64 v19; // r9
  const wchar_t *v20; // rax
  __int64 v21; // r10
  int v22; // r9d
  const wchar_t *v23; // r8
  int v25; // [rsp+B0h] [rbp-88h]
  int v26; // [rsp+B8h] [rbp-80h]
  int MdlAddress; // [rsp+C0h] [rbp-78h]
  __int128 v28; // [rsp+C8h] [rbp-70h] BYREF
  _OWORD pszDest[2]; // [rsp+D8h] [rbp-60h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  LOBYTE(v26) = 0;
  v5 = 0;
  LOBYTE(v6) = 0;
  LOBYTE(v7) = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v28 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( !MasterIrp )
    goto LABEL_29;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x28 )
    goto LABEL_29;
  if ( MasterIrp->Type != 1 )
    goto LABEL_29;
  Flink = (unsigned int)MasterIrp->ThreadListEntry.Flink;
  if ( Flink > 0x20 )
    goto LABEL_29;
  v12 = Flink + 36;
  if ( v12 < 0x28 )
    v12 = 40;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v12 || Options < v12 || ((__int64)MasterIrp->MdlAddress & 6) == 2 )
  {
LABEL_29:
    TcgProperties = -1073741811;
    goto LABEL_30;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < 0x40 )
  {
    TcgProperties = -1073741789;
    goto LABEL_30;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_30;
  }
  v5 = 1;
  v14 = Irp->AssociatedIrp.MasterIrp;
  MdlAddress = (int)MasterIrp->MdlAddress;
  v26 = (int)MasterIrp->ThreadListEntry.Flink;
  if ( (MdlAddress & 1) != 0 )
  {
    v6 = *(_QWORD *)&MasterIrp->Flags;
    v7 = MasterIrp->AssociatedIrp.MasterIrp;
  }
  else
  {
    LODWORD(v6) = MasterIrp->Flags;
  }
  TcgProperties = RaidGetTcgProperties(a1, pszDest);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
    {
      v16 = (int)MasterIrp->MdlAddress;
      if ( (v16 & 1) != 0 )
      {
        LOBYTE(v15) = ((__int64)MasterIrp->MdlAddress & 4) != 0;
        v17 = RaidAssignTcgRangeLockingObject(
                a1,
                *(_QWORD *)&MasterIrp->Flags,
                (int)MasterIrp->AssociatedIrp.MasterIrp,
                v15,
                (int)MasterIrp->ThreadListEntry.Flink,
                (__int64)&MasterIrp->ThreadListEntry.Flink + 4,
                (__int64)v14,
                (NTSTRSAFE_PSTR)pszDest);
      }
      else
      {
        if ( (v16 & 2) == 0 )
        {
          TcgProperties = -1073741811;
          goto LABEL_27;
        }
        v17 = RaidAssignTcgNamespaceLockingObject(
                a1,
                MasterIrp->Flags,
                (int)MasterIrp->ThreadListEntry.Flink,
                (int)MasterIrp + 36,
                (__int64)v14,
                (NTSTRSAFE_PSTR)pszDest);
      }
      TcgProperties = v17;
      if ( v17 >= 0 )
        Irp->IoStatus.Information = 64LL;
      goto LABEL_27;
    }
    TcgProperties = -1073741637;
  }
LABEL_27:
  *(_DWORD *)(a1 + 456) &= ~8u;
  if ( TcgProperties >= 0 )
    return RaidCompleteRequestEx(Irp, 0, TcgProperties);
  v4 = MdlAddress;
LABEL_30:
  Irp->IoStatus.Information = 0LL;
  if ( v5 )
  {
    v25 = *(_DWORD *)(a1 + 96);
    RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v28);
    v19 = *(_QWORD *)(a1 + 24);
    if ( (byte_1C0092A07 & 4) != 0 )
    {
      v20 = *(const wchar_t **)(v19 + 5016);
      v21 = v19 + 5000;
      v22 = *(_DWORD *)(v19 + 56);
      v23 = (const wchar_t *)&unk_1C0081788;
      if ( v20 )
        v23 = v20;
      McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
        a1 + 169,
        a1 + 160,
        (__int64)v23,
        v22,
        v18,
        SBYTE1(v25),
        SBYTE2(v25),
        a1 + 2024,
        v21,
        *((const wchar_t **)&v28 + 1),
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        v23,
        "TcgAssignLockingObject",
        (const char *)pszDest,
        TcgProperties,
        v4,
        v26,
        v6,
        (char)v7);
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
