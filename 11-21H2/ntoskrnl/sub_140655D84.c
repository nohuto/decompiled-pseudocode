/*
 * XREFs of sub_140655D84 @ 0x140655D84
 * Callers:
 *     sub_1406557D0 @ 0x1406557D0 (sub_1406557D0.c)
 *     sub_140655A20 @ 0x140655A20 (sub_140655A20.c)
 *     sub_140655D60 @ 0x140655D60 (sub_140655D60.c)
 *     sub_140655E40 @ 0x140655E40 (sub_140655E40.c)
 *     sub_140655EB0 @ 0x140655EB0 (sub_140655EB0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140656050 @ 0x140656050 (sub_140656050.c)
 *     sub_14065691C @ 0x14065691C (sub_14065691C.c)
 */

char __fastcall sub_140655D84(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // al
  char v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx

  v5 = a4;
  v6 = a3;
  LOBYTE(a4) = a5;
  v7 = a2;
  LOBYTE(a3) = v5;
  LOBYTE(a2) = v6;
  sub_14065691C(v7, a2, a3, a4);
  LOBYTE(v8) = 3;
  sub_14042A5E0(v7, v8);
  LOBYTE(v9) = 3;
  sub_14042A5E0(v7, v9);
  LOBYTE(v10) = 1;
  sub_14042A5E0(v7, v10);
  LOBYTE(v11) = 2;
  sub_14042A5E0(v7, v11);
  sub_140656050(v7, *(unsigned int *)(v7 + 8));
  LOBYTE(v12) = 2;
  sub_14042A5E0(v7, v12);
  LOBYTE(v13) = 4;
  sub_14042A5E0(v7, v13);
  LOBYTE(v14) = 6;
  if ( (sub_14042A5E0(v7, v14) & 0x40) != 0 )
    *(_WORD *)(v7 + 12) |= 2u;
  return 1;
}
