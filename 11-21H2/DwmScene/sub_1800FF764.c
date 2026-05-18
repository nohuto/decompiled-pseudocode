/*
 * XREFs of sub_1800FF764 @ 0x1800FF764
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800FF764(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 160) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 160) &= ~2u;
    return sub_180010910(a2 + 96);
  }
  return result;
}
