/*
 * XREFs of RaidUnitStorageTcgRevertConfig @ 0x1C0053A80
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidRevertTcgConfiguration @ 0x1C005ABA4 (RaidRevertTcgConfiguration.c)
 */

__int64 __fastcall RaidUnitStorageTcgRevertConfig(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rdx
  _IRP *v4; // rbx
  char v5; // si
  unsigned int Options; // ecx
  unsigned int MdlAddress_high; // eax
  unsigned int v9; // eax
  int TcgProperties; // ebp
  int v11; // edx
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rsi
  int v16; // [rsp+B0h] [rbp-58h]
  __int128 v17; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD pszDest[2]; // [rsp+C8h] [rbp-40h] BYREF

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v17 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( !MasterIrp )
    goto LABEL_14;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14 )
    goto LABEL_14;
  v4 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  if ( MdlAddress_high > 0x20 )
    goto LABEL_14;
  v9 = MdlAddress_high + 16;
  if ( v9 < 0x14 )
    v9 = 20;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v9 && Options >= v9 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
    {
      TcgProperties = -2147483631;
    }
    else
    {
      v5 = 1;
      TcgProperties = RaidGetTcgProperties(a1, pszDest);
      if ( TcgProperties >= 0 )
      {
        LOBYTE(v11) = (__int64)v4->MdlAddress & 1;
        TcgProperties = RaidRevertTcgConfiguration(
                          a1,
                          v11,
                          HIDWORD(v4->MdlAddress),
                          (int)v4 + 16,
                          (NTSTRSAFE_PSTR)pszDest);
      }
      *(_DWORD *)(a1 + 456) &= ~8u;
    }
  }
  else
  {
LABEL_14:
    TcgProperties = -1073741811;
  }
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v5 )
    {
      v16 = *(_DWORD *)(a1 + 96);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v17);
      v13 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v14 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(v13 + 5016) )
          v14 = *(const wchar_t **)(v13 + 5016);
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          LODWORD(v4->MdlAddress),
          a1 + 186,
          a1 + 169,
          *(_DWORD *)(v13 + 56),
          v12,
          SBYTE1(v16),
          SBYTE2(v16),
          a1 + 2024,
          v13 + 5000,
          *((const wchar_t **)&v17 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v14,
          "TcgRevertConfiguration",
          (const char *)pszDest,
          TcgProperties,
          (char)v4->MdlAddress,
          HIDWORD(v4->MdlAddress),
          0,
          0);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
