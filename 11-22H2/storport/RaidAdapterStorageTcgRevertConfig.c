/*
 * XREFs of RaidAdapterStorageTcgRevertConfig @ 0x1C0051A00
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidRevertTcgConfiguration @ 0x1C005ABA4 (RaidRevertTcgConfiguration.c)
 */

__int64 __fastcall RaidAdapterStorageTcgRevertConfig(__int64 a1, PIRP Irp)
{
  _IRP *v3; // rbp
  _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int MdlAddress_high; // eax
  unsigned int v9; // eax
  int TcgProperties; // edi
  int v11; // edx
  const wchar_t *v12; // rdx
  __int128 v14; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v15; // [rsp+C8h] [rbp-60h] BYREF
  _OWORD pszDest[2]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = 0;
  v15 = 0LL;
  v14 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( !MasterIrp )
    goto LABEL_14;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14 )
    goto LABEL_14;
  v3 = MasterIrp;
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
        LOBYTE(v11) = (__int64)v3->MdlAddress & 1;
        TcgProperties = RaidRevertTcgConfiguration(
                          a1,
                          v11,
                          HIDWORD(v3->MdlAddress),
                          (int)v3 + 16,
                          (NTSTRSAFE_PSTR)pszDest);
      }
      *(_DWORD *)(a1 + 136) &= ~1u;
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
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v14);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v12 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(a1 + 5016) )
          v12 = *(const wchar_t **)(a1 + 5016);
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          LODWORD(v3->MdlAddress),
          (__int64)v12,
          a1 + 5000,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v15,
          a1 + 5000,
          *((const wchar_t **)&v14 + 1),
          byte_1C0081FE6,
          byte_1C0081FE6,
          byte_1C0081FE6,
          v12,
          "TcgRevertConfiguration",
          (const char *)pszDest,
          TcgProperties,
          (char)v3->MdlAddress,
          HIDWORD(v3->MdlAddress),
          0,
          0);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
