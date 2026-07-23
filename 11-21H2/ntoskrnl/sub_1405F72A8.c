/*
 * XREFs of sub_1405F72A8 @ 0x1405F72A8
 * Callers:
 *     sub_1403792A8 @ 0x1403792A8 (sub_1403792A8.c)
 * Callees:
 *     sub_14037DA00 @ 0x14037DA00 (sub_14037DA00.c)
 */

__int64 __fastcall sub_1405F72A8(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = *(_QWORD *)(a1 + 6216);
  v6 = a2;
  v7 = a3;
  v8 = *(_QWORD *)(v5 + 8LL * a2);
  v9 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v8 & 3) != 0 )
  {
    v10 = *(_QWORD *)(v9 + 24);
  }
  else
  {
    v10 = sub_14037DA00((PEX_SPIN_LOCK)(a1 + 6608), 5, (__int64)KeGetCurrentThread(), v9, a5 & 1);
    if ( !v10 )
      return v10;
  }
  *(_QWORD *)(v5 + 8 * v6) |= ((a5 & 0x10) != 0) + 1LL;
  v10 += v7;
  return v10;
}
