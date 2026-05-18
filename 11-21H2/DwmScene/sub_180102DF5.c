/*
 * XREFs of sub_180102DF5 @ 0x180102DF5
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180102DF5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 376) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 376) &= ~2u;
    return sub_180010910(a2 + 112);
  }
  return result;
}
