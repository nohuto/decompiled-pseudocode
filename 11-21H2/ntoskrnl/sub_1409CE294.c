/*
 * XREFs of sub_1409CE294 @ 0x1409CE294
 * Callers:
 *     sub_1409CD880 @ 0x1409CD880 (sub_1409CD880.c)
 *     sub_1409CE134 @ 0x1409CE134 (sub_1409CE134.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_1409CE090 @ 0x1409CE090 (sub_1409CE090.c)
 */

__int64 __fastcall sub_1409CE294(__int64 a1, _BYTE *a2, unsigned int a3)
{
  _WORD *v4; // rcx
  unsigned int v5; // ebx
  __int16 v6; // r9
  int v7; // eax
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_WORD *)(qword_140D04980 + *(unsigned int *)(a1 + 8));
  v5 = 0;
  v6 = *v4 & 0x1F;
  if ( v6 != 8 )
  {
    v7 = (*(_BYTE *)(a1 + 7) & 0xF) - 2;
    if ( v7 )
    {
      v8 = v7 - 3;
      if ( v8 )
      {
        if ( v8 != 1 )
          return v5;
        if ( v6 != 1 || a3 - 1 > 1 )
          return (unsigned int)-1069350910;
        v9 = (v4[1] != 0) == (*a2 != 0);
      }
      else
      {
        if ( a3 != 8 )
          return (unsigned int)-1069350910;
        v10 = *(_QWORD *)a2;
        v12 = *(_QWORD *)a2;
        v5 = sub_1409CE090((__int64)v4, &v12);
        if ( (v5 & 0x80000000) != 0 )
          return v5;
        v9 = v10 == v12;
      }
    }
    else
    {
      if ( v6 || (a3 & 1) != 0 )
        return (unsigned int)-1069350910;
      for ( ; a3; a3 -= 2 )
      {
        if ( *(_WORD *)&a2[2 * ((unsigned __int64)a3 >> 1) - 2] )
          break;
      }
      if ( a3 != (unsigned __int16)v4[1] )
        return (unsigned int)-1069350910;
      v9 = memcmp(a2, v4 + 2, a3) == 0;
    }
    if ( v9 )
      return v5;
    return (unsigned int)-1069350910;
  }
  return v4[1] == 0 ? 0xC0430002 : 0;
}
