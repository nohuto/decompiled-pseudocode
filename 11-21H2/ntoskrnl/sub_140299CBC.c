/*
 * XREFs of sub_140299CBC @ 0x140299CBC
 * Callers:
 *     sub_140299A64 @ 0x140299A64 (sub_140299A64.c)
 * Callees:
 *     sub_140299BF0 @ 0x140299BF0 (sub_140299BF0.c)
 */

__int64 __fastcall sub_140299CBC(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  unsigned __int8 v4; // dl
  int v5; // ecx
  char v6; // cl
  __int64 result; // rax
  char v8; // cl
  char v9; // cl

  v1 = qword_140001700;
  if ( *(_BYTE *)(a1 + 57) )
  {
    v3 = &qword_140001AF8;
    v1 = qword_1400018A0;
    goto LABEL_4;
  }
  v3 = &qword_140001898;
  while ( 1 )
  {
    v4 = *(_BYTE *)(a1 + 56);
    if ( v4 >= *(_BYTE *)v1 && v4 <= (unsigned __int8)(*(_BYTE *)v1 + *((_BYTE *)v1 + 1) - 1) )
    {
      v5 = *((_DWORD *)v1 + 1);
      if ( !v5 || (v5 & *(_DWORD *)(a1 + 48)) != 0 )
      {
        v6 = *((_BYTE *)v1 + 8);
        if ( v6 != -1 || *((_BYTE *)v1 + 9) != 0xFF || *((_BYTE *)v1 + 10) != 0xFF )
        {
          if ( !*(_BYTE *)(a1 + 80) )
          {
            result = sub_140299BF0(a1, (_BYTE *)(a1 + 65));
            if ( (int)result < 0 )
              return result;
            *(_BYTE *)(a1 + 80) = 1;
            v6 = *((_BYTE *)v1 + 8);
          }
          if ( v6 != -1 && v6 != ((*(_BYTE *)(a1 + 65) >> 3) & 7) )
            goto LABEL_7;
          v8 = *((_BYTE *)v1 + 10);
          if ( v8 != -1 && v8 != (*(_BYTE *)(a1 + 65) & 7) )
            goto LABEL_7;
          v9 = *((_BYTE *)v1 + 9);
          if ( v9 != -1 )
          {
            if ( (*(_BYTE *)(a1 + 65) & 0xC0) == 0xC0 )
            {
              if ( v9 != 3 )
                goto LABEL_7;
            }
            else if ( v9 == 3 )
            {
              goto LABEL_7;
            }
          }
        }
        if ( (*((_DWORD *)v1 + 3) & 0xF4000000) == 0 || (*((_DWORD *)v1 + 3) & 0xF4000000 & *(_DWORD *)(a1 + 60)) != 0 )
          break;
      }
    }
LABEL_7:
    v1 += 3;
LABEL_4:
    if ( v1 == v3 )
      return 0LL;
  }
  *(_QWORD *)(a1 + 88) = v1;
  return 0LL;
}
