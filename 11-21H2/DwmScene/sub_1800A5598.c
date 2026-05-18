/*
 * XREFs of sub_1800A5598 @ 0x1800A5598
 * Callers:
 *     sub_1800A4898 @ 0x1800A4898 (sub_1800A4898.c)
 * Callees:
 *     sub_1800A5678 @ 0x1800A5678 (sub_1800A5678.c)
 */

__int64 __fastcall sub_1800A5598(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx

  while ( a5 > 32 )
  {
    v8 = a5 - 32;
    v9 = a1 + 512;
    v10 = 32LL;
    if ( v8 < 32 )
      v10 = v8;
    a5 = v8 - v10;
    v11 = v9 + 16 * v10;
    a3 = sub_1800A5678(a1, v9, v11, a3);
    a1 = v11;
  }
  return sub_1800A5708(a1, a2, a3);
}
