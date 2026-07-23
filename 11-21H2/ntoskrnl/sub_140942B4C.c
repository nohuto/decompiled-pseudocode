/*
 * XREFs of sub_140942B4C @ 0x140942B4C
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140942B4C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  ++*(_DWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 48) = a1;
  result = *(_QWORD *)(a1 + 312);
  *(_QWORD *)(result + 80) = a2;
  return result;
}
