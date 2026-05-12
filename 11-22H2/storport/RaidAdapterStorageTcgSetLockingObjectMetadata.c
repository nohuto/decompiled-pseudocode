/*
 * XREFs of RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x1C005219C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1C005B384 (RaidSetTcgLockingObjectMetadata.c)
 */

__int64 __fastcall RaidAdapterStorageTcgSetLockingObjectMetadata(__int64 a1, IRP *a2)
{
  _IRP *v3; // rsi
  _IRP *MasterIrp; // rcx
  char v5; // r15
  unsigned int Options; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int TcgProperties; // edi
  const wchar_t *v11; // r8
  __int128 v13; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v14; // [rsp+C8h] [rbp-60h] BYREF
  char v15[32]; // [rsp+D8h] [rbp-50h] BYREF

  v3 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v5 = 0;
  v14 = 0LL;
  v13 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( !MasterIrp )
    goto LABEL_18;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_18;
  v3 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_18;
  v8 = *(&MasterIrp->Flags + 1);
  if ( v8 > 0x20 )
    goto LABEL_18;
  v9 = v3->Flags + v8 + 24;
  if ( v9 < 0x1C )
    v9 = 28;
  if ( *(_DWORD *)(&v3->Size + 1) == v9 && Options >= v9 )
  {
    if ( HIDWORD(v3->MdlAddress) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 136), 0) == 1 )
      {
        TcgProperties = -2147483631;
      }
      else
      {
        v5 = 1;
        TcgProperties = RaidGetTcgProperties(a1, v15);
        if ( TcgProperties >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
            TcgProperties = RaidSetTcgLockingObjectMetadata(
                              a1,
                              HIDWORD(v3->MdlAddress),
                              v3->Flags,
                              (char *)&v3->AssociatedIrp + *(&v3->Flags + 1),
                              *(&v3->Flags + 1),
                              &v3->AssociatedIrp,
                              v15);
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
  a2->IoStatus.Information = 0LL;
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
          v3->Flags,
          LODWORD(v3->MdlAddress),
          (__int64)v11,
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
          "TcgSetLockingObjectMetadata",
          v15,
          TcgProperties,
          (char)v3->MdlAddress,
          v3->Flags,
          *(&v3->Flags + 1),
          0);
      }
    }
  }
  return RaidCompleteRequestEx(a2, 0, TcgProperties);
}
