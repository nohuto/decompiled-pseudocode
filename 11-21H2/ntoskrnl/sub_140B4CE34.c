/*
 * XREFs of sub_140B4CE34 @ 0x140B4CE34
 * Callers:
 *     sub_140B4D03C @ 0x140B4D03C (sub_140B4D03C.c)
 *     sub_140B4D08C @ 0x140B4D08C (sub_140B4D08C.c)
 * Callees:
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 *     sub_140B4CCF8 @ 0x140B4CCF8 (sub_140B4CCF8.c)
 */

char *__fastcall sub_140B4CE34(char *Src, unsigned int a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v6; // rsi
  char *v8; // rdi
  __int64 v9; // rbx
  char *v10; // rax
  size_t v11; // r8

  v6 = a2;
  v8 = 0LL;
  v9 = sub_140AF9E94(qword_140C54AC0, 0LL, a2);
  if ( v9 )
  {
    if ( a5 )
      *a5 = v9;
    v10 = (char *)sub_1403BF3B8(v9, (unsigned int)v6, 1u, 0LL, 4u);
    v8 = v10;
    if ( v10 )
    {
      v11 = v6 << 12;
      if ( Src )
      {
        memmove(v10, Src, v11);
      }
      else
      {
        memset(v10, 0, v11);
        Src = v8;
      }
      if ( (_DWORD)v6 )
      {
        while ( (int)sub_140B4CCF8(qword_140C4ABF8, v9, (unsigned __int64)Src, 1, a4) >= 0 )
        {
          v9 += 4096LL;
          Src += 4096;
          LODWORD(v6) = v6 - 1;
          if ( !(_DWORD)v6 )
            return v8;
        }
        return 0LL;
      }
    }
  }
  return v8;
}
