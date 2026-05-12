/*
 * XREFs of RaidAdapterStorageTcgSetLockingObject @ 0x1C0051C34
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidSetTcgLockingObject @ 0x1C005AEF8 (RaidSetTcgLockingObject.c)
 */

__int64 __fastcall RaidAdapterStorageTcgSetLockingObject(__int64 a1, PIRP Irp)
{
  _IRP *v3; // rsi
  _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int Information; // eax
  unsigned int v9; // eax
  int TcgProperties; // edi
  int Flags; // eax
  int MdlAddress; // r8d
  const wchar_t *v13; // r9
  __int128 v15; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v16; // [rsp+C8h] [rbp-60h] BYREF
  _OWORD pszDest[2]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = 0;
  v16 = 0LL;
  v15 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( !MasterIrp )
    goto LABEL_21;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x40 )
    goto LABEL_21;
  v3 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_21;
  Information = MasterIrp->IoStatus.Information;
  if ( Information > 0x20 )
    goto LABEL_21;
  v9 = Information + 60;
  if ( v9 < 0x40 )
    v9 = 64;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v9 || Options < v9 )
    goto LABEL_21;
  if ( !HIDWORD(MasterIrp->MdlAddress) )
  {
    TcgProperties = -1073741637;
    goto LABEL_22;
  }
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
    Flags = MasterIrp->Flags;
    if ( Flags < 1 || Flags > 3 )
    {
LABEL_21:
      TcgProperties = -1073741811;
      goto LABEL_22;
    }
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0) == 1 )
  {
    TcgProperties = -2147483631;
  }
  else
  {
    v5 = 1;
    TcgProperties = RaidGetTcgProperties(a1, pszDest);
    if ( TcgProperties >= 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
      {
        MdlAddress = (int)v3->MdlAddress;
        LOBYTE(MdlAddress) = MdlAddress & 1;
        TcgProperties = RaidSetTcgLockingObject(
                          a1,
                          HIDWORD(v3->MdlAddress),
                          MdlAddress,
                          v3->Flags,
                          ((__int64)v3->MdlAddress & 2) != 0,
                          *((_BYTE *)&v3->Flags + 4),
                          ((__int64)v3->MdlAddress & 4) != 0,
                          (__int64)&v3->Flags + 5,
                          v3->IoStatus.Information,
                          (__int64)&v3->IoStatus.Information + 4,
                          (NTSTRSAFE_PSTR)pszDest);
      }
      else
      {
        TcgProperties = -1073741637;
      }
    }
    *(_DWORD *)(a1 + 136) &= ~1u;
  }
LABEL_22:
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v5 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v15);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v13 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(a1 + 5016) )
          v13 = *(const wchar_t **)(a1 + 5016);
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          *((unsigned __int8 *)&v3->Flags + 4),
          (int)v3->Flags,
          LODWORD(v3->MdlAddress),
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v16,
          a1 + 5000,
          *((const wchar_t **)&v15 + 1),
          byte_1C0081FE6,
          byte_1C0081FE6,
          byte_1C0081FE6,
          v13,
          "TcgSetLockingObject",
          (const char *)pszDest,
          TcgProperties,
          (char)v3->MdlAddress,
          v3->Flags,
          *((_BYTE *)&v3->Flags + 4),
          v3->IoStatus.Information);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
