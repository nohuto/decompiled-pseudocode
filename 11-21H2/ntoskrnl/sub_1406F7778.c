/*
 * XREFs of sub_1406F7778 @ 0x1406F7778
 * Callers:
 *     sub_1406F7664 @ 0x1406F7664 (sub_1406F7664.c)
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406F7778(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int16 v4; // ax

  if ( *(_QWORD *)(a1 + 1408)
    && ((v4 = *(_WORD *)(a1 + 2412), v4 == 332) || v4 == 452)
    && a2 < 0x100000000LL
    && (!a3 || (*(_BYTE *)(*(_QWORD *)a3 + 14LL) & 0x40) != 0) )
  {
    return *(_QWORD *)(a1 + 1680) + 456LL;
  }
  else
  {
    return *(_QWORD *)(a1 + 1680) + 424LL;
  }
}
