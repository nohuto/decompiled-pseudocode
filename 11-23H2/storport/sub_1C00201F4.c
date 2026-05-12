/*
 * XREFs of sub_1C00201F4 @ 0x1C00201F4
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C0063F90 @ 0x1C0063F90 (sub_1C0063F90.c)
 * Callees:
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 */

__int64 __fastcall sub_1C00201F4(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  unsigned int v6; // edi
  unsigned __int64 v7; // rsi
  int v8; // edx
  BOOL v9; // eax
  int v10; // r8d
  __int64 v12; // rcx

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v2 + 8);
  *(_BYTE *)(v2 + 3) |= 1u;
  *(_BYTE *)(v5 + 3) = 0;
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v7 = *(unsigned int *)(v5 + 20);
    v6 = *(_DWORD *)(v5 + 24);
  }
  else
  {
    v6 = *(_DWORD *)(v5 + 12);
    v7 = *(unsigned __int8 *)(v5 + 2);
  }
  if ( (qword_1C0093468 & 0x20) != 0 )
    sub_1C0019E4C(
      *(_QWORD *)(a1 + 24),
      3,
      a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
      0LL,
      0LL,
      0LL);
  v8 = (v6 >> 17) & 4 | 2;
  if ( (v6 & 0x10) == 0 )
    v8 = (v6 >> 17) & 4;
  v9 = 0;
  if ( (v6 & 0x102) != 0x102 && (v6 & 0x80010) == 0 )
  {
    if ( (unsigned int)v7 > 0x20 || (v12 = 0x1000D0000LL, !_bittest64(&v12, v7)) )
      v9 = 1;
  }
  v10 = v8 | 1;
  if ( !v9 )
    v10 = v8;
  sub_1C00052B0(a1, a2, v10);
  return 259LL;
}
