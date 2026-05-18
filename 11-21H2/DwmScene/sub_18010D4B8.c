/*
 * XREFs of sub_18010D4B8 @ 0x18010D4B8
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020828 @ 0x180020828 (sub_180020828.c)
 */

__int64 __fastcall sub_18010D4B8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180020828(*(_QWORD *)(a2 + 104));
  }
  return result;
}
