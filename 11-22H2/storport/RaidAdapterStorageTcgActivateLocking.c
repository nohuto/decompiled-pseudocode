/*
 * XREFs of RaidAdapterStorageTcgActivateLocking @ 0x1C0050684
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidActivateTcgLocking @ 0x1C0057A8C (RaidActivateTcgLocking.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidAdapterStorageTcgActivateLocking(__int64 a1, PIRP Irp)
{
  _IRP *v3; // rbp
  _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int TcgProperties; // edi
  int v11; // edx
  int v12; // r8d
  const wchar_t *v13; // r8
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
    goto LABEL_14;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_14;
  v3 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_14;
  v9 = Flags + 20;
  if ( v9 < 0x18 )
    v9 = 24;
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
        LOBYTE(v12) = BYTE5(v3->MdlAddress);
        LOBYTE(v11) = BYTE4(v3->MdlAddress);
        TcgProperties = RaidActivateTcgLocking(
                          a1,
                          v11,
                          v12,
                          v3->Flags,
                          (__int64)(&v3->Flags + 1),
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
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v15);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v13 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(a1 + 5016) )
          v13 = *(const wchar_t **)(a1 + 5016);
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          BYTE5(v3->MdlAddress),
          BYTE4(v3->MdlAddress),
          (__int64)v13,
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
          "TcgActivateLocking",
          (const char *)pszDest,
          TcgProperties,
          BYTE4(v3->MdlAddress),
          BYTE5(v3->MdlAddress),
          v3->Flags,
          0);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
