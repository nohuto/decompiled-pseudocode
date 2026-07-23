/*
 * XREFs of sub_1403737D0 @ 0x1403737D0
 * Callers:
 *     sub_1403731C0 @ 0x1403731C0 (sub_1403731C0.c)
 * Callees:
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 *     sub_140373880 @ 0x140373880 (sub_140373880.c)
 *     sub_14045BBD4 @ 0x14045BBD4 (sub_14045BBD4.c)
 *     sub_14045BCA2 @ 0x14045BCA2 (sub_14045BCA2.c)
 *     sub_140597478 @ 0x140597478 (sub_140597478.c)
 */

__int64 __fastcall sub_1403737D0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  _DWORD *v5; // rdx
  int v6; // r11d
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 168);
  v4 = *(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v1 + 174));
  while ( 1 )
  {
    sub_140373880(a1, v3);
    if ( (*(_DWORD *)v3 & 0x800) != 0 )
    {
      v8 = *(_QWORD *)(v3 + 16) - *(_QWORD *)(v3 + 32);
      *(_QWORD *)(v1 + 8) += v8;
      *(_QWORD *)(v3 + 32) = *(_QWORD *)(v3 + 16);
      *(_QWORD *)(v4[2075] + 8LL * (*(_DWORD *)v3 & 0xF) + 2584) += v8;
    }
    v5 = *(_DWORD **)(v3 + 248);
    if ( !v5 || !*v5 || !(unsigned int)sub_14045BCA2(a1, v5, 0LL) )
      break;
    sub_14045BBD4(a1, *(_QWORD *)(v3 + 248), sub_140597390, v3);
  }
  if ( (*(_DWORD *)v3 & 0x8000) != 0 && (unsigned int)sub_140597478(v1, v3) )
    return 5LL;
  v6 = 0x20000;
  if ( (*(_DWORD *)v3 & 0xF) != 0
    && *(_QWORD *)(v3 + 16) < *(_QWORD *)(v3 + 8)
    && *(_QWORD *)(v3 + 40) >= 0x20000uLL
    && *(_QWORD *)(v1 + 144) >> 3 >= *(_QWORD *)(v3 + 40)
    && (unsigned __int64)sub_140266B40(v4, 6u) <= 0x120 )
  {
    v9 = *(_DWORD *)v3 & 0xFFFFFF00 | (16 * (*(_DWORD *)v3 & 0xF | 0x2000));
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 16);
    *(_DWORD *)v3 = v9;
  }
  else if ( (*(_DWORD *)v3 & v6) != 0 )
  {
    v10 = *(_QWORD *)(v3 + 16);
    if ( v10 >= *(_QWORD *)(v3 + 8) || v10 >= *(_QWORD *)(v3 + 24) + 576LL )
      *(_DWORD *)v3 = *(_DWORD *)v3 & 0xFFFDFFF0 | ((unsigned __int8)*(_DWORD *)v3 >> 4);
  }
  return 0LL;
}
