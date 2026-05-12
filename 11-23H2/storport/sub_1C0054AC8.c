/*
 * XREFs of sub_1C0054AC8 @ 0x1C0054AC8
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005BC64 @ 0x1C005BC64 (sub_1C005BC64.c)
 */

__int64 __fastcall sub_1C0054AC8(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rcx
  struct _IRP *v4; // rbx
  char v5; // di
  unsigned int Options; // edx
  unsigned int v8; // eax
  unsigned int IrpCount; // ecx
  unsigned int v10; // eax
  int v11; // r15d
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rax
  __int64 v15; // rsi
  const wchar_t *v16; // r14
  int v17; // r9d
  int v19; // [rsp+B0h] [rbp-68h]
  __int128 v20; // [rsp+B8h] [rbp-60h] BYREF
  char v21[32]; // [rsp+C8h] [rbp-50h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v20 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( !MasterIrp )
    goto LABEL_15;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x20 )
    goto LABEL_15;
  v4 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_15;
  v8 = *(&MasterIrp->Flags + 1);
  if ( v8 > 0x20 )
    goto LABEL_15;
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount > 0x20 )
    goto LABEL_15;
  v10 = IrpCount + v8 + 28;
  if ( v10 < 0x20 )
    v10 = 32;
  if ( *(_DWORD *)(&v4->Size + 1) == v10 && Options >= v10 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
    {
      v11 = -2147483631;
    }
    else
    {
      v5 = 1;
      v11 = sub_1C005A560(a1, v21);
      if ( v11 >= 0 )
        v11 = sub_1C005BC64(
                a1,
                HIDWORD(v4->MdlAddress),
                v4->Flags,
                *(&v4->Flags + 1),
                (__int64)&v4->AssociatedIrp.SystemBuffer + 4,
                v4->AssociatedIrp.IrpCount,
                (__int64)&v4->AssociatedIrp.SystemBuffer + *(&v4->Flags + 1) + 4,
                (__int64)v21);
      *(_DWORD *)(a1 + 456) &= ~8u;
    }
  }
  else
  {
LABEL_15:
    v11 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  if ( v11 < 0 )
  {
    if ( v5 )
    {
      v19 = *(_DWORD *)(a1 + 96);
      sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v20);
      v13 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v14 = *(const wchar_t **)(v13 + 5016);
        v15 = v13 + 5000;
        v16 = (const wchar_t *)&unk_1C0082788;
        v17 = *(_DWORD *)(v13 + 56);
        if ( v14 )
          v16 = v14;
        sub_1C0050984(
          *(&v4->Flags + 1),
          (int)v4->Flags,
          SHIDWORD(v4->MdlAddress),
          v17,
          v12,
          SBYTE1(v19),
          SBYTE2(v19),
          a1 + 2024,
          v15,
          *((const wchar_t **)&v20 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v16,
          "TcgSetSpAuthorityKey",
          v21,
          v11,
          HIDWORD(v4->MdlAddress),
          v4->Flags,
          *(&v4->Flags + 1),
          v4->AssociatedIrp.IrpCount);
      }
    }
  }
  return sub_1C0003440(a2, 0, v11);
}
