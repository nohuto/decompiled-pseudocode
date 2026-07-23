/*
 * XREFs of sub_1409CD7E0 @ 0x1409CD7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409CD544 @ 0x1409CD544 (sub_1409CD544.c)
 */

__int64 __fastcall sub_1409CD7E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(a1 + 44);
  v4 = *(_QWORD *)(a1 + 52);
  result = sub_1409CD544(&v5, &v4);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
