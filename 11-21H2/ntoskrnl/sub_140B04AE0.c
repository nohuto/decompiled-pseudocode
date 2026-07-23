/*
 * XREFs of sub_140B04AE0 @ 0x140B04AE0
 * Callers:
 *     sub_14082BC44 @ 0x14082BC44 (sub_14082BC44.c)
 *     sub_140B04910 @ 0x140B04910 (sub_140B04910.c)
 *     sub_140B06A84 @ 0x140B06A84 (sub_140B06A84.c)
 * Callees:
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14082B1B4 @ 0x14082B1B4 (sub_14082B1B4.c)
 */

__int64 __fastcall sub_140B04AE0(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 v11; // r10
  ULONG_PTR v14; // rax
  int v15; // eax
  __int64 result; // rax

  LODWORD(v7) = 0;
  v8 = 0LL;
  v9 = a6 >> 12;
  v11 = a3;
  if ( !a3 )
  {
    v7 = ((((v9 + a7 - 1LL) / a7 + 7) >> 3) + 4095) >> 12;
    v14 = sub_1403095B0((__int64)&qword_140C534C0, v7);
    v8 = (_QWORD *)v14;
    if ( !v14 )
      return 0LL;
    v11 = (__int64)(v14 << 25) >> 16;
  }
  if ( !(unsigned int)sub_14082B1B4((_QWORD *)a1, v11, v9 / a7, a4) )
  {
    if ( v8 )
      sub_1402BB6D0((__int64)&qword_140C534C0, v8, v7);
    return 0LL;
  }
  *(_DWORD *)(a1 + 24) = 0;
  v15 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 28) = a2;
  if ( a7 == 16 )
    v15 = 2;
  *(_DWORD *)(a1 + 24) = v15;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)a1 = 0LL;
  result = 1LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 16) = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
