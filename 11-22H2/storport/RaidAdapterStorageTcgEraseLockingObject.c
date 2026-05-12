/*
 * XREFs of RaidAdapterStorageTcgEraseLockingObject @ 0x1C0051100
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidEraseTcgLockingObject @ 0x1C0058E64 (RaidEraseTcgLockingObject.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidAdapterStorageTcgEraseLockingObject(__int64 a1, PIRP Irp)
{
  _IRP *v3; // rbp
  _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int TcgProperties; // edi
  const wchar_t *v11; // rdx
  __int128 v13; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v14; // [rsp+C8h] [rbp-60h] BYREF
  _OWORD pszDest[2]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v5 = 0;
  v14 = 0LL;
  v13 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  if ( !MasterIrp )
    goto LABEL_18;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_18;
  v3 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_18;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_18;
  v9 = Flags + 20;
  if ( v9 < 0x18 )
    v9 = 24;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v9 && Options >= v9 )
  {
    if ( HIDWORD(MasterIrp->MdlAddress) )
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
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
            TcgProperties = RaidEraseTcgLockingObject(
                              a1,
                              HIDWORD(v3->MdlAddress),
                              v3->Flags,
                              (int)v3 + 20,
                              (NTSTRSAFE_PSTR)pszDest);
          else
            TcgProperties = -1073741637;
        }
        *(_DWORD *)(a1 + 136) &= ~1u;
      }
    }
    else
    {
      TcgProperties = -1073741637;
    }
  }
  else
  {
LABEL_18:
    TcgProperties = -1073741811;
  }
  Irp->IoStatus.Information = 0LL;
  if ( TcgProperties < 0 )
  {
    if ( v5 )
    {
      RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&v13);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v11 = (const wchar_t *)&unk_1C0081788;
        if ( *(_QWORD *)(a1 + 5016) )
          v11 = *(const wchar_t **)(a1 + 5016);
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          LODWORD(v3->MdlAddress),
          (__int64)v11,
          a1 + 5000,
          *(_DWORD *)(a1 + 56),
          RaidNullAddress,
          SBYTE1(RaidNullAddress),
          SBYTE2(RaidNullAddress),
          (__int64)&v14,
          a1 + 5000,
          *((const wchar_t **)&v13 + 1),
          byte_1C0081FE6,
          byte_1C0081FE6,
          byte_1C0081FE6,
          v11,
          "TcgEraseLockingObject",
          (const char *)pszDest,
          TcgProperties,
          (char)v3->MdlAddress,
          v3->Flags,
          0,
          0);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
