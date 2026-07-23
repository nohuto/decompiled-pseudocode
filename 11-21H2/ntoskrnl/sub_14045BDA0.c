/*
 * XREFs of sub_14045BDA0 @ 0x14045BDA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140227020 @ 0x140227020 (sub_140227020.c)
 *     sub_140274D80 @ 0x140274D80 (sub_140274D80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14045BBAE @ 0x14045BBAE (sub_14045BBAE.c)
 *     sub_14045BF06 @ 0x14045BF06 (sub_14045BF06.c)
 *     sub_14045BF60 @ 0x14045BF60 (sub_14045BF60.c)
 */

__int64 __fastcall sub_14045BDA0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned int *v9; // rcx
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 >= 1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 24);
  v11 = sub_140317A10(a2);
  v6 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v11) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( !(unsigned int)sub_140227020(v5, a2, v6, 1, &v11) || sub_140274D80(v7, (__int64)(a2 << 25) >> 16) != 6 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 168);
  if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && ((*(_DWORD *)v8 & 1) == 0 || *(__int64 *)(v6 + 40) >= 0) )
  {
    if ( (v11 & 0x20) != 0 )
    {
      v9 = *(unsigned int **)(v8 + 208);
      if ( v9
        && (unsigned __int64)((__int64)(a2 << 25) >> 16) <= 0x7FFFFFFEFFFFLL
        && (unsigned int)sub_14045BBAE(v9, (__int64)(a2 << 25) >> 16) )
      {
        return sub_14045BF60(a1);
      }
    }
    else
    {
      sub_14045BF06(v5, a2, v6, *(_QWORD *)(a1 + 168));
    }
  }
  if ( ++*(_QWORD *)(v8 + 16) >= *(_QWORD *)(v8 + 8) )
    return 4LL;
  else
    return 0LL;
}
