/*
 * XREFs of sub_1C0052C58 @ 0x1C0052C58
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C00580FC @ 0x1C00580FC (sub_1C00580FC.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C0052C58(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rdx
  struct _IRP *v4; // rbx
  char v5; // di
  unsigned int Options; // ecx
  unsigned int Flags; // eax
  unsigned int v9; // eax
  int v10; // r14d
  int v11; // edx
  int v12; // r8d
  char v13; // r11
  __int64 v14; // r9
  const wchar_t *v15; // rax
  __int64 v16; // rdi
  int v17; // r9d
  const wchar_t *v18; // rbp
  int v20; // [rsp+B0h] [rbp-68h]
  __int128 v21; // [rsp+B8h] [rbp-60h] BYREF
  char v22[32]; // [rsp+C8h] [rbp-50h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  if ( !MasterIrp )
    goto LABEL_14;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_14;
  v4 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  Flags = MasterIrp->Flags;
  if ( Flags > 0x20 )
    goto LABEL_14;
  v9 = Flags + 20;
  if ( v9 < 0x18 )
    v9 = 24;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v9 && Options >= v9 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
    {
      v10 = -2147483631;
    }
    else
    {
      v5 = 1;
      v10 = sub_1C005A560(a1, v22);
      if ( v10 >= 0 )
      {
        LOBYTE(v12) = BYTE5(v4->MdlAddress);
        LOBYTE(v11) = BYTE4(v4->MdlAddress);
        v10 = sub_1C00580FC(a1, v11, v12, v4->Flags, (__int64)(&v4->Flags + 1), (__int64)v22);
      }
      *(_DWORD *)(a1 + 456) &= ~8u;
    }
  }
  else
  {
LABEL_14:
    v10 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  if ( v10 < 0 )
  {
    if ( v5 )
    {
      v20 = *(_DWORD *)(a1 + 96);
      sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v21);
      v14 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v15 = *(const wchar_t **)(v14 + 5016);
        v16 = v14 + 5000;
        v17 = *(_DWORD *)(v14 + 56);
        v18 = (const wchar_t *)&unk_1C0082788;
        if ( v15 )
          v18 = v15;
        sub_1C0050984(
          BYTE5(v4->MdlAddress),
          BYTE4(v4->MdlAddress),
          a1 + 186,
          v17,
          v13,
          SBYTE1(v20),
          SBYTE2(v20),
          a1 + 2024,
          v16,
          *((const wchar_t **)&v21 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v18,
          "TcgActivateLocking",
          v22,
          v10,
          BYTE4(v4->MdlAddress),
          BYTE5(v4->MdlAddress),
          v4->Flags,
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v10);
}
