/*
 * XREFs of sub_14085D8F8 @ 0x14085D8F8
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x14022E1F0 (ExInitializeAutoExpandPushLock.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14036C730 @ 0x14036C730 (sub_14036C730.c)
 *     sub_14036DA68 @ 0x14036DA68 (sub_14036DA68.c)
 *     sub_1403DA8E4 @ 0x1403DA8E4 (sub_1403DA8E4.c)
 *     sub_1407F1A10 @ 0x1407F1A10 (sub_1407F1A10.c)
 */

__int64 __fastcall sub_14085D8F8(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 result; // rax

  v2 = sub_1402828F0(64, 0x260uLL, 0x3250694Du);
  v3 = (__int64)v2;
  if ( !v2 )
    return 3221225626LL;
  ExInitializeAutoExpandPushLock(v2 + 49, 1);
  v4 = (_QWORD *)*((_QWORD *)KeGetCurrentThread() + 23);
  v5 = v4[5];
  *(_DWORD *)(a1 + 2512) |= 0x20u;
  *(_QWORD *)(a1 + 1224) = 0LL;
  *(_QWORD *)(a1 + 1232) = 0LL;
  *(_QWORD *)(a1 + 2352) = 0LL;
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 2368) = a1 + 2360;
  *(_QWORD *)(a1 + 2360) = a1 + 2360;
  result = sub_1407F1A10(a1, 0);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 2008) = 0LL;
    *(_QWORD *)(a1 + 1496) = v4[187];
    sub_1403DA8E4((_QWORD *)(a1 + 1664), v4 + 208, v3);
    *(_QWORD *)(a1 + 1272) = v4[159];
    *(_DWORD *)(a1 + 2876) = 1;
    sub_14036C730((_QWORD *)a1, 0LL);
    sub_14036DA68(a1 + 1664);
    return 0LL;
  }
  return result;
}
