/*
 * XREFs of sub_14069BB90 @ 0x14069BB90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 */

__int64 __fastcall sub_14069BB90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = *(_QWORD *)(a1 + 44);
  result = sub_14069BDD0(&v4, a2);
  *(_DWORD *)(v2 + 40) = result;
  return result;
}
