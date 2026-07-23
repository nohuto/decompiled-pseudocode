/*
 * XREFs of sub_1409554B0 @ 0x1409554B0
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140A26E60 @ 0x140A26E60 (sub_140A26E60.c)
 */

__int64 __fastcall sub_1409554B0(unsigned __int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  PVOID **v9; // rdi
  int v10; // ebx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v14; // rcx
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-10h]

  v6 = a6;
  v17 = 0LL;
  *a6 = 0;
  v9 = 0LL;
  v15 = 0LL;
  a6 = 0LL;
  v16 = 0LL;
  v10 = sub_14078A1A8(a1, a2, a5, (__int64)&v15);
  if ( v10 >= 0 )
  {
    v11 = 2;
    if ( !sub_14078A600(2u) )
    {
      v12 = -1073741790;
LABEL_16:
      v10 = sub_14078A584(v12, v17, a3, a4, v6);
      goto LABEL_17;
    }
    if ( !(_QWORD)v16 || DWORD1(v15) || HIDWORD(v16) || !a3 || a4 < 8 )
    {
LABEL_15:
      v12 = -1073741811;
      goto LABEL_16;
    }
    if ( SDWORD2(v15) > 6 )
    {
      switch ( DWORD2(v15) )
      {
        case 0x10001:
          v11 = 7;
          break;
        case 0x10002:
          v11 = 8;
          break;
        case 0x10003:
          v11 = 9;
          break;
        case 0x10004:
          v11 = 10;
          break;
        case 0x10005:
          v11 = 11;
          break;
        default:
          goto LABEL_15;
      }
      if ( !qword_140D00AC8 )
        goto LABEL_15;
    }
    else
    {
      if ( DWORD2(v15) == 6 || DWORD2(v15) == 1 )
        goto LABEL_21;
      if ( DWORD2(v15) != 2 )
      {
        if ( DWORD2(v15) != 3 )
        {
          if ( (unsigned int)(DWORD2(v15) - 4) >= 2 )
            goto LABEL_15;
LABEL_21:
          v12 = -1073741637;
          goto LABEL_16;
        }
        v11 = 4;
      }
    }
    v12 = sub_140779DC4((__int64 **)&a6);
    if ( v12 >= 0 )
      v12 = sub_140A26E60(v14, v16, v11);
    v9 = (PVOID **)a6;
    goto LABEL_16;
  }
LABEL_17:
  sub_1406BACAC((__int64)&v15);
  if ( v9 )
    sub_140779A50(v9);
  return (unsigned int)v10;
}
