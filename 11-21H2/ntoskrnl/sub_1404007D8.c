/*
 * XREFs of sub_1404007D8 @ 0x1404007D8
 * Callers:
 *     sub_140400914 @ 0x140400914 (sub_140400914.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1404007D8(
        const void *a1,
        size_t a2,
        const void *a3,
        size_t a4,
        int a5,
        _WORD *a6,
        unsigned __int64 a7)
{
  unsigned int v9; // ebx
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  size_t v12; // rdi
  size_t v13; // rax
  char *v14; // rcx

  if ( (a5 & 0xFFFFFFFE) != 0 )
    return 209715726;
  v9 = 0;
  v10 = 1LL;
  if ( (a5 & 1) != 0 )
  {
    v11 = a2;
  }
  else if ( a4 )
  {
    if ( !a3 )
      return 209715726;
    v11 = a2 + a4 + 6;
  }
  else
  {
    v11 = a2 + 2;
  }
  if ( v11 > 0x80 || v11 + 11 > a7 )
    return 209715726;
  v12 = a7 - v11 - 3;
  *a6 = 256;
  *((_BYTE *)a6 + v12 + 2) = 0;
  memset(a6 + 1, 255, v12);
  if ( (a5 & 1) != 0 )
  {
    v14 = (char *)a6 + a7 - v11;
  }
  else
  {
    if ( a3 && a4 )
    {
      *((_BYTE *)a6 + a7 - v11) = 48;
      *((_BYTE *)a6 + v12 + 4) = v11 - 2;
      *((_BYTE *)a6 + v12 + 5) = 48;
      *((_BYTE *)a6 + v12 + 6) = a4;
      v10 = 5LL;
      memmove((char *)a6 + v12 + 7, a3, a4);
    }
    v13 = a4 + v12 + v10;
    v14 = (char *)a6 + v13 + 4;
    *((_BYTE *)a6 + v13 + 2) = 4;
    *((_BYTE *)a6 + v13 + 3) = a2;
  }
  memmove(v14, a1, a2);
  return v9;
}
