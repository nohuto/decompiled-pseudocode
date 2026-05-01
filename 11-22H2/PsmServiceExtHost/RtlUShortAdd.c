/*
 * XREFs of RtlUShortAdd @ 0x1800999D0
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009DFEC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009E5BC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x18009F534 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUShortAdd(unsigned __int16 a1, __int16 a2, __int16 *a3)
{
  bool v3; // cf
  __int16 v4; // dx

  v3 = (unsigned __int16)(a2 + a1) < a1;
  if ( (unsigned __int16)(a2 + a1) < a1 )
    v4 = -1;
  else
    v4 = a2 + a1;
  *a3 = v4;
  return v3 ? 0xC0000095 : 0;
}
