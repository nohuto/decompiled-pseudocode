/*
 * XREFs of sub_1406F367C @ 0x1406F367C
 * Callers:
 *     sub_1406F3408 @ 0x1406F3408 (sub_1406F3408.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140424FF0 @ 0x140424FF0 (sub_140424FF0.c)
 *     sub_1406F3800 @ 0x1406F3800 (sub_1406F3800.c)
 *     sub_1407BF2E0 @ 0x1407BF2E0 (sub_1407BF2E0.c)
 */

__int64 __fastcall sub_1406F367C(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  ULONG_PTR v7; // rbx

  v4 = *(_QWORD *)(a2 + 96);
  if ( !*(_QWORD *)(v4 + 32) || !(unsigned int)sub_1406F3800(v4, a3, 1LL) )
    return -1LL;
  result = (__int64)sub_1402828F0(256, 0x1000uLL, 0x68496D4Du);
  v7 = result;
  if ( result )
  {
    sub_140424FF0(result, a1);
    sub_1407BF2E0(v7, a2, 0LL, 41);
    return v7;
  }
  return result;
}
