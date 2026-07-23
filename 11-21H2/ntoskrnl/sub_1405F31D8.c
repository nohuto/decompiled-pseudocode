/*
 * XREFs of sub_1405F31D8 @ 0x1405F31D8
 * Callers:
 *     sub_1403A5774 @ 0x1403A5774 (sub_1403A5774.c)
 * Callees:
 *     sub_140353B40 @ 0x140353B40 (sub_140353B40.c)
 */

unsigned __int64 __fastcall sub_1405F31D8(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int16 v10; // ax

  v3 = *(unsigned __int8 *)(a2 + 31);
  v5 = a3;
  if ( v3 == a3 )
    return 0LL;
  v7 = v3 - a3;
  v8 = (unsigned __int8)v7;
  v9 = 32LL * (unsigned int)(v7 - 1);
  v6 = a2 + 32 * v5;
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(v9 + v6 + 31) = v8 - 1;
  *(_BYTE *)(v6 + 31) = v8;
  v10 = sub_140353B40(v9, v6, v8);
  *(_DWORD *)v6 = -857879331;
  *(_WORD *)(v6 + 28) = ~v10;
  *(_BYTE *)(32LL * (unsigned int)(v5 - 1) + a2 + 31) = v5 - 1;
  *(_BYTE *)(a2 + 31) = v5;
  *(_WORD *)(a2 + 28) = ~(*(_WORD *)(v6 + 28) - *(_WORD *)(a2 + 28));
  return v6;
}
