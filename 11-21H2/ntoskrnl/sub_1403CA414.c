/*
 * XREFs of sub_1403CA414 @ 0x1403CA414
 * Callers:
 *     sub_140B1A054 @ 0x140B1A054 (sub_140B1A054.c)
 * Callees:
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

__int64 __fastcall sub_1403CA414(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r14
  unsigned __int64 i; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned int v9; // edx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a1 + 8 * a2;
  for ( i = a1; i < v4; i += 8LL )
  {
    v11 = sub_140317A10(i);
    v7 = v11;
    v8 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( sub_140277C50(v8) )
      ++v3;
    if ( a3 && (dword_140D06880 & 0x4000) != 0 )
    {
      *(_QWORD *)(v8 + 16) ^= (*(_DWORD *)(v8 + 16) ^ (32 * (((v7 >> 63) & 0xFFFFFFFE) + 3))) & 0x3E0;
    }
    else
    {
      if ( v7 >= 0 )
      {
        v9 = ((unsigned int)dword_140D06880 >> 15) & 1;
        *(_QWORD *)(v8 + 16) = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                             + 192);
        if ( v9 )
        {
          if ( ((*(_QWORD *)(v8 + 40) >> 60) & 7) != 3 )
            sub_14026C644(v8, 0);
        }
      }
      *(_BYTE *)(v8 + 35) |= 8u;
    }
  }
  return v3;
}
