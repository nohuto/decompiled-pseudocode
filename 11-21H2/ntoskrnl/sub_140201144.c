/*
 * XREFs of sub_140201144 @ 0x140201144
 * Callers:
 *     sub_140200D20 @ 0x140200D20 (sub_140200D20.c)
 *     MmIsIoSpaceActive @ 0x140591DD0 (MmIsIoSpaceActive.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 * Callees:
 *     sub_140216544 @ 0x140216544 (sub_140216544.c)
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140201144(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  char v7; // al
  _QWORD *j; // r9
  unsigned __int64 i; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rax
  _WORD *v15; // rdx
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  char v23; // [rsp+20h] [rbp-48h]

  v3 = 0;
  v7 = sub_1402165BC(1LL);
  j = (_QWORD *)xmmword_140C53100;
  LOBYTE(i) = v7;
  v23 = v7;
  if ( (_QWORD)xmmword_140C53100 )
  {
    if ( (a3 & 1) != 0 )
    {
      v17 = -1LL;
      v18 = a1 + 8 * a2;
      v19 = 0LL;
      if ( a1 < v18 )
      {
        while ( 1 )
        {
          v20 = ((unsigned __int64)sub_140317A10(a1) >> 12) & 0xFFFFFFFFFFLL;
          if ( v20 <= qword_140C50840 && (i = 6 * v20, ((*(_QWORD *)(48 * v20 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0) )
          {
            if ( (a3 & 2) != 0 && *(_WORD *)(48 * v20 - 0x21FFFFFFFFE0LL) > 2u )
              goto LABEL_35;
          }
          else
          {
            v21 = v20 & 0xFFFFFFFE00LL;
            if ( v17 == -1LL || v17 != v21 )
            {
              if ( !v19 || *(_QWORD *)(v19 + 24) != v21 )
              {
                for ( i = xmmword_140C53100; ; i = *(_QWORD *)(i + 8) )
                {
                  while ( 1 )
                  {
                    if ( !i )
                    {
                      v17 = v20 & 0xFFFFFFFFFFFFFE00uLL;
                      goto LABEL_48;
                    }
                    v22 = *(_QWORD *)(i + 24);
                    if ( v20 >= v22 )
                      break;
                    i = *(_QWORD *)i;
                  }
                  if ( v20 < v22 + 512 )
                    break;
                }
                v19 = i;
              }
              if ( (*(_WORD *)(v19
                             + 2
                             * ((v20 & ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1)) - *(_QWORD *)(v19 + 24))
                             + 80) & 0x3FFF) != 0 )
              {
LABEL_35:
                v3 = 1;
                goto LABEL_36;
              }
            }
          }
LABEL_48:
          a1 += 8LL;
          if ( a1 >= v18 )
            goto LABEL_36;
        }
      }
    }
    else
    {
      v11 = a1 + a2 - 1;
      do
      {
        v12 = j[3];
        if ( v11 >= v12 )
        {
          if ( a1 < v12 + 512 )
            break;
          j = (_QWORD *)j[1];
        }
        else
        {
          j = (_QWORD *)*j;
        }
      }
      while ( j );
      if ( j )
      {
        do
        {
          v13 = j[3];
          if ( v11 < v13 )
            break;
          v14 = a1 - v13;
          if ( a1 < v13 )
            v14 = 0LL;
          v15 = (_WORD *)j + v14 + 40;
          if ( v11 + 1 > v13 + 512 )
            i = (unsigned __int64)(j + 138);
          else
            i = (unsigned __int64)j + 2 * (v11 - v13) + 82;
          if ( (unsigned __int64)v15 < i )
          {
            while ( (*v15 & 0x3FFF) == 0 )
            {
              if ( (unsigned __int64)++v15 >= i )
              {
                v11 = a1 + a2 - 1;
                goto LABEL_21;
              }
            }
            goto LABEL_35;
          }
LABEL_21:
          v16 = (unsigned __int64 *)j[1];
          i = (unsigned __int64)j;
          if ( v16 )
          {
            i = *v16;
            for ( j = (_QWORD *)j[1]; i; i = *(_QWORD *)i )
              j = (_QWORD *)i;
          }
          else
          {
            while ( 1 )
            {
              j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !j || *j == i )
                break;
              i = (unsigned __int64)j;
            }
          }
        }
        while ( j );
LABEL_36:
        LOBYTE(i) = v23;
      }
    }
  }
  sub_140216544(i, 1LL);
  return v3;
}
