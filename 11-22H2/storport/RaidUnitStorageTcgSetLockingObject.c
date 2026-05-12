/*
 * XREFs of RaidUnitStorageTcgSetLockingObject @ 0x1C0053CC8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidSetTcgLockingObject @ 0x1C005AEF8 (RaidSetTcgLockingObject.c)
 */

__int64 __fastcall RaidUnitStorageTcgSetLockingObject(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rdx
  _IRP *v5; // rbx
  char v6; // di
  unsigned int Options; // ecx
  unsigned int Information; // eax
  unsigned int v9; // eax
  int TcgProperties; // r15d
  int Flags; // eax
  int MdlAddress; // r8d
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // rsi
  const wchar_t *v17; // r14
  int v18; // r9d
  int v20; // [rsp+B0h] [rbp-68h]
  __int128 v21; // [rsp+B8h] [rbp-60h] BYREF
  _OWORD pszDest[2]; // [rsp+C8h] [rbp-50h] BYREF

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = 0LL;
  v6 = 0;
  v21 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( !MasterIrp )
    goto LABEL_21;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x40 )
    goto LABEL_21;
  v5 = MasterIrp;
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
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
  {
    TcgProperties = -2147483631;
  }
  else
  {
    v6 = 1;
    TcgProperties = RaidGetTcgProperties(a1, pszDest);
    if ( TcgProperties >= 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
      {
        MdlAddress = (int)v5->MdlAddress;
        LOBYTE(MdlAddress) = MdlAddress & 1;
        TcgProperties = RaidSetTcgLockingObject(
                          a1,
                          HIDWORD(v5->MdlAddress),
                          MdlAddress,
                          v5->Flags,
                          ((__int64)v5->MdlAddress & 2) != 0,
                          *((_BYTE *)&v5->Flags + 4),
                          ((__int64)v5->MdlAddress & 4) != 0,
                          (__int64)&v5->Flags + 5,
                          v5->IoStatus.Information,
                          (__int64)&v5->IoStatus.Information + 4,
                          (NTSTRSAFE_PSTR)pszDest);
      }
      else
      {
        TcgProperties = -1073741637;
      }
    }
    *(_DWORD *)(a1 + 456) &= ~8u;
  }
LABEL_22:
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v6 )
    {
      v20 = *(_DWORD *)(a1 + 96);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v21);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v15 = *(const wchar_t **)(v14 + 5016);
        v16 = v14 + 5000;
        v17 = (const wchar_t *)&unk_1C0081788;
        v18 = *(_DWORD *)(v14 + 56);
        if ( v15 )
          v17 = v15;
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          *((unsigned __int8 *)&v5->Flags + 4),
          (int)v5->Flags,
          LODWORD(v5->MdlAddress),
          v18,
          v13,
          SBYTE1(v20),
          SBYTE2(v20),
          a1 + 2024,
          v16,
          *((const wchar_t **)&v21 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v17,
          "TcgSetLockingObject",
          (const char *)pszDest,
          TcgProperties,
          (char)v5->MdlAddress,
          v5->Flags,
          *((_BYTE *)&v5->Flags + 4),
          v5->IoStatus.Information);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
