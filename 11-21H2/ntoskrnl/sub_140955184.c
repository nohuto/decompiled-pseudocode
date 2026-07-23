/*
 * XREFs of sub_140955184 @ 0x140955184
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140A238FC @ 0x140A238FC (sub_140A238FC.c)
 */

__int64 __fastcall sub_140955184(unsigned __int64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v8; // ebx
  int v9; // r9d
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+40h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-18h]

  *a6 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v8 = sub_14078A1A8(a1, a2, a5, (__int64)&v12);
  if ( v8 >= 0 )
  {
    if ( sub_14078A600(2u) )
    {
      if ( (_QWORD)v13 && *(_QWORD *)((char *)&v12 + 4) == 0x400000000LL && !HIDWORD(v13) && a3 && a4 >= 8 )
        v10 = sub_140A238FC(qword_140D00AC0, v13, 50, v9, 1);
      else
        v10 = -1073741811;
    }
    else
    {
      v10 = -1073741790;
    }
    v8 = sub_14078A584(v10, v14, a3, a4, a6);
  }
  sub_1406BACAC((__int64)&v12);
  return (unsigned int)v8;
}
