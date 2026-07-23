/*
 * XREFs of sub_140A81D90 @ 0x140A81D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A8ABF8 @ 0x140A8ABF8 (sub_140A8ABF8.c)
 */

__int64 __fastcall sub_140A81D90(__int64 a1)
{
  __int64 result; // rax

  result = sub_140A8ABF8(a1);
  if ( result )
    return (*(_DWORD *)(result + 32) >> 1) & 1;
  return result;
}
