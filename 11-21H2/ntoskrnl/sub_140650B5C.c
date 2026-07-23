/*
 * XREFs of sub_140650B5C @ 0x140650B5C
 * Callers:
 *     sub_1406509F8 @ 0x1406509F8 (sub_1406509F8.c)
 * Callees:
 *     isspace @ 0x1403E1B20 (isspace.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

int __fastcall sub_140650B5C(_BYTE *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  char *v4; // rdi
  int v5; // ebp
  __int64 v6; // rdi

  v1 = -1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  if ( (_DWORD)v3 )
  {
    if ( (int)v3 - 1LL >= 0 )
    {
      v4 = &a1[(int)v3 - 1];
      do
      {
        LODWORD(v3) = isspace(*v4);
        if ( !(_DWORD)v3 )
          break;
        *v4-- = 0;
      }
      while ( v4 - a1 >= 0 );
    }
    do
      ++v1;
    while ( a1[v1] );
    if ( (_DWORD)v1 )
    {
      v5 = 0;
      if ( (int)v1 > 0 )
      {
        v6 = 0LL;
        do
        {
          if ( !isspace((char)a1[v6]) )
            break;
          ++v5;
          ++v6;
        }
        while ( v6 < (int)v1 );
      }
      LODWORD(v3) = (unsigned int)memmove(a1, &a1[v5], (int)v1 - v5 + 1);
    }
  }
  return v3;
}
