/*
 * XREFs of sub_1C0054050 @ 0x1C0054050
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 *     sub_1C005B214 @ 0x1C005B214 (sub_1C005B214.c)
 */

__int64 __fastcall sub_1C0054050(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rdx
  struct _IRP *v4; // rbx
  char v5; // si
  unsigned int Options; // ecx
  unsigned int MdlAddress_high; // eax
  unsigned int v9; // eax
  int v10; // ebp
  int v11; // edx
  char v12; // r11
  __int64 v13; // r9
  const wchar_t *v14; // rsi
  int v16; // [rsp+B0h] [rbp-58h]
  __int128 v17; // [rsp+B8h] [rbp-50h] BYREF
  char v18[32]; // [rsp+C8h] [rbp-40h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  if ( !MasterIrp )
    goto LABEL_14;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x14 )
    goto LABEL_14;
  v4 = MasterIrp;
  if ( MasterIrp->Type != 1 )
    goto LABEL_14;
  MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
  if ( MdlAddress_high > 0x20 )
    goto LABEL_14;
  v9 = MdlAddress_high + 16;
  if ( v9 < 0x14 )
    v9 = 20;
  if ( *(_DWORD *)(&MasterIrp->Size + 1) == v9 && Options >= v9 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
    {
      v10 = -2147483631;
    }
    else
    {
      v5 = 1;
      v10 = sub_1C005A560(a1, v18);
      if ( v10 >= 0 )
      {
        LOBYTE(v11) = (__int64)v4->MdlAddress & 1;
        v10 = sub_1C005B214(a1, v11, HIDWORD(v4->MdlAddress), (int)v4 + 16, (__int64)v18);
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
      v16 = *(_DWORD *)(a1 + 96);
      sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v17);
      v13 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v14 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(v13 + 5016) )
          v14 = *(const wchar_t **)(v13 + 5016);
        sub_1C0050984(
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
          "TcgRevertConfiguration",
          v18,
          v10,
          (char)v4->MdlAddress,
          HIDWORD(v4->MdlAddress),
          0,
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v10);
}
