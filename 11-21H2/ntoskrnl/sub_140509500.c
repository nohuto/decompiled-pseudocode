/*
 * XREFs of sub_140509500 @ 0x140509500
 * Callers:
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140509500(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rdx
  __int64 v4; // rax

  v1 = a1 & 0xFFFFFFFFFFFF0000uLL;
  v2 = v1 + 0x10000;
  if ( v1 < qword_140C54AA0 || v2 > qword_140C54AB8 )
    return 1;
  while ( v1 < v2 )
  {
    v4 = *(_QWORD *)(8 * ((v1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
    if ( (v4 & 1) != 0 && v4 >= 0 )
      return 1;
    v1 += 4096LL;
  }
  return 0;
}
