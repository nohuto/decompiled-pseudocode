/*
 * XREFs of RaidAdapterStorageTcgAssignLockingObject @ 0x1C00508C4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidAssignTcgNamespaceLockingObject @ 0x1C0057D08 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x1C005806C (RaidAssignTcgRangeLockingObject.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidAdapterStorageTcgAssignLockingObject(__int64 a1, PIRP Irp)
{
  char v3; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v5; // r12
  _IRP *MasterIrp; // rsi
  unsigned int Options; // ecx
  unsigned int Flink; // eax
  unsigned int v10; // eax
  int TcgProperties; // edi
  _IRP *v12; // r12
  _IRP *v13; // rax
  int v14; // r9d
  int v15; // ecx
  int v16; // eax
  __int64 v17; // r8
  char v18; // r11
  const wchar_t *v19; // rcx
  char v21; // [rsp+C0h] [rbp-70h]
  int v22; // [rsp+C8h] [rbp-68h]
  int MdlAddress; // [rsp+D0h] [rbp-60h]
  __int128 v24; // [rsp+E0h] [rbp-50h] BYREF
  __int128 v25; // [rsp+F0h] [rbp-40h] BYREF
  char pszDest[16]; // [rsp+100h] [rbp-30h] BYREF
  __int128 v27; // [rsp+110h] [rbp-20h]

  LOBYTE(MdlAddress) = 0;
  LOBYTE(v22) = 0;
  v3 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v25 = 0LL;
  v24 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v27 = 0LL;
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
  v10 = Flink + 36;
  if ( v10 < 0x28 )
    v10 = 40;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v10 || Options < v10 || ((__int64)MasterIrp->MdlAddress & 6) == 2 )
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
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_30;
  }
  v3 = 1;
  v12 = Irp->AssociatedIrp.MasterIrp;
  MdlAddress = (int)MasterIrp->MdlAddress;
  v22 = (int)MasterIrp->ThreadListEntry.Flink;
  if ( (MdlAddress & 1) != 0 )
    v13 = MasterIrp->AssociatedIrp.MasterIrp;
  else
    LOBYTE(v13) = 0;
  v21 = (char)v13;
  TcgProperties = RaidGetTcgProperties(a1, pszDest);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
    {
      v15 = (int)MasterIrp->MdlAddress;
      if ( (v15 & 1) != 0 )
      {
        LOBYTE(v14) = ((__int64)MasterIrp->MdlAddress & 4) != 0;
        v16 = RaidAssignTcgRangeLockingObject(
                a1,
                *(_QWORD *)&MasterIrp->Flags,
                (int)MasterIrp->AssociatedIrp.MasterIrp,
                v14,
                (int)MasterIrp->ThreadListEntry.Flink,
                (__int64)&MasterIrp->ThreadListEntry.Flink + 4,
                (__int64)v12,
                pszDest);
      }
      else
      {
        if ( (v15 & 2) == 0 )
        {
          TcgProperties = -1073741811;
          goto LABEL_27;
        }
        v16 = RaidAssignTcgNamespaceLockingObject(
                a1,
                MasterIrp->Flags,
                (int)MasterIrp->ThreadListEntry.Flink,
                (int)MasterIrp + 36,
                (__int64)v12,
                pszDest);
      }
      TcgProperties = v16;
      if ( v16 >= 0 )
        Irp->IoStatus.Information = 64LL;
      goto LABEL_27;
    }
    TcgProperties = -1073741637;
  }
LABEL_27:
  *(_DWORD *)(a1 + 136) &= ~1u;
  if ( TcgProperties >= 0 )
    return RaidCompleteRequestEx(Irp, 0, TcgProperties);
  v5 = v21;
LABEL_30:
  Irp->IoStatus.Information = 0LL;
  if ( v3 )
  {
    RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v24);
    if ( (byte_1C0092A07 & 4) != 0 )
    {
      v19 = (const wchar_t *)&unk_1C0081788;
      if ( *(_QWORD *)(a1 + 5016) )
        v19 = *(const wchar_t **)(a1 + 5016);
      McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
        (__int64)v19,
        a1 + 5000,
        v17,
        *(_DWORD *)(a1 + 56),
        RaidNullAddress,
        SBYTE1(RaidNullAddress),
        SBYTE2(RaidNullAddress),
        (__int64)&v25,
        a1 + 5000,
        *((const wchar_t **)&v24 + 1),
        byte_1C0081FE6,
        byte_1C0081FE6,
        byte_1C0081FE6,
        v19,
        "TcgAssignLockingObject",
        pszDest,
        TcgProperties,
        MdlAddress,
        v22,
        v18,
        v5);
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
