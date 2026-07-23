/*
 * XREFs of sub_1405111C0 @ 0x1405111C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140514A70 @ 0x140514A70 (sub_140514A70.c)
 */

__int64 __fastcall sub_1405111C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  sub_140514A70(*(_QWORD *)(a1 + 504), a5, a6, a7, a8, (__int64)&v9);
  return v9;
}
