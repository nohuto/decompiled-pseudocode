/*
 * XREFs of sub_14074C534 @ 0x14074C534
 * Callers:
 *     sub_1406E397C @ 0x1406E397C (sub_1406E397C.c)
 *     sub_14074B420 @ 0x14074B420 (sub_14074B420.c)
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 *     sub_14078C2F8 @ 0x14078C2F8 (sub_14078C2F8.c)
 *     sub_14080DBCC @ 0x14080DBCC (sub_14080DBCC.c)
 * Callees:
 *     sub_1402D2F74 @ 0x1402D2F74 (sub_1402D2F74.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14074C534(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  _DWORD v10[20]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x48uLL);
  LOWORD(v10[0]) = 1819;
  v10[2] = a2;
  return sub_1402D2F74(a1, (__int64)v10, v8, a3, a4);
}
