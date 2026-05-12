/*
 * XREFs of sub_1C0052EB0 @ 0x1C0052EB0
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C0058378 @ 0x1C0058378 (sub_1C0058378.c)
 *     sub_1C00586DC @ 0x1C00586DC (sub_1C00586DC.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C0052EB0(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v4; // r14
  char v5; // r15
  __int64 v6; // r12
  struct _IRP *v7; // r13
  struct _IRP *MasterIrp; // rbx
  unsigned int Options; // ecx
  unsigned int Flink; // eax
  unsigned int v12; // eax
  int v13; // edi
  __int64 v14; // r14
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  char v18; // r11
  __int64 v19; // r9
  const wchar_t *v20; // rax
  __int64 v21; // r10
  int v22; // r9d
  const wchar_t *v23; // r8
  int v25; // [rsp+B0h] [rbp-88h]
  int v26; // [rsp+B8h] [rbp-80h]
  int MdlAddress; // [rsp+C0h] [rbp-78h]
  __int128 v28; // [rsp+C8h] [rbp-70h] BYREF
  char v29[32]; // [rsp+D8h] [rbp-60h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  LOBYTE(v26) = 0;
  v5 = 0;
  LOBYTE(v6) = 0;
  LOBYTE(v7) = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
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
  v12 = Flink + 36;
  if ( v12 < 0x28 )
    v12 = 40;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) != v12 || Options < v12 || ((__int64)MasterIrp->MdlAddress & 6) == 2 )
  {
LABEL_29:
    v13 = -1073741811;
    goto LABEL_30;
  }
  if ( CurrentStackLocation->Parameters.Read.Length < 0x40 )
  {
    v13 = -1073741789;
    goto LABEL_30;
  }
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
  {
    v13 = -2147483631;
    goto LABEL_30;
  }
  v5 = 1;
  v14 = (__int64)a2->AssociatedIrp.MasterIrp;
  MdlAddress = (int)MasterIrp->MdlAddress;
  v26 = (int)MasterIrp->ThreadListEntry.Flink;
  if ( (MdlAddress & 1) != 0 )
  {
    v6 = *(_QWORD *)&MasterIrp->Flags;
    v7 = MasterIrp->AssociatedIrp.MasterIrp;
  }
  else
  {
    LODWORD(v6) = MasterIrp->Flags;
  }
  v13 = sub_1C005A560(a1, v29);
  if ( v13 >= 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
    {
      v16 = (int)MasterIrp->MdlAddress;
      if ( (v16 & 1) != 0 )
      {
        LOBYTE(v15) = ((__int64)MasterIrp->MdlAddress & 4) != 0;
        v17 = sub_1C00586DC(
                a1,
                *(_QWORD *)&MasterIrp->Flags,
                MasterIrp->AssociatedIrp.MasterIrp,
                v15,
                MasterIrp->ThreadListEntry.Flink,
                (__int64)&MasterIrp->ThreadListEntry.Flink + 4,
                v14,
                (__int64)v29);
      }
      else
      {
        if ( (v16 & 2) == 0 )
        {
          v13 = -1073741811;
          goto LABEL_27;
        }
        v17 = sub_1C0058378(
                a1,
                MasterIrp->Flags,
                MasterIrp->ThreadListEntry.Flink,
                (int)MasterIrp + 36,
                v14,
                (__int64)v29);
      }
      v13 = v17;
      if ( v17 >= 0 )
        a2->IoStatus.Information = 64LL;
      goto LABEL_27;
    }
    v13 = -1073741637;
  }
LABEL_27:
  *(_DWORD *)(a1 + 456) &= ~8u;
  if ( v13 >= 0 )
    return sub_1C0003440(a2, 0, v13);
  v4 = MdlAddress;
LABEL_30:
  a2->IoStatus.Information = 0LL;
  if ( v5 )
  {
    v25 = *(_DWORD *)(a1 + 96);
    sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v28);
    v19 = *(_QWORD *)(a1 + 24);
    if ( (byte_1C0093A07 & 4) != 0 )
    {
      v20 = *(const wchar_t **)(v19 + 5016);
      v21 = v19 + 5000;
      v22 = *(_DWORD *)(v19 + 56);
      v23 = (const wchar_t *)&unk_1C0082788;
      if ( v20 )
        v23 = v20;
      sub_1C0050984(
        a1 + 169,
        a1 + 160,
        (__int64)v23,
        v22,
        v18,
        SBYTE1(v25),
        SBYTE2(v25),
        a1 + 2024,
        v21,
        *((const wchar_t **)&v28 + 1),
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        v23,
        "TcgAssignLockingObject",
        v29,
        v13,
        v4,
        v26,
        v6,
        (char)v7);
    }
  }
  return sub_1C0003440(a2, 0, v13);
}
