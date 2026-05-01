/*
 * XREFs of sub_180009EB0 @ 0x180009EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009EB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 40) = a2;
  result = 0LL;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}
