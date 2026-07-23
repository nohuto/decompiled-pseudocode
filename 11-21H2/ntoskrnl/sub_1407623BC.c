/*
 * XREFs of sub_1407623BC @ 0x1407623BC
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 * Callees:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_1407623F0 @ 0x1407623F0 (sub_1407623F0.c)
 */

__int64 __fastcall sub_1407623BC(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)sub_1407623F0(BugCheckParameter2) == 1 )
    sub_1406F4FB8(BugCheckParameter2, -1);
  return 1LL;
}
