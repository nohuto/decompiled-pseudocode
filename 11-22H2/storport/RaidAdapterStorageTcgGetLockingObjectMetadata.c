/*
 * XREFs of RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x1C0051360
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgLockingObjectMetadata @ 0x1C0059B18 (RaidGetTcgLockingObjectMetadata.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidAdapterStorageTcgGetLockingObjectMetadata(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rsi
  char v3; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int MdlAddress; // r12d
  unsigned int Flags; // r13d
  unsigned int Options; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int TcgProperties; // edi
  __int64 v13; // r8
  char v14; // r11
  const wchar_t *v15; // rcx
  __int128 v17; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v18; // [rsp+D0h] [rbp-78h] BYREF
  _OWORD v19[2]; // [rsp+E0h] [rbp-68h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LOBYTE(MdlAddress) = 0;
  v18 = 0LL;
  LOBYTE(Flags) = 0;
  v17 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( !MasterIrp )
    goto LABEL_22;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_22;
  if ( MasterIrp->Type != 1 )
    goto LABEL_22;
  v10 = *(&MasterIrp->Flags + 1);
  if ( v10 > 0x20 )
    goto LABEL_22;
  v11 = MasterIrp->Flags + v10 + 24;
  if ( v11 < 0x1C )
    v11 = 28;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v11 || Options < v11 )
  {
LABEL_22:
    TcgProperties = -1073741811;
    goto LABEL_23;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < v11 )
  {
    TcgProperties = -1073741789;
LABEL_23:
    a2->IoStatus.Information = 0LL;
    if ( v3 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v17);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v15 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(a1 + 5016) )
          v15 = *(const wchar_t **)(a1 + 5016);
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          (__int64)v15,
          a1 + 5000,
          v13,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v18,
          a1 + 5000,
          *((const wchar_t **)&v17 + 1),
          byte_1C0081FE6,
          byte_1C0081FE6,
          byte_1C0081FE6,
          v15,
          "TcgGetLockingObjectMetadata",
          (const char *)v19,
          TcgProperties,
          MdlAddress,
          Flags,
          v14,
          0);
      }
    }
    return RaidCompleteRequestEx(a2, 0, TcgProperties);
  }
  if ( !HIDWORD(MasterIrp->MdlAddress) )
  {
    TcgProperties = -1073741637;
    goto LABEL_23;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0) == 1 )
  {
    TcgProperties = -2147483631;
    goto LABEL_23;
  }
  MdlAddress = (int)MasterIrp->MdlAddress;
  Flags = MasterIrp->Flags;
  v3 = 1;
  TcgProperties = RaidGetTcgProperties(a1, v19);
  if ( TcgProperties >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
    {
      TcgProperties = RaidGetTcgLockingObjectMetadata(
                        a1,
                        HIDWORD(MasterIrp->MdlAddress),
                        MasterIrp->Flags,
                        (char *)&MasterIrp->AssociatedIrp + *(&MasterIrp->Flags + 1),
                        *(&MasterIrp->Flags + 1),
                        &MasterIrp->AssociatedIrp,
                        v19);
      if ( TcgProperties >= 0 )
        a2->IoStatus.Information = *(unsigned int *)(&MasterIrp->Size + 1);
    }
    else
    {
      TcgProperties = -1073741637;
    }
  }
  *(_DWORD *)(a1 + 136) &= ~1u;
  if ( TcgProperties < 0 )
    goto LABEL_23;
  return RaidCompleteRequestEx(a2, 0, TcgProperties);
}
