/*
 * XREFs of sub_1407E4684 @ 0x1407E4684
 * Callers:
 *     sub_1407E43F0 @ 0x1407E43F0 (sub_1407E43F0.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_1407E4720 @ 0x1407E4720 (sub_1407E4720.c)
 */

__int64 __fastcall sub_1407E4684(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v6; // ebp
  unsigned __int64 v7; // r14

  v3 = 0LL;
  if ( a2 )
  {
    v6 = (unsigned int)(a2 + 63) >> 6;
    v7 = (sub_140363220(1) & 0x7FFFFFFFuLL) % (1023 - v6 + 1);
    v3 = sub_1407E4720(a1, v7, 1023 - v6, v6);
    if ( !v3 )
      v3 = sub_1407E4720(a1, 0LL, (unsigned int)v7, v6);
  }
  if ( a3 )
    *a3 = v3;
  return 0LL;
}
