/*
 * XREFs of sub_1402875B0 @ 0x1402875B0
 * Callers:
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_140286920 @ 0x140286920 (sub_140286920.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1405C4B8C @ 0x1405C4B8C (sub_1405C4B8C.c)
 */

__int64 __fastcall sub_1402875B0(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  BOOL v8; // ebp
  __int64 v9; // rdx
  KIRQL v10; // r15
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  v8 = *(_QWORD *)(a1 + 64) != 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( a2 )
    v4 = sub_140286920(a2, a3, 8);
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  if ( v4 )
    v5 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  LOBYTE(v9) = v10;
  result = sub_140287660(a1, v9);
  if ( v4 )
    return sub_1405C4B8C(v5, v8, v4);
  return result;
}
