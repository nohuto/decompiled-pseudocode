/*
 * XREFs of sub_18001E684 @ 0x18001E684
 * Callers:
 *     sub_18001E7D0 @ 0x18001E7D0 (sub_18001E7D0.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

_QWORD *__fastcall sub_18001E684(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8

  v4 = a1;
  v5 = a1[2];
  if ( v5 < a3 )
    a3 = a1[2];
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v6 = v5 - a3;
  v4[2] = v6;
  memmove(a1, (char *)a1 + a3, v6 + 1);
  return v4;
}
