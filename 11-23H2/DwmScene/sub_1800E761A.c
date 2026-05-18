/*
 * XREFs of sub_1800E761A @ 0x1800E761A
 * Callers:
 *     <none>
 * Callees:
 *     sub_180051330 @ 0x180051330 (sub_180051330.c)
 */

__int64 __fastcall sub_1800E761A(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return sub_180051330();
  }
  return result;
}
