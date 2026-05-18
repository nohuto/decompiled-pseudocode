/*
 * XREFs of sub_180106A07 @ 0x180106A07
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180106A07(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 144) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 144) &= ~1u;
    return sub_180010910(*(_QWORD *)(a2 + 304));
  }
  return result;
}
