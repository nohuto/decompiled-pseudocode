/*
 * XREFs of sub_140372A90 @ 0x140372A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140372A90(int a1, int a2)
{
  __int64 result; // rax

  result = qword_140C54BD0;
  *(_DWORD *)(a1 + qword_140C54BD0) = a2;
  return result;
}
