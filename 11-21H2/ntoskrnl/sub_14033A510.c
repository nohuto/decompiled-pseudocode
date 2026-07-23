/*
 * XREFs of sub_14033A510 @ 0x14033A510
 * Callers:
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_14026ED30 @ 0x14026ED30 (sub_14026ED30.c)
 *     sub_14026FA0C @ 0x14026FA0C (sub_14026FA0C.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140273EE0 @ 0x140273EE0 (sub_140273EE0.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_14031EAA0 @ 0x14031EAA0 (sub_14031EAA0.c)
 *     sub_140337B00 @ 0x140337B00 (sub_140337B00.c)
 *     sub_14033A030 @ 0x14033A030 (sub_14033A030.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_14033A510(volatile signed __int64 *a1, int a2, unsigned __int8 a3)
{
  signed __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rdi
  int v6; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  signed __int64 v10; // rcx
  bool v11; // zf
  signed __int64 result; // rax

  v3 = *a1;
  v4 = a2 & 0x80000000;
  v5 = a2 & 1;
  v6 = a2 & 2;
  do
  {
    v8 = v3;
    if ( v4 )
      v8 = v3 ^ (v3 ^ ((unsigned __int64)a3 << 56)) & 0x7F00000000000000LL;
    v9 = v8 | 0x20;
    if ( !v5 )
      v9 = v8;
    v10 = v9 | 0x42;
    if ( !v6 )
      v10 = v9;
    if ( (dword_140D06880 & 0x4000000) != 0 )
      _mm_lfence();
    result = _InterlockedCompareExchange64(a1, v10, v3);
    v11 = v3 == result;
    v3 = result;
  }
  while ( !v11 );
  return result;
}
