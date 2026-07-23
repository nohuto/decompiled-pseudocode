/*
 * XREFs of sub_14076D788 @ 0x14076D788
 * Callers:
 *     sub_14076CE48 @ 0x14076CE48 (sub_14076CE48.c)
 *     sub_14076D160 @ 0x14076D160 (sub_14076D160.c)
 *     sub_14076D6D4 @ 0x14076D6D4 (sub_14076D6D4.c)
 *     sub_140860090 @ 0x140860090 (sub_140860090.c)
 * Callees:
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     sub_1406E87E8 @ 0x1406E87E8 (sub_1406E87E8.c)
 */

__int64 __fastcall sub_14076D788(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !sub_1406E87E8(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
