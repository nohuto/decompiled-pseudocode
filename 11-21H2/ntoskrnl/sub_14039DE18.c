/*
 * XREFs of sub_14039DE18 @ 0x14039DE18
 * Callers:
 *     sub_14039D79C @ 0x14039D79C (sub_14039D79C.c)
 *     sub_14039DC8C @ 0x14039DC8C (sub_14039DC8C.c)
 *     sub_14054CBD0 @ 0x14054CBD0 (sub_14054CBD0.c)
 *     sub_14054CFC4 @ 0x14054CFC4 (sub_14054CFC4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14039DE18(unsigned int a1, unsigned __int64 *a2, char a3, __int64 *a4)
{
  __int64 v4; // r10
  unsigned __int64 *v5; // r11
  signed __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  char v10; // cl
  unsigned __int64 v11; // rax
  __int64 v12; // rdx

  v4 = 0LL;
  v5 = a2;
  if ( a3 )
  {
    if ( a1 )
    {
      v8 = a1;
      do
      {
        v9 = *v5;
        if ( (*v5 & 0xC00) != 0 && (*v5 & 0x3FF) != 0 )
        {
          v10 = 9 * ((v9 >> 10) & 3);
          v11 = v9 & 0xFFFFFFFFFFFFF000uLL;
          v12 = (*v5 & 0x3FF) + 1;
          do
          {
            a4[v4] = v11;
            v11 += 4096LL << v10;
            v4 = (unsigned int)(v4 + 1);
            --v12;
          }
          while ( v12 );
        }
        else
        {
          a4[v4] = v9 & 0xFFFFFFFFFFFFF3FFuLL;
          v4 = (unsigned int)(v4 + 1);
        }
        ++v5;
        --v8;
      }
      while ( v8 );
    }
  }
  else if ( a1 )
  {
    v6 = (char *)a2 - (char *)a4;
    v7 = a1;
    do
    {
      *a4 = *(__int64 *)((char *)a4 + v6) & 0x800 | (*(__int64 *)((char *)a4 + v6)
                                                   + (*(__int64 *)((char *)a4 + v6) & 0xC00));
      ++a4;
      --v7;
    }
    while ( v7 );
  }
}
