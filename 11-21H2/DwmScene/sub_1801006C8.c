/*
 * XREFs of sub_1801006C8 @ 0x1801006C8
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002D784 @ 0x18002D784 (sub_18002D784.c)
 */

__int64 __fastcall sub_1801006C8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18002D784(*(_QWORD *)(a2 + 440));
  }
  return result;
}
