/*
 * XREFs of RaidAdapterStorageTcgSetSpAuthorityKey @ 0x1C005241C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidSetTcgSpAuthorityKey @ 0x1C005B5F4 (RaidSetTcgSpAuthorityKey.c)
 */

__int64 __fastcall RaidAdapterStorageTcgSetSpAuthorityKey(__int64 a1, PIRP Irp)
{
  _IRP *v3; // rsi
  _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int v8; // eax
  unsigned int IrpCount; // edx
  unsigned int v10; // eax
  int TcgProperties; // edi
  const wchar_t *v12; // r9
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
    goto LABEL_15;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x20 )
    goto LABEL_15;
  v3 = MasterIrp;
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
  if ( *(_DWORD *)(&v3->Size + 1) == v10 && Options >= v10 )
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
        TcgProperties = RaidSetTcgSpAuthorityKey(
                          a1,
                          HIDWORD(v3->MdlAddress),
                          v3->Flags,
                          *(&v3->Flags + 1),
                          (__int64)&v3->AssociatedIrp.SystemBuffer + 4,
                          v3->AssociatedIrp.IrpCount,
                          (__int64)&v3->AssociatedIrp.SystemBuffer + *(&v3->Flags + 1) + 4,
                          (NTSTRSAFE_PSTR)pszDest);
      *(_DWORD *)(a1 + 136) &= ~1u;
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
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v14);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v12 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(a1 + 5016) )
          v12 = *(const wchar_t **)(a1 + 5016);
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          *(&v3->Flags + 1),
          (int)v3->Flags,
          SHIDWORD(v3->MdlAddress),
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
          "TcgSetSpAuthorityKey",
          (const char *)pszDest,
          TcgProperties,
          HIDWORD(v3->MdlAddress),
          v3->Flags,
          *(&v3->Flags + 1),
          v3->AssociatedIrp.IrpCount);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
