/*
 * XREFs of sub_14058E8F4 @ 0x14058E8F4
 * Callers:
 *     sub_140593388 @ 0x140593388 (sub_140593388.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_14058E8F4(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  _QWORD *j; // rbx
  __int64 v5; // rdx
  _QWORD **v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  unsigned int *v9; // rbx
  unsigned int v10; // edx
  unsigned int i; // edi
  __int64 v12; // r14
  __int64 v13; // r15
  char *v14; // rsi

  if ( qword_140C51E88 )
  {
    v2 = 0LL;
    if ( qword_140C51E98 )
    {
      v9 = (unsigned int *)qword_140D06950;
      if ( qword_140D06950 )
      {
        v10 = *(_DWORD *)qword_140D06950;
        for ( i = 0; i < v10; ++i )
        {
          v12 = *(_QWORD *)&v9[4 * i + 4];
          v13 = *(_QWORD *)&v9[4 * i + 6];
          if ( v13 )
          {
            v14 = (char *)(48 * v12 - 0x21FFFFFFFFDDLL);
            while ( 1 )
            {
              if ( (*v14 & 0x40) != 0 )
              {
                if ( *v14 < 0 )
                  sub_14042A5E0(a1, v12);
                if ( ++v2 == qword_140C51E88 )
                  break;
              }
              ++v12;
              v14 += 48;
              if ( !--v13 )
              {
                v10 = *v9;
                goto LABEL_28;
              }
            }
            v10 = *v9;
            i = *v9 - 1;
          }
LABEL_28:
          ;
        }
      }
    }
    else
    {
      v3 = (_QWORD *)qword_140C51E80;
      j = 0LL;
      while ( v3 )
      {
        j = v3;
        v3 = (_QWORD *)*v3;
      }
      while ( j )
      {
        v5 = j[3];
        if ( *(char *)(v5 + 35) < 0 )
          sub_14042A5E0(a1, 0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4));
        v6 = (_QWORD **)j[1];
        v7 = j;
        if ( v6 )
        {
          v8 = *v6;
          for ( j = (_QWORD *)j[1]; v8; v8 = (_QWORD *)*v8 )
            j = v8;
        }
        else
        {
          while ( 1 )
          {
            j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !j || (_QWORD *)*j == v7 )
              break;
            v7 = j;
          }
        }
      }
    }
  }
}
