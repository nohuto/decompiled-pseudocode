/*
 * XREFs of RaidUnitStorageTcgDeassignLockingObject @ 0x1C0052C14
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidUnitStorageTcgDeassignLockingObject(__int64 a1, PIRP Irp)
{
  _IRP *MasterIrp; // rdx
  _IRP *v4; // rbx
  char v5; // si
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int TcgProperties; // ebp
  int v11; // r8d
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
    goto LABEL_18;
  Options = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_18;
  v4 = MasterIrp;
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
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
          {
            LOBYTE(v11) = (__int64)v4->MdlAddress & 1;
            TcgProperties = RaidDeassignTcgLockingObject(
                              a1,
                              HIDWORD(v4->MdlAddress),
                              v11,
                              v4->Flags,
                              (__int64)(&v4->Flags + 1),
                              (NTSTRSAFE_PSTR)pszDest);
          }
          else
          {
            TcgProperties = -1073741637;
          }
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
          "TcgDeassignLockingObject",
          (const char *)pszDest,
          TcgProperties,
          (char)v4->MdlAddress,
          v4->Flags,
          0,
          0);
      }
    }
  }
  return RaidCompleteRequestEx(Irp, 0, TcgProperties);
}
