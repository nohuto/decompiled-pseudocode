/*
 * XREFs of sub_1C00539B4 @ 0x1C00539B4
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A188 @ 0x1C005A188 (sub_1C005A188.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C00539B4(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  char v4; // r14
  int MdlAddress; // r15d
  ULONG Flags; // r12d
  int v7; // r13d
  unsigned int Options; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // edi
  char v14; // r11
  __int64 v15; // r9
  const wchar_t *v16; // rax
  __int64 v17; // r10
  int v18; // r9d
  const wchar_t *v19; // r8
  int v21; // [rsp+B0h] [rbp-78h]
  __int128 v22; // [rsp+B8h] [rbp-70h] BYREF
  char v23[32]; // [rsp+C8h] [rbp-60h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  LOBYTE(MdlAddress) = 0;
  LOBYTE(Flags) = 0;
  LOBYTE(v7) = 0;
  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  if ( !MasterIrp )
    goto LABEL_22;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_22;
  if ( MasterIrp->Type != 1 )
    goto LABEL_22;
  v11 = *(&MasterIrp->Flags + 1);
  if ( v11 > 0x20 )
    goto LABEL_22;
  v12 = MasterIrp->Flags + v11 + 24;
  if ( v12 < 0x1C )
    v12 = 28;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v12 || Options < v12 )
  {
LABEL_22:
    v13 = -1073741811;
    goto LABEL_23;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < v12 )
  {
    v13 = -1073741789;
LABEL_23:
    a2->IoStatus.Information = 0LL;
    if ( v4 )
    {
      v21 = *(_DWORD *)(a1 + 96);
      sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v22);
      v15 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v16 = *(const wchar_t **)(v15 + 5016);
        v17 = v15 + 5000;
        v18 = *(_DWORD *)(v15 + 56);
        v19 = (const wchar_t *)&unk_1C0082788;
        if ( v16 )
          v19 = v16;
        sub_1C0050984(
          a1 + 169,
          a1 + 160,
          (__int64)v19,
          v18,
          v14,
          SBYTE1(v21),
          SBYTE2(v21),
          a1 + 2024,
          v17,
          *((const wchar_t **)&v22 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v19,
          "TcgGetLockingObjectMetadata",
          v23,
          v13,
          MdlAddress,
          Flags,
          v7,
          0);
      }
    }
    return sub_1C0003440(a2, 0, v13);
  }
  if ( !HIDWORD(MasterIrp->MdlAddress) )
  {
    v13 = -1073741637;
    goto LABEL_23;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
  {
    v13 = -2147483631;
    goto LABEL_23;
  }
  MdlAddress = (int)MasterIrp->MdlAddress;
  Flags = MasterIrp->Flags;
  v7 = *(&MasterIrp->Flags + 1);
  v4 = 1;
  v13 = sub_1C005A560(a1, v23);
  if ( v13 >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
    {
      v13 = sub_1C005A188(
              a1,
              HIDWORD(MasterIrp->MdlAddress),
              MasterIrp->Flags,
              (char *)&MasterIrp->AssociatedIrp + *(&MasterIrp->Flags + 1),
              *(&MasterIrp->Flags + 1),
              &MasterIrp->AssociatedIrp,
              v23);
      if ( v13 >= 0 )
        a2->IoStatus.Information = *(unsigned int *)(&MasterIrp->Size + 1);
    }
    else
    {
      v13 = -1073741637;
    }
  }
  *(_DWORD *)(a1 + 456) &= ~8u;
  if ( v13 < 0 )
    goto LABEL_23;
  return sub_1C0003440(a2, 0, v13);
}
