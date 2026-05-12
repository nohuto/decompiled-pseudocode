/*
 * XREFs of sub_1C0053744 @ 0x1C0053744
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C00594D4 @ 0x1C00594D4 (sub_1C00594D4.c)
 *     sub_1C005A560 @ 0x1C005A560 (sub_1C005A560.c)
 */

__int64 __fastcall sub_1C0053744(__int64 a1, IRP *a2)
{
  unsigned int *MasterIrp; // rdx
  unsigned int *v4; // rbx
  char v5; // si
  unsigned int Options; // ecx
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // ebp
  char v11; // r11
  __int64 v12; // r9
  const wchar_t *v13; // rsi
  int v15; // [rsp+B0h] [rbp-58h]
  __int128 v16; // [rsp+B8h] [rbp-50h] BYREF
  char v17[32]; // [rsp+C8h] [rbp-40h] BYREF

  MasterIrp = (unsigned int *)a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v5 = 0;
  v16 = 0LL;
  memset(v17, 0, sizeof(v17));
  if ( !MasterIrp )
    goto LABEL_18;
  Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x18 )
    goto LABEL_18;
  v4 = MasterIrp;
  if ( *(_WORD *)MasterIrp != 1 )
    goto LABEL_18;
  v8 = MasterIrp[4];
  if ( v8 > 0x20 )
    goto LABEL_18;
  v9 = v8 + 20;
  if ( v9 < 0x18 )
    v9 = 24;
  if ( MasterIrp[1] == v9 && Options >= v9 )
  {
    if ( MasterIrp[3] )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
      {
        v10 = -2147483631;
      }
      else
      {
        v5 = 1;
        v10 = sub_1C005A560(a1, v17);
        if ( v10 >= 0 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 3504) + 53LL) )
            v10 = sub_1C00594D4(a1, v4[3], v4[4], (int)v4 + 20, (__int64)v17);
          else
            v10 = -1073741637;
        }
        *(_DWORD *)(a1 + 456) &= ~8u;
      }
    }
    else
    {
      v10 = -1073741637;
    }
  }
  else
  {
LABEL_18:
    v10 = -1073741811;
  }
  a2->IoStatus.Information = 0LL;
  if ( v10 < 0 )
  {
    if ( v5 )
    {
      v15 = *(_DWORD *)(a1 + 96);
      sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v16);
      v12 = *(_QWORD *)(a1 + 24);
      if ( (byte_1C0093A07 & 4) != 0 )
      {
        v13 = (const wchar_t *)&unk_1C0082788;
        if ( *(_QWORD *)(v12 + 5016) )
          v13 = *(const wchar_t **)(v12 + 5016);
        sub_1C0050984(
          v4[2],
          a1 + 186,
          a1 + 169,
          *(_DWORD *)(v12 + 56),
          v11,
          SBYTE1(v15),
          SBYTE2(v15),
          a1 + 2024,
          v12 + 5000,
          *((const wchar_t **)&v16 + 1),
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          v13,
          "TcgEraseLockingObject",
          v17,
          v10,
          v4[2],
          v4[4],
          0,
          0);
      }
    }
  }
  return sub_1C0003440(a2, 0, v10);
}
