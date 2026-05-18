/*
 * XREFs of sub_180102CA5 @ 0x180102CA5
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180102CA5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 280) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 280) &= ~1u;
    return sub_180010910(a2 + 128);
  }
  return result;
}
