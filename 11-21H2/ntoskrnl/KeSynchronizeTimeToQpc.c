/*
 * XREFs of KeSynchronizeTimeToQpc @ 0x1403917D0
 * Callers:
 *     sub_140A5072C @ 0x140A5072C (sub_140A5072C.c)
 * Callees:
 *     sub_14020F07C @ 0x14020F07C (sub_14020F07C.c)
 */

__int64 __fastcall KeSynchronizeTimeToQpc(LARGE_INTEGER a1)
{
  LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = 0LL;
  return sub_14020F07C(&v2, 1, (__int64)&v3, (__int64)&v3);
}
