/*
 * XREFs of sub_1406E6A98 @ 0x1406E6A98
 * Callers:
 *     sub_1406E6A28 @ 0x1406E6A28 (sub_1406E6A28.c)
 *     EtwWriteStartScenario @ 0x14081C9F0 (EtwWriteStartScenario.c)
 *     EtwWriteEndScenario @ 0x14081CDA0 (EtwWriteEndScenario.c)
 * Callees:
 *     sub_1406E6B08 @ 0x1406E6B08 (sub_1406E6B08.c)
 *     sub_140815DC8 @ 0x140815DC8 (sub_140815DC8.c)
 */

__int64 __fastcall sub_1406E6A98(__int64 a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 v4; // ax

  if ( !a1
    || !a2
    || !a3
    || !*(_DWORD *)a2
    && !*(_WORD *)(a2 + 4)
    && !*(_WORD *)(a2 + 6)
    && !*(_BYTE *)(a2 + 8)
    && !*(_BYTE *)(a2 + 9)
    && !*(_BYTE *)(a2 + 10)
    && !*(_BYTE *)(a2 + 11)
    && !*(_BYTE *)(a2 + 12)
    && !*(_BYTE *)(a2 + 13)
    && !*(_BYTE *)(a2 + 14)
    && !*(_BYTE *)(a2 + 15) )
  {
    return 3221225485LL;
  }
  v4 = *a3;
  if ( a4 == 10 )
  {
    if ( byte_140C16E48 )
      return sub_1406E6B08(a1, v4, a2);
  }
  else if ( byte_140C16E48 )
  {
    return sub_140815DC8(a1, v4, a2);
  }
  return 3221225473LL;
}
