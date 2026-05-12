/*
 * XREFs of sub_1C0051930 @ 0x1C0051930
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A188 @ 0x1C005A188 (sub_1C005A188.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C0051930(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rsi
  char v3; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int MdlAddress; // r12d
  ULONG Flags; // r13d
  unsigned int Options; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // edi
  __int64 v13; // r8
  char v14; // r11
  const wchar_t *v15; // rcx
  __int128 v17; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v18; // [rsp+D0h] [rbp-78h] BYREF
  _OWORD v19[2]; // [rsp+E0h] [rbp-68h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LOBYTE(MdlAddress) = 0;
  v18 = 0LL;
  LOBYTE(Flags) = 0;
  v17 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( !MasterIrp )
    goto LABEL_22;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_22;
  if ( MasterIrp->Type != 1 )
    goto LABEL_22;
  v10 = *(&MasterIrp->Flags + 1);
  if ( v10 > 0x20 )
    goto LABEL_22;
  v11 = MasterIrp->Flags + v10 + 24;
  if ( v11 < 0x1C )
    v11 = 28;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v11 || Options < v11 )
  {
LABEL_22:
    v12 = -1073741811;
    goto LABEL_23;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < v11 )
  {
    v12 = -1073741789;
LABEL_23:
    a2->IoStatus.Information = 0LL;
    if ( v3 )
    {
      sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v17);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v15 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(a1 + 5016) )
          v15 = *(const wchar_t **)(a1 + 5016);
        sub_1C0050984(
          (__int64)v15,
          a1 + 5000,
          v13,
          *(_DWORD *)(a1 + 56),
          -1,
          255,
          255,
          (__int64)&v18,
          a1 + 5000,
          *((const wchar_t **)&v17 + 1),
          byte_1C0082FE6,
          byte_1C0082FE6,
          byte_1C0082FE6,
          v15,
          "TcgGetLockingObjectMetadata",
          (const char *)v19,
          v12,
          MdlAddress,
          Flags,
          v14,
          0);
      }
    }
    return sub_1C0003440(a2, 0, v12);
  }
  if ( !HIDWORD(MasterIrp->MdlAddress) )
  {
    v12 = -1073741637;
    goto LABEL_23;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    v12 = -2147483631;
    goto LABEL_23;
  }
  MdlAddress = (int)MasterIrp->MdlAddress;
  Flags = MasterIrp->Flags;
  v3 = 1;
  v12 = sub_1C005A560(a1, v19);
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
    {
      v12 = sub_1C005A188(
              a1,
              HIDWORD(MasterIrp->MdlAddress),
              MasterIrp->Flags,
              (char *)&MasterIrp->AssociatedIrp + *(&MasterIrp->Flags + 1),
              *(&MasterIrp->Flags + 1),
              &MasterIrp->AssociatedIrp,
              v19);
      if ( v12 >= 0 )
        a2->IoStatus.Information = *(unsigned int *)(&MasterIrp->Size + 1);
    }
    else
    {
      v12 = -1073741637;
    }
  }
  *(_DWORD *)(a1 + 128) &= ~1u;
  if ( v12 < 0 )
    goto LABEL_23;
  return sub_1C0003440(a2, 0, v12);
}
