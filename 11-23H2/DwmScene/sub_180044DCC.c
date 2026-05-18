/*
 * XREFs of sub_180044DCC @ 0x180044DCC
 * Callers:
 *     sub_180044EAC @ 0x180044EAC (sub_180044EAC.c)
 *     sub_180044F5C @ 0x180044F5C (sub_180044F5C.c)
 *     sub_180045120 @ 0x180045120 (sub_180045120.c)
 *     sub_180082DD0 @ 0x180082DD0 (sub_180082DD0.c)
 * Callees:
 *     sub_180044CE4 @ 0x180044CE4 (sub_180044CE4.c)
 *     sub_180047200 @ 0x180047200 (sub_180047200.c)
 */

__int64 *__fastcall sub_180044DCC(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = *(_QWORD *)(a2 + 8);
  v6 = *(void **)a2;
  v4 = sub_180047200(a2);
  sub_180044CE4(a1, v4, &v6, &v7);
  return a1;
}
