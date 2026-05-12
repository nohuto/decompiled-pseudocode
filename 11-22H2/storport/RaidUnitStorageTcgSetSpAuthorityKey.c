/*
 * XREFs of RaidUnitStorageTcgSetSpAuthorityKey @ 0x1C00544F8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidSetTcgSpAuthorityKey @ 0x1C005B5F4 (RaidSetTcgSpAuthorityKey.c)
 */

__int64 __fastcall RaidUnitStorageTcgSetSpAuthorityKey(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rcx
  _IRP *v4; // rbx
  char v5; // di
  unsigned int Options; // edx
  unsigned int v8; // eax
  unsigned int IrpCount; // ecx
  unsigned int v10; // eax
  int TcgProperties; // r15d
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rax
  __int64 v15; // rsi
  const wchar_t *v16; // r14
  int v17; // r9d
  int v19; // [rsp+B0h] [rbp-68h]
  __int128 v20; // [rsp+B8h] [rbp-60h] BYREF
  _OWORD pszDest[2]; // [rsp+C8h] [rbp-50h] BYREF

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v20 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( !MasterIrp )
    goto LABEL_15;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x20 )
    goto LABEL_15;
  v4 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_15;
  v8 = *(&MasterIrp->Flags + 1);
  if ( v8 > 0x20 )
    goto LABEL_15;
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount > 0x20 )
    goto LABEL_15;
  v10 = IrpCount + v8 + 28;
  if ( v10 < 0x20 )
    v10 = 32;
  if ( *(_DWORD *)(&v4->Size + 1) == v10 && Options >= v10 )
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
        TcgProperties = RaidSetTcgSpAuthorityKey(
                          a1,
                          HIDWORD(v4->MdlAddress),
                          v4->Flags,
                          *(&v4->Flags + 1),
                          (__int64)&v4->AssociatedIrp.SystemBuffer + 4,
                          v4->AssociatedIrp.IrpCount,
                          (__int64)&v4->AssociatedIrp.SystemBuffer + *(&v4->Flags + 1) + 4,
                          (NTSTRSAFE_PSTR)pszDest);
      *(_DWORD *)(a1 + 456) &= ~8u;
    }
  }
  else
  {
LABEL_15:
    TcgProperties = -1073741811;
  }
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v5 )
    {
      v19 = *(_DWORD *)(a1 + 96);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v20);
      v13 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v14 = *(const wchar_t **)(v13 + 5016);
        v15 = v13 + 5000;
        v16 = (const wchar_t *)&unk_1C0081788;
        v17 = *(_DWORD *)(v13 + 56);
        if ( v14 )
          v16 = v14;
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          *(&v4->Flags + 1),
          (int)v4->Flags,
          SHIDWORD(v4->MdlAddress),
          v17,
          v12,
          SBYTE1(v19),
          SBYTE2(v19),
          a1 + 2024,
          v15,
          *((const wchar_t **)&v20 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v16,
          "TcgSetSpAuthorityKey",
          (const char *)pszDest,
          TcgProperties,
          HIDWORD(v4->MdlAddress),
          v4->Flags,
          *(&v4->Flags + 1),
          v4->AssociatedIrp.IrpCount);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
