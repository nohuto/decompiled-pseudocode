/*
 * XREFs of RaidAdapterStorageTcgDeassignLockingObject @ 0x1C0050BB8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidDeassignTcgLockingObject @ 0x1C0058938 (RaidDeassignTcgLockingObject.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidAdapterStorageTcgDeassignLockingObject(__int64 a1, PIRP Irp)
{
  _IRP *v3; // rbp
  _IRP *MasterIrp; // rdx
  char v5; // r15
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int TcgProperties; // edi
  int v11; // r8d
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
          {
            LOBYTE(v11) = (__int64)v3->MdlAddress & 1;
            TcgProperties = RaidDeassignTcgLockingObject(
                              a1,
                              HIDWORD(v3->MdlAddress),
                              v11,
                              v3->Flags,
                              (__int64)(&v3->Flags + 1),
                              (NTSTRSAFE_PSTR)pszDest);
          }
          else
          {
            TcgProperties = -1073741637;
          }
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
          "TcgDeassignLockingObject",
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
