/*
 * XREFs of sub_1402469B0 @ 0x1402469B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

__int64 __fastcall sub_1402469B0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = a2;
  result = sub_140348800(a1);
  if ( result )
    return *(_QWORD *)(result + 8 * v2 + 33160);
  return result;
}
