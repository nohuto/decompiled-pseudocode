/*
 * XREFs of sub_180015484 @ 0x180015484
 * Callers:
 *     sub_1800157A4 @ 0x1800157A4 (sub_1800157A4.c)
 *     sub_180015960 @ 0x180015960 (sub_180015960.c)
 * Callees:
 *     sub_18000DA14 @ 0x18000DA14 (sub_18000DA14.c)
 *     sub_180010B38 @ 0x180010B38 (sub_180010B38.c)
 *     sub_180015548 @ 0x180015548 (sub_180015548.c)
 */

signed __int32 *__fastcall sub_180015484(volatile signed __int32 *a1, signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  __int64 v6; // rcx
  signed __int32 i; // edx
  bool v8; // zf
  signed __int32 v9; // ecx
  signed __int32 v10; // eax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = sub_18000DA14();
    sub_180015548(v6, &v13, &v12);
    for ( i = *a2; ; i = v10 )
    {
      v8 = v12 == 0;
      v9 = i;
      *a2 = i;
      if ( !v8 && (i & 2) == 0 )
      {
        v9 = i ^ ((unsigned __int16)v13 ^ (unsigned __int16)i) & 0x9C1 | 2;
        *a2 = v9;
      }
      if ( (i & 4) == 0 )
      {
        v9 = ((unsigned __int16)v13 ^ (unsigned __int16)v9) & 0x400 ^ v9 | 4;
        *a2 = v9;
      }
      v10 = _InterlockedCompareExchange(a1, v9, i);
      if ( i == v10 )
        break;
    }
    if ( (i & 4) == 0 )
      sub_180010B38(a1, 3, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
