/*
 * XREFs of sub_14054A610 @ 0x14054A610
 * Callers:
 *     sub_14054A5C0 @ 0x14054A5C0 (sub_14054A5C0.c)
 *     sub_14054A840 @ 0x14054A840 (sub_14054A840.c)
 * Callees:
 *     sub_14054ADAC @ 0x14054ADAC (sub_14054ADAC.c)
 *     sub_14054D214 @ 0x14054D214 (sub_14054D214.c)
 *     sub_14054D4B8 @ 0x14054D4B8 (sub_14054D4B8.c)
 *     sub_14054E34C @ 0x14054E34C (sub_14054E34C.c)
 *     sub_1405529A8 @ 0x1405529A8 (sub_1405529A8.c)
 */

__int64 __fastcall sub_14054A610(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rdx
  char v9; // bp
  _QWORD *v10; // r9
  char v11; // dl
  int v12; // ebx
  int v13; // ebx
  int v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v14 = a2;
  v15 = 0LL;
  v4 = a1 | 4;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_DWORD *)(a4 + 8) = 0;
  v6 = a1;
  result = sub_1405529A8(a1, a2, a3, a4);
  v9 = result;
  if ( *v10 )
  {
    if ( BYTE3(xmmword_140C48940) == v4 )
      goto LABEL_6;
    sub_14054D214(1LL, 0LL, 0LL);
    *(_QWORD *)a4 = 0LL;
  }
  xmmword_140C48940 = 0LL;
  xmmword_140C48950 = 0LL;
  xmmword_140C48960 = 0LL;
  result = sub_14054D4B8(1LL, v4, 0LL, 0LL, 0, &v15);
  if ( (int)result < 0 )
    return result;
  *((_QWORD *)&xmmword_140C48960 + 1) = v15;
  result = (__int64)&xmmword_140C48940;
  BYTE3(xmmword_140C48940) = v4;
  LOBYTE(xmmword_140C48940) = 1;
  *(_QWORD *)a4 = &xmmword_140C48940;
LABEL_6:
  if ( (_BYTE)xmmword_140C48940 )
  {
    if ( BYTE1(xmmword_140C48940) || (LOBYTE(v8) = 1, result = sub_14054ADAC(a4, v8), !(_BYTE)result) )
    {
      if ( BYTE2(xmmword_140C48940) || (result = sub_14054ADAC(a4, 0LL), !(_BYTE)result) )
      {
        if ( !v9 || v6 == 2 || v6 == 8 || (v6 == 1 || v6 == 16) && *(_DWORD *)(a4 + 12) == 395 )
        {
          while ( (_DWORD)xmmword_140C48960 )
          {
LABEL_22:
            *(_QWORD *)(a4 + 24) = (**((_QWORD **)&xmmword_140C48950 + 1) >> 40) + 1LL;
            result = 0xFFFFFFFFFFLL;
            *(_QWORD *)(a4 + 16) = **((_QWORD **)&xmmword_140C48950 + 1) & 0xFFFFFFFFFFLL;
            *((_QWORD *)&xmmword_140C48950 + 1) += 8LL;
            LODWORD(xmmword_140C48960) = xmmword_140C48960 - 1;
            if ( *(_QWORD *)(a4 + 24) )
            {
              *(_DWORD *)(a4 + 8) = -2147483646;
              v12 = v6 - 1;
              if ( v12 && ((v13 = v12 - 1) == 0 || v13 == 6) )
                *(_DWORD *)(a4 + 8) = -2147483614;
              else
                *(_DWORD *)(a4 + 8) = -2147483630;
              return result;
            }
          }
          while ( 1 )
          {
            LOBYTE(v14) = 0;
            if ( (int)sub_14054E34C(0LL, 0LL, 0LL, &v14) < 0 )
              break;
            LODWORD(xmmword_140C48960) = *(unsigned __int16 *)(*((_QWORD *)&xmmword_140C48960 + 1) + 8LL);
            *((_QWORD *)&xmmword_140C48950 + 1) = *((_QWORD *)&xmmword_140C48960 + 1) + 16LL;
            if ( (_DWORD)xmmword_140C48960 )
              goto LABEL_22;
          }
        }
        result = sub_14054D214(1LL, 0LL, 0LL);
        LOBYTE(xmmword_140C48940) = 0;
      }
      else
      {
        BYTE2(xmmword_140C48940) = 1;
      }
    }
    else
    {
      BYTE1(xmmword_140C48940) = v11;
    }
  }
  return result;
}
