/*
 * XREFs of sub_140954BA8 @ 0x140954BA8
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140A26BE8 @ 0x140A26BE8 (sub_140A26BE8.c)
 */

__int64 __fastcall sub_140954BA8(unsigned __int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  *a6 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v8 = sub_14078A1A8(a1, a2, a5, (__int64)&v13);
  if ( v8 >= 0 )
  {
    v9 = 2;
    if ( !sub_14078A600(2u) )
    {
      v10 = -1073741790;
LABEL_16:
      v8 = sub_14078A584(v10, v15, a3, a4, a6);
      goto LABEL_17;
    }
    if ( !(_QWORD)v14 || DWORD1(v13) || HIDWORD(v14) || !a3 || a4 < 8 )
    {
LABEL_15:
      v10 = -1073741811;
      goto LABEL_16;
    }
    if ( SDWORD2(v13) > 6 )
    {
      v11 = DWORD2(v13) - 65537;
      if ( DWORD2(v13) == 65537 )
      {
        v9 = 7;
      }
      else
      {
        v11 = DWORD2(v13) - 65538;
        if ( DWORD2(v13) == 65538 )
        {
          v9 = 8;
        }
        else
        {
          v11 = DWORD2(v13) - 65539;
          if ( DWORD2(v13) == 65539 )
          {
            v9 = 9;
          }
          else
          {
            v11 = DWORD2(v13) - 65540;
            if ( DWORD2(v13) == 65540 )
            {
              v9 = 10;
            }
            else
            {
              if ( DWORD2(v13) != 65541 )
                goto LABEL_15;
              v9 = 11;
            }
          }
        }
      }
      if ( !qword_140D00AC8 )
        goto LABEL_15;
    }
    else
    {
      if ( DWORD2(v13) == 6 || DWORD2(v13) == 1 )
        goto LABEL_19;
      v11 = DWORD2(v13) - 2;
      if ( DWORD2(v13) != 2 )
      {
        v11 = DWORD2(v13) - 3;
        if ( DWORD2(v13) != 3 )
        {
          if ( (unsigned int)(DWORD2(v13) - 4) >= 2 )
            goto LABEL_15;
LABEL_19:
          v10 = -1073741637;
          goto LABEL_16;
        }
        v9 = 4;
      }
    }
    v10 = sub_140A26BE8(v11, v14, v9, 0, 0LL);
    goto LABEL_16;
  }
LABEL_17:
  sub_1406BACAC((__int64)&v13);
  return (unsigned int)v8;
}
