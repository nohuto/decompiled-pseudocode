/*
 * XREFs of sub_14097F73C @ 0x14097F73C
 * Callers:
 *     sub_1405A216C @ 0x1405A216C (sub_1405A216C.c)
 * Callees:
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_14059A668 @ 0x14059A668 (sub_14059A668.c)
 */

__int64 __fastcall sub_14097F73C(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  _QWORD *v4; // rdi
  int v5; // ebp
  unsigned __int64 *i; // rsi
  unsigned __int64 v7; // rdx

  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( a2 )
  {
    for ( i = (unsigned __int64 *)(a1 + 8); ; i += 3 )
    {
      if ( !v4 || (v7 = v4[6], *i < v7) || *i > v7 + *((unsigned int *)v4 + 16) )
      {
        v4 = sub_1402FDA80(*i, 1);
        if ( !v4 )
          break;
      }
      if ( (v4[13] & 0x2000) != 0
        && (sub_14059A668(*i + 0x800000000000LL, (const signed __int64 *)qword_140C4F3F0) & 0xFFFFFFFD) == 0 )
      {
        return (unsigned int)-1073741436;
      }
      if ( ++v5 >= a2 )
        return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
