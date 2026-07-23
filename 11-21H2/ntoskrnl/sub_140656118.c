/*
 * XREFs of sub_140656118 @ 0x140656118
 * Callers:
 *     sub_1406565BC @ 0x1406565BC (sub_1406565BC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140656118(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int16 v12; // bx
  __int64 v13; // rdx
  __int16 v14; // ax

  v4 = a4;
  v5 = a1 + 40;
  while ( (sub_14042A5E0(v5, a2) & 5) != 4 )
    ;
  while ( (sub_14042A5E0(v5, a2) & 8) != 0 )
    sub_14042A5E0(a1 + 96, v7);
  sub_14042A5E0(a1 + 16, 0LL);
  v8 = a1 + 8;
  sub_14042A5E0(a1 + 8, 0LL);
  sub_14042A5E0(a1, 15LL);
  sub_14042A5E0(a1 + 4, 0LL);
  sub_14042A5E0(a1 + 20, v4);
  v10 = a1 + 52;
  v11 = a1 + 48;
  do
  {
    do
    {
      v12 = sub_14042A5E0(v10, v9);
      v14 = sub_14042A5E0(v11, v13);
    }
    while ( v12 );
  }
  while ( v14 );
  return sub_14042A5E0(v8, 1LL);
}
