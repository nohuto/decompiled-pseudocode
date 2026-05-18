/*
 * XREFs of sub_18000D9F0 @ 0x18000D9F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18000D7C8 @ 0x18000D7C8 (sub_18000D7C8.c)
 */

_QWORD *__fastcall sub_18000D9F0(_QWORD *lpMem, char a2)
{
  sub_18000D7C8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
