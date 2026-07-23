/*
 * XREFs of sub_1405EADE8 @ 0x1405EADE8
 * Callers:
 *     sub_1403717D4 @ 0x1403717D4 (sub_1403717D4.c)
 *     sub_1405EB088 @ 0x1405EB088 (sub_1405EB088.c)
 * Callees:
 *     sub_1405F1AA4 @ 0x1405F1AA4 (sub_1405F1AA4.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

unsigned __int8 *__fastcall sub_1405EADE8(int a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  int v3; // r8d
  int v4; // edx
  int v5; // ecx

  if ( (a2 & 0xF) != 0 )
  {
    v3 = a2;
    v4 = a1;
    v5 = 9;
    goto LABEL_7;
  }
  v2 = (unsigned __int8 *)(a2 - 16);
  _m_prefetchw(v2);
  if ( v2[15] == 5 )
    v2 -= 16 * v2[14];
  if ( (v2[15] & 0x3F) == 0 )
  {
    v3 = (int)v2;
    v4 = a1;
    v5 = 8;
LABEL_7:
    sub_1405F1BBC(v5, v4, v3, 0, 0LL, 0LL);
    return 0LL;
  }
  return v2;
}
