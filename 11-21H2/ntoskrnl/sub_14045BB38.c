/*
 * XREFs of sub_14045BB38 @ 0x14045BB38
 * Callers:
 *     sub_1403731C0 @ 0x1403731C0 (sub_1403731C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045BB38(__int64 a1, int a2)
{
  __int64 v3; // r8
  unsigned __int64 i; // rdx

  if ( a2 )
    return a1 + 8;
  v3 = ((a1 << 25) + 0x10000000) >> 16;
  for ( i = v3 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
    v3 = i;
  }
  return v3;
}
