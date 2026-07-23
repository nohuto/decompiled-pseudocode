/*
 * XREFs of sub_1403DED30 @ 0x1403DED30
 * Callers:
 *     sub_1407669D4 @ 0x1407669D4 (sub_1407669D4.c)
 * Callees:
 *     sub_14063EC3C @ 0x14063EC3C (sub_14063EC3C.c)
 */

__int64 __fastcall sub_1403DED30(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 720);
  if ( *(char *)(result + 16) < 0 )
    return sub_14063EC3C(*(_QWORD *)(a1 + 32));
  return result;
}
