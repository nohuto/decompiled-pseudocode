/*
 * XREFs of sub_1800FFFD9 @ 0x1800FFFD9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011570 @ 0x180011570 (sub_180011570.c)
 */

__int64 __fastcall sub_1800FFFD9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return sub_180011570(*(_QWORD *)(a2 + 40));
  }
  return result;
}
