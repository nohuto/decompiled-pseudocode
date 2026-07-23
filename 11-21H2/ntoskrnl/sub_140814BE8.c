/*
 * XREFs of sub_140814BE8 @ 0x140814BE8
 * Callers:
 *     sub_14081454C @ 0x14081454C (sub_14081454C.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_140814BE8(__int64 a1, __int16 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 816) & 0x80u) != 0 )
    return _bittest(*(const signed __int32 **)(a1 + 1000), a2 & 0x1FFF);
  return v2;
}
