/*
 * XREFs of RaidUnitStorageTcgEnumerateLockingObjects @ 0x1C0052E98
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer @ 0x1C00503B4 (McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer.c)
 *     RaidFillTcgLockingObjects @ 0x1C0059214 (RaidFillTcgLockingObjects.c)
 *     RaidGetTcgLockingObjects @ 0x1C0059D28 (RaidGetTcgLockingObjects.c)
 *     RaidGetTcgProperties @ 0x1C0059EF0 (RaidGetTcgProperties.c)
 */

__int64 __fastcall RaidUnitStorageTcgEnumerateLockingObjects(__int64 a1, IRP *a2)
{
  char v2; // r15
  char v3; // r12
  _IRP *MasterIrp; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  int TcgProperties; // edi
  __int64 MdlAddress_high; // rcx
  _IRP *v10; // r15
  __int64 Flags; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // r11
  __int64 v16; // r9
  const wchar_t *v17; // rax
  __int64 v18; // r8
  int v19; // r9d
  const wchar_t *v20; // rbx
  int Length; // [rsp+B0h] [rbp-80h] BYREF
  PVOID P; // [rsp+B8h] [rbp-78h] BYREF
  _IRP *v24; // [rsp+C0h] [rbp-70h]
  __int64 v25; // [rsp+C8h] [rbp-68h]
  __int64 v26; // [rsp+D0h] [rbp-60h]
  __int64 MdlAddress_low; // [rsp+D8h] [rbp-58h]
  __int128 v28; // [rsp+E0h] [rbp-50h] BYREF
  _OWORD v29[2]; // [rsp+F0h] [rbp-40h] BYREF

  P = 0LL;
  MdlAddress_low = 0LL;
  v2 = 0;
  v24 = 0LL;
  v3 = 0;
  v26 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( MasterIrp
    && CurrentStackLocation->Parameters.Create.Options >= 0x20
    && MasterIrp->Type == 1
    && *(_DWORD *)(&MasterIrp->Size + 1) == 32 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length < 0x10 )
    {
      TcgProperties = -1073741789;
      goto LABEL_20;
    }
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
    {
      TcgProperties = -2147483631;
      goto LABEL_20;
    }
    v3 = 1;
    MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
    v10 = a2->AssociatedIrp.MasterIrp;
    MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
    v26 = MdlAddress_high;
    if ( (MdlAddress_low & 1) != 0 )
    {
      v25 = *(_QWORD *)&MasterIrp->Flags;
      v24 = MasterIrp->AssociatedIrp.MasterIrp;
    }
    else
    {
      Flags = MasterIrp->Flags;
      v24 = 0LL;
      v25 = Flags;
    }
    TcgProperties = RaidGetTcgProperties(a1, v29);
    if ( TcgProperties < 0 )
      goto LABEL_18;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
    {
      TcgProperties = RaidGetTcgLockingObjects(a1, &P, v29);
      if ( TcgProperties < 0 )
      {
LABEL_18:
        *(_DWORD *)(a1 + 456) &= ~8u;
        v2 = v25;
        goto LABEL_20;
      }
      v13 = *(_QWORD *)(a1 + 3504);
      Length = CurrentStackLocation->Parameters.Read.Length;
      RaidFillTcgLockingObjects(v13, (int)P, (int)MasterIrp, (int)&Length, v10);
      v12 = (unsigned int)Length;
    }
    else
    {
      memset_0(v10, 0, CurrentStackLocation->Parameters.Read.Length);
      v10->Type = 1;
      v12 = 16LL;
      *(_DWORD *)(&v10->Size + 1) = 16;
    }
    a2->IoStatus.Information = v12;
    goto LABEL_18;
  }
  TcgProperties = -1073741811;
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0x43546152u);
  if ( TcgProperties < 0 )
  {
    a2->IoStatus.Information = 0LL;
    if ( v3 )
    {
      v14 = *(_QWORD *)(a1 + 24);
      Length = *(_DWORD *)(a1 + 96);
      RaidDriverGetName(*(_QWORD *)(v14 + 16), (__int64)&v28);
      v16 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0092A07 & 4) != 0 )
      {
        v17 = *(const wchar_t **)(v16 + 5016);
        v18 = v16 + 5000;
        v19 = *(_DWORD *)(v16 + 56);
        v20 = (const wchar_t *)&unk_1C0081788;
        if ( v17 )
          v20 = v17;
        McTemplateK0quuujjzssszssdxxxx_EtwWriteTransfer(
          a1 + 169,
          a1 + 160,
          v18,
          v19,
          v15,
          SBYTE1(Length),
          SBYTE2(Length),
          a1 + 2024,
          v18,
          *((const wchar_t **)&v28 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v20,
          "TcgEnumerateLockingObjects",
          (const char *)v29,
          TcgProperties,
          MdlAddress_low,
          v26,
          v2,
          (char)v24);
      }
    }
  }
  return RaidCompleteRequestEx(a2, 0, TcgProperties);
}
