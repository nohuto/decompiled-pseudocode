/*
 * XREFs of sub_1402867DC @ 0x1402867DC
 * Callers:
 *     sub_14027F03C @ 0x14027F03C (sub_14027F03C.c)
 *     sub_140283C50 @ 0x140283C50 (sub_140283C50.c)
 *     sub_140598054 @ 0x140598054 (sub_140598054.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_1407F0478 @ 0x1407F0478 (sub_1407F0478.c)
 * Callees:
 *     sub_140286920 @ 0x140286920 (sub_140286920.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_1402867DC(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rdx
  KIRQL v9; // r14
  __int64 v10; // rdi
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
  {
    v10 = sub_140286920(a2);
    v6 = sub_140286920(a3) + v10;
  }
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v8) = v9;
  result = sub_140287660(a1, v8);
  if ( v6 )
    return sub_1405C4B8C(v7, 1LL, v6);
  return result;
}
