/*
 * XREFs of RaidUnitStorageTcgActivateLocking @ 0x1C0052688
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidActivateTcgLocking @ 0x1C0057A8C (RaidActivateTcgLocking.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidUnitStorageTcgActivateLocking(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rdx
  _IRP *v4; // rbx
  char v5; // di
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int TcgProperties; // r14d
  int v11; // edx
  int v12; // r8d
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // rdi
  int v17; // r9d
  const wchar_t *v18; // rbp
  int v20; // [rsp+B0h] [rbp-68h]
  __int128 v21; // [rsp+B8h] [rbp-60h] BYREF
  _OWORD pszDest[2]; // [rsp+C8h] [rbp-50h] BYREF

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v21 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( !MasterIrp )
    goto LABEL_14;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_14;
  v4 = MasterIrp;
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
        LOBYTE(v12) = BYTE5(v4->MdlAddress);
        LOBYTE(v11) = BYTE4(v4->MdlAddress);
        TcgProperties = RaidActivateTcgLocking(
                          a1,
                          v11,
                          v12,
                          v4->Flags,
                          (__int64)(&v4->Flags + 1),
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
      v20 = *(_DWORD *)(a1 + 96);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v21);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v15 = *(const wchar_t **)(v14 + 5016);
        v16 = v14 + 5000;
        v17 = *(_DWORD *)(v14 + 56);
        v18 = (const wchar_t *)&unk_1C0081788;
        if ( v15 )
          v18 = v15;
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          BYTE5(v4->MdlAddress),
          BYTE4(v4->MdlAddress),
          a1 + 186,
          v17,
          v13,
          SBYTE1(v20),
          SBYTE2(v20),
          a1 + 2024,
          v16,
          *((const wchar_t **)&v21 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v18,
          "TcgActivateLocking",
          (const char *)pszDest,
          TcgProperties,
          BYTE4(v4->MdlAddress),
          BYTE5(v4->MdlAddress),
          v4->Flags,
          0);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
