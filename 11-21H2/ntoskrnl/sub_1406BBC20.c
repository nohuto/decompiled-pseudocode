/*
 * XREFs of sub_1406BBC20 @ 0x1406BBC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406BBC4C @ 0x1406BBC4C (sub_1406BBC4C.c)
 */

__int64 __fastcall sub_1406BBC20(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = sub_1406BBC4C(&v4);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
