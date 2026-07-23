/*
 * XREFs of sub_1409CD850 @ 0x1409CD850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409CE444 @ 0x1409CE444 (sub_1409CE444.c)
 */

__int64 __fastcall sub_1409CD850(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = sub_1409CE444(&v4);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
