/*
 * XREFs of sub_180027990 @ 0x180027990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027990(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_DWORD *)a2 = a3;
  result = a2;
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}
