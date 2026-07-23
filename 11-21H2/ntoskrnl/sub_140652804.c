/*
 * XREFs of sub_140652804 @ 0x140652804
 * Callers:
 *     sub_140659E70 @ 0x140659E70 (sub_140659E70.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140652804(char *Src, size_t Size, char *a3, unsigned int a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  unsigned int v7; // ebx

  v4 = 0;
  v5 = a4;
  v7 = Size;
  if ( (unsigned int)Size <= a4 )
  {
LABEL_4:
    if ( v7 < a4 )
      memset(a3, 0, a4 - v7);
    memmove(&a3[v5 - v7], Src, v7);
  }
  else
  {
    while ( !*Src )
    {
      ++Src;
      if ( --v7 <= a4 )
        goto LABEL_4;
    }
    return (unsigned int)-1073740760;
  }
  return v4;
}
