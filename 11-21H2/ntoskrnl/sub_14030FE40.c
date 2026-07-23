/*
 * XREFs of sub_14030FE40 @ 0x14030FE40
 * Callers:
 *     sub_140200AEC @ 0x140200AEC (sub_140200AEC.c)
 *     sub_140216EE8 @ 0x140216EE8 (sub_140216EE8.c)
 *     sub_1406E2C14 @ 0x1406E2C14 (sub_1406E2C14.c)
 *     sub_1407BC0B0 @ 0x1407BC0B0 (sub_1407BC0B0.c)
 * Callees:
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 */

signed __int64 __fastcall sub_14030FE40(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // r9d
  __int64 v6; // rdi
  signed __int64 result; // rax
  int v8; // [rsp+30h] [rbp-18h]

  v8 = a4 | 0x80;
  v5 = a2;
  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  LOBYTE(a2) = 17;
  sub_140330080(v6 + 1664, a2, a1, v5, a3, 0, v8, a5);
  result = *(_QWORD *)(a5 + 32);
  if ( result )
    return _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1272), -result);
  return result;
}
