/*
 * XREFs of sub_1405AB9F0 @ 0x1405AB9F0
 * Callers:
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_14097DFA0 @ 0x14097DFA0 (sub_14097DFA0.c)
 *     sub_14097E270 @ 0x14097E270 (sub_14097E270.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x14029EDB0 (ExAcquireAutoExpandPushLockShared.c)
 *     sub_1405AC910 @ 0x1405AC910 (sub_1405AC910.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 */

ULONG_PTR __fastcall sub_1405AB9F0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  ULONG_PTR result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v1 + 1680);
  while ( 1 )
  {
    --*(_WORD *)(a1 + 486);
    result = ExAcquireAutoExpandPushLockShared(v3 + 392, 0LL);
    if ( !*(_QWORD *)(v1 + 1248) )
      break;
    sub_1405AC910(a1, result);
    sub_1405BCAF8(v1 + 1664, 3221226548LL);
  }
  return result;
}
