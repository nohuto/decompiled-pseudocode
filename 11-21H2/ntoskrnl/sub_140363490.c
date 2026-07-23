/*
 * XREFs of sub_140363490 @ 0x140363490
 * Callers:
 *     sub_1403633A0 @ 0x1403633A0 (sub_1403633A0.c)
 * Callees:
 *     sub_140363560 @ 0x140363560 (sub_140363560.c)
 *     sub_1403635BC @ 0x1403635BC (sub_1403635BC.c)
 *     sub_140363A64 @ 0x140363A64 (sub_140363A64.c)
 *     sub_140368170 @ 0x140368170 (sub_140368170.c)
 */

__int64 __fastcall sub_140363490(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  char v10; // di
  unsigned __int64 v11; // r8
  __int64 v12; // rbp
  signed __int64 v13; // rdx
  __int64 v14; // rcx
  signed __int64 i; // rax
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v17 = 0LL;
  BYTE8(v17) = 0;
  v18 = 0LL;
  if ( a4 )
  {
    v7 = sub_140363A64(a1, a2 >> 15, &v18, &v17);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = a2;
      v10 = a2 & 0x3F;
      v11 = v9 >> 6;
      v12 = a4 << v10;
      v13 = *(_QWORD *)(v8 + 8 * v11);
      v14 = v13 & ~(3LL << v10);
      for ( i = v13; ; v14 = i & ~(3LL << v10) )
      {
        i = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8 * v11), v12 | v14, i);
        if ( v13 == i )
          break;
        v13 = i;
      }
      v7 = 0;
      sub_1403635BC(&v18);
      v18 = v17;
      sub_140363560(&v18);
    }
    return (unsigned int)v7;
  }
  else
  {
    sub_140368170(a1, a2, 2LL);
    return 0LL;
  }
}
