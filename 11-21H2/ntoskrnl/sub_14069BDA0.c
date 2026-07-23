/*
 * XREFs of sub_14069BDA0 @ 0x14069BDA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 */

__int64 __fastcall sub_14069BDA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = sub_14069BDD0(&v4, 0LL);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
