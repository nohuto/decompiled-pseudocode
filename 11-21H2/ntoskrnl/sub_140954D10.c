/*
 * XREFs of sub_140954D10 @ 0x140954D10
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140A24C40 @ 0x140A24C40 (sub_140A24C40.c)
 *     sub_140A24FF8 @ 0x140A24FF8 (sub_140A24FF8.c)
 */

__int64 __fastcall sub_140954D10(unsigned __int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, PVOID **P)
{
  PVOID **v6; // r15
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edi
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v6 = P;
  P = 0LL;
  v16 = 0LL;
  *(_DWORD *)v6 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v9 = sub_14078A1A8(a1, a2, a5, (__int64)&v14);
  if ( v9 >= 0 )
  {
    if ( sub_14078A600(2u) )
    {
      v11 = v15;
      if ( (_QWORD)v15
        && !HIDWORD(v15)
        && a3
        && a4 >= 8
        && (v12 = DWORD2(v14), (unsigned int)(DWORD2(v14) - 2) <= 1)
        && (unsigned int)(DWORD1(v14) - 1) <= 1 )
      {
        v10 = sub_140779DC4((__int64 **)&P);
        if ( v10 >= 0 )
        {
          if ( v12 == 3 )
            v10 = sub_140A24FF8(*(_QWORD *)&qword_140D00AC0, v11, 0LL);
          else
            v10 = sub_140A24C40(*(_QWORD *)&qword_140D00AC0, v11, 0LL);
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
    v9 = sub_14078A584(v10, v16, a3, a4, v6);
  }
  sub_1406BACAC((__int64)&v14);
  if ( P )
    sub_140779A50(P);
  return (unsigned int)v9;
}
