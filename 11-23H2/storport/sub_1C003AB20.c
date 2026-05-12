/*
 * XREFs of sub_1C003AB20 @ 0x1C003AB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0025BC0 @ 0x1C0025BC0 (sub_1C0025BC0.c)
 *     sub_1C0025BE4 @ 0x1C0025BE4 (sub_1C0025BE4.c)
 *     sub_1C0025C0A @ 0x1C0025C0A (sub_1C0025C0A.c)
 *     sub_1C0033D34 @ 0x1C0033D34 (sub_1C0033D34.c)
 */

char __fastcall sub_1C003AB20(int a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // r9
  unsigned __int64 v19; // rcx

  v5 = sub_1C0007798(a3, 12);
  if ( v5 )
  {
    LOBYTE(v5) = sub_1C0025C0A((_QWORD *)a3);
    if ( (_BYTE)v5 )
    {
      v7 = sub_1C0025BC0(v6);
      LOBYTE(v5) = sub_1C0025BE4(v7);
      if ( a1 == 1 )
      {
        *(_BYTE *)(a3 + 108) |= 2u;
        v8 = sub_1C0025BC0(a3);
        v9 = sub_1C0025BE4(v8);
        if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
          sub_1C0033D34(v11, v10, v12, *(_DWORD *)(a3 + 56), v10, v12, v13, v9);
        LOBYTE(v5) = MEMORY[0xFFFFF78000000008];
        *(_QWORD *)(a3 + 5160) = MEMORY[0xFFFFF78000000008];
      }
      else if ( a1 == 2 )
      {
        *(_BYTE *)(a3 + 108) &= ~2u;
        v14 = sub_1C0025BC0(a3);
        LOBYTE(v5) = sub_1C0025BE4(v14);
        if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x10) != 0 )
          LOBYTE(v5) = sub_1C0033D34(v16, v15, v17, *(_DWORD *)(a3 + 56), v15, v17, v18, v5);
        if ( *(_QWORD *)(a3 + 5160) )
        {
          v19 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a3 + 5160);
          LOBYTE(v5) = 75 * v19;
          *(_QWORD *)(a3 + 5168) += v19 / 0x2710;
          *(_QWORD *)(a3 + 5160) = 0LL;
        }
      }
    }
  }
  return v5;
}
