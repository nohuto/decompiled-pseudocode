/*
 * XREFs of sub_14076BBF4 @ 0x14076BBF4
 * Callers:
 *     sub_140765370 @ 0x140765370 (sub_140765370.c)
 *     sub_140767CF8 @ 0x140767CF8 (sub_140767CF8.c)
 *     sub_1407682A8 @ 0x1407682A8 (sub_1407682A8.c)
 *     sub_14076ACA8 @ 0x14076ACA8 (sub_14076ACA8.c)
 *     sub_14076BB84 @ 0x14076BB84 (sub_14076BB84.c)
 *     sub_1408442B0 @ 0x1408442B0 (sub_1408442B0.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     sub_140942E94 @ 0x140942E94 (sub_140942E94.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_14076BBF4(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL)) != 0 )
    return (__int64 *)(v1 + 32);
  else
    return &qword_140C46B30;
}
