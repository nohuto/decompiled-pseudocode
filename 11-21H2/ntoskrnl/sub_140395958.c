/*
 * XREFs of sub_140395958 @ 0x140395958
 * Callers:
 *     sub_1403905FC @ 0x1403905FC (sub_1403905FC.c)
 *     sub_1405F80DC @ 0x1405F80DC (sub_1405F80DC.c)
 * Callees:
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 */

__int64 __fastcall sub_140395958(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 **v5; // rbx
  unsigned __int8 v6; // r10
  _OWORD v8[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  sub_1402ED128(0);
  v5 = sub_1403126F0(a1);
  sub_1402806E0(0, v6);
  return sub_1402CE240(a1, (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v4, (__int64)v5, 0, v8);
}
