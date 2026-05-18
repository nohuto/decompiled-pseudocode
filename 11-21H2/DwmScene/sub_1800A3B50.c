/*
 * XREFs of sub_1800A3B50 @ 0x1800A3B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A3B50(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(result + 1896) = 0;
  return result;
}
