/*
 * XREFs of sub_1406EB080 @ 0x1406EB080
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406EB0AC @ 0x1406EB0AC (sub_1406EB0AC.c)
 */

__int64 __fastcall sub_1406EB080(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 44);
  result = sub_1406EB0AC(&v4);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
