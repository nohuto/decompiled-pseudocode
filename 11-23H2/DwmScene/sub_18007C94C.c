/*
 * XREFs of sub_18007C94C @ 0x18007C94C
 * Callers:
 *     sub_18007CA8C @ 0x18007CA8C (sub_18007CA8C.c)
 * Callees:
 *     sub_18007C9C8 @ 0x18007C9C8 (sub_18007C9C8.c)
 *     sub_18007CBF4 @ 0x18007CBF4 (sub_18007CBF4.c)
 *     sub_18007E55C @ 0x18007E55C (sub_18007E55C.c)
 */

__int64 __fastcall sub_18007C94C(__int64 *a1, __int64 a2, void **a3, __int64 *a4)
{
  __int64 v7; // rsi
  void *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    sub_18007E55C();
    v7 = *a1;
    v8 = *a3;
    v9 = *a4;
    sub_18007C9C8(v8);
    v11 = 0LL;
    a1[1] = v7 + 8 * ((v9 - (__int64)v8) >> 3);
    return sub_18007CBF4(&v11);
  }
  return result;
}
