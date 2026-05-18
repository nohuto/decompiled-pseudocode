/*
 * XREFs of sub_1800E519B @ 0x1800E519B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B938 @ 0x18002B938 (sub_18002B938.c)
 */

__int64 __fastcall sub_1800E519B(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18002B938();
  }
  return result;
}
