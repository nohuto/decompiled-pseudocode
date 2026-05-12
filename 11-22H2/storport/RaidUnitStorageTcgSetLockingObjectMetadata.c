/*
 * XREFs of RaidUnitStorageTcgSetLockingObjectMetadata @ 0x1C0054260
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x1C005B384 (RaidSetTcgLockingObjectMetadata.c)
 */

__int64 __fastcall RaidUnitStorageTcgSetLockingObjectMetadata(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rcx
  _IRP *v4; // rbx
  char v5; // di
  unsigned int Options; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int TcgProperties; // r14d
  char v11; // r11
  __int64 v12; // r9
  const wchar_t *v13; // rax
  __int64 v14; // rdi
  int v15; // r9d
  const wchar_t *v16; // rbp
  int v18; // [rsp+B0h] [rbp-68h]
  __int128 v19; // [rsp+B8h] [rbp-60h] BYREF
  char v20[32]; // [rsp+C8h] [rbp-50h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( !MasterIrp )
    goto LABEL_18;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_18;
  v4 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_18;
  v8 = *(&MasterIrp->Flags + 1);
  if ( v8 > 0x20 )
    goto LABEL_18;
  v9 = v4->Flags + v8 + 24;
  if ( v9 < 0x1C )
    v9 = 28;
  if ( *(_DWORD *)(&v4->Size + 1) == v9 && Options >= v9 )
  {
    if ( HIDWORD(v4->MdlAddress) )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
      {
        TcgProperties = -2147483631;
      }
      else
      {
        v5 = 1;
        TcgProperties = RaidGetTcgProperties(a1, v20);
        if ( TcgProperties >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
            TcgProperties = RaidSetTcgLockingObjectMetadata(
                              a1,
                              HIDWORD(v4->MdlAddress),
                              v4->Flags,
                              (char *)&v4->AssociatedIrp + *(&v4->Flags + 1),
                              *(&v4->Flags + 1),
                              &v4->AssociatedIrp,
                              v20);
          else
            TcgProperties = -1073741637;
        }
        *(_DWORD *)(a1 + 456) &= ~8u;
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
      v18 = *(_DWORD *)(a1 + 96);
      RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v19);
      v12 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v13 = *(const wchar_t **)(v12 + 5016);
        v14 = v12 + 5000;
        v15 = *(_DWORD *)(v12 + 56);
        v16 = (const wchar_t *)&unk_1C0081788;
        if ( v13 )
          v16 = v13;
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          v4->Flags,
          LODWORD(v4->MdlAddress),
          a1 + 186,
          v15,
          v11,
          SBYTE1(v18),
          SBYTE2(v18),
          a1 + 2024,
          v14,
          *((const wchar_t **)&v19 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v16,
          "TcgSetLockingObjectMetadata",
          v20,
          TcgProperties,
          (char)v4->MdlAddress,
          v4->Flags,
          *(&v4->Flags + 1),
          0);
      }
    }
  }
  return RaidCompleteRequestEx(a2, 0, TcgProperties);
}
