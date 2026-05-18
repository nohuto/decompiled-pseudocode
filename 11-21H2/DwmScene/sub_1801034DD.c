/*
 * XREFs of sub_1801034DD @ 0x1801034DD
 * Callers:
 *     <none>
 * Callees:
 *     sub_180058B24 @ 0x180058B24 (sub_180058B24.c)
 */

__int64 __fastcall sub_1801034DD(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180058B24(*(_QWORD *)(a2 + 80));
  }
  return result;
}
