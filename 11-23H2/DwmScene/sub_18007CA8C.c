/*
 * XREFs of sub_18007CA8C @ 0x18007CA8C
 * Callers:
 *     sub_18007D310 @ 0x18007D310 (sub_18007D310.c)
 *     sub_18007FC10 @ 0x18007FC10 (sub_18007FC10.c)
 * Callees:
 *     sub_18007C94C @ 0x18007C94C (sub_18007C94C.c)
 *     unknown_libname_9 @ 0x18007E83C (unknown_libname_9.c)
 */

__int64 *__fastcall sub_18007CA8C(__int64 *a1, __int64 a2, __int64 a3)
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
  v4 = unknown_libname_9(a2);
  sub_18007C94C(a1, v4, &v6, &v7);
  return a1;
}
