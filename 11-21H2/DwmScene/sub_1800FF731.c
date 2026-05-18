/*
 * XREFs of sub_1800FF731 @ 0x1800FF731
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800FF731(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 160) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 160) &= ~1u;
    return sub_180010910(a2 + 64);
  }
  return result;
}
