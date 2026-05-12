/*
 * XREFs of sub_1C0050E94 @ 0x1C0050E94
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C0050E94(__int64 a1, IRP *a2)
{
  char v3; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v5; // r12
  struct _IRP *MasterIrp; // rsi
  unsigned int Options; // ecx
  unsigned int Flink; // eax
  unsigned int v10; // eax
  int v11; // edi
  __int64 v12; // r12
  struct _IRP *v13; // rax
  int v14; // r9d
  int v15; // ecx
  int v16; // eax
  __int64 v17; // r8
  char v18; // r11
  const wchar_t *v19; // rcx
  char v21; // [rsp+C0h] [rbp-70h]
  int v22; // [rsp+C8h] [rbp-68h]
  int MdlAddress; // [rsp+D0h] [rbp-60h]
  __int128 v24; // [rsp+E0h] [rbp-50h] BYREF
  __int128 v25; // [rsp+F0h] [rbp-40h] BYREF
  _OWORD v26[2]; // [rsp+100h] [rbp-30h] BYREF

  LOBYTE(MdlAddress) = 0;
  LOBYTE(v22) = 0;
  v3 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v25 = 0LL;
  v24 = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( !MasterIrp )
    goto LABEL_29;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x28 )
    goto LABEL_29;
  if ( MasterIrp->Type != 1 )
    goto LABEL_29;
  Flink = (unsigned int)MasterIrp->ThreadListEntry.Flink;
  if ( Flink > 0x20 )
    goto LABEL_29;
  v10 = Flink + 36;
  if ( v10 < 0x28 )
    v10 = 40;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v10 || Options < v10 || ((__int64)MasterIrp->MdlAddress & 6) == 2 )
  {
LABEL_29:
    v11 = -1073741811;
    goto LABEL_30;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < 0x40 )
  {
    v11 = -1073741789;
    goto LABEL_30;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
  {
    v11 = -2147483631;
    goto LABEL_30;
  }
  v3 = 1;
  v12 = (__int64)a2->AssociatedIrp.MasterIrp;
  MdlAddress = (int)MasterIrp->MdlAddress;
  v22 = (int)MasterIrp->ThreadListEntry.Flink;
  if ( (MdlAddress & 1) != 0 )
    v13 = MasterIrp->AssociatedIrp.MasterIrp;
  else
    LOBYTE(v13) = 0;
  v21 = (char)v13;
  v11 = sub_1C005A560(a1, v26);
  if ( v11 >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 6016) + 53LL) )
    {
      v15 = (int)MasterIrp->MdlAddress;
      if ( (v15 & 1) != 0 )
      {
        LOBYTE(v14) = ((__int64)MasterIrp->MdlAddress & 4) != 0;
        v16 = sub_1C00586DC(
                a1,
                *(_QWORD *)&MasterIrp->Flags,
                MasterIrp->AssociatedIrp.MasterIrp,
                v14,
                MasterIrp->ThreadListEntry.Flink,
                (__int64)&MasterIrp->ThreadListEntry.Flink + 4,
                v12,
                (__int64)v26);
      }
      else
      {
        if ( (v15 & 2) == 0 )
        {
          v11 = -1073741811;
          goto LABEL_27;
        }
        v16 = sub_1C0058378(
                a1,
                MasterIrp->Flags,
                MasterIrp->ThreadListEntry.Flink,
                (int)MasterIrp + 36,
                v12,
                (__int64)v26);
      }
      v11 = v16;
      if ( v16 >= 0 )
        a2->IoStatus.Information = 64LL;
      goto LABEL_27;
    }
    v11 = -1073741637;
  }
LABEL_27:
  *(_DWORD *)(a1 + 128) &= ~1u;
  if ( v11 >= 0 )
    return sub_1C0003440(a2, 0, v11);
  v5 = v21;
LABEL_30:
  a2->IoStatus.Information = 0LL;
  if ( v3 )
  {
    sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v24);
    if ( (byte_1C0093A07 & 4) != 0 )
    {
      v19 = (const wchar_t *)&unk_1C0082788;
      if ( *(_QWORD *)(a1 + 5016) )
        v19 = *(const wchar_t **)(a1 + 5016);
      sub_1C0050984(
        (__int64)v19,
        a1 + 5000,
        v17,
        *(_DWORD *)(a1 + 56),
        -1,
        255,
        255,
        (__int64)&v25,
        a1 + 5000,
        *((const wchar_t **)&v24 + 1),
        byte_1C0082FE6,
        byte_1C0082FE6,
        byte_1C0082FE6,
        v19,
        "TcgAssignLockingObject",
        (const char *)v26,
        v11,
        MdlAddress,
        v22,
        v18,
        v5);
    }
  }
  return sub_1C0003440(a2, 0, v11);
}
