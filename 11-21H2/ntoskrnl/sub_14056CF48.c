/*
 * XREFs of sub_14056CF48 @ 0x14056CF48
 * Callers:
 *     sub_14022F3E8 @ 0x14022F3E8 (sub_14022F3E8.c)
 *     sub_140291710 @ 0x140291710 (sub_140291710.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_140307660 @ 0x140307660 (sub_140307660.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     sub_14038BFAC @ 0x14038BFAC (sub_14038BFAC.c)
 *     sub_14045ABA8 @ 0x14045ABA8 (sub_14045ABA8.c)
 *     sub_14056C984 @ 0x14056C984 (sub_14056C984.c)
 *     sub_14056CFD8 @ 0x14056CFD8 (sub_14056CFD8.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 */

char __fastcall sub_14056CF48(__int64 a1, __int64 a2, int a3, int a4, char a5, char a6)
{
  __int64 v7; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  char result; // al
  bool v13; // zf
  LARGE_INTEGER v14; // [rsp+30h] [rbp+8h] BYREF

  v7 = 2LL * a4;
  v10 = KeQueryInterruptTimePrecise(&v14) - a2;
  *(_DWORD *)(a1 + 8 * v7 + 37024) = a3;
  LOBYTE(v11) = 1;
  if ( a2 > 0 )
    v10 = a2;
  *(_QWORD *)(a1 + 8 * v7 + 37016) = v10;
  result = *(_BYTE *)(a1 + 8 * v7 + 37028) ^ (*(_BYTE *)(a1 + 8 * v7 + 37028) ^ (2 * a5)) & 2 | 1;
  v13 = a6 == 0;
  *(_BYTE *)(a1 + 8 * v7 + 37028) = result;
  if ( !v13 )
    return sub_14056D050(v11);
  return result;
}
