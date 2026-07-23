/*
 * XREFs of sub_140372D70 @ 0x140372D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140372D70(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = result ^ ((unsigned __int8)result ^ (unsigned __int8)~(unsigned __int8)*(_DWORD *)(a1 + 16)) & 1;
  return result;
}
