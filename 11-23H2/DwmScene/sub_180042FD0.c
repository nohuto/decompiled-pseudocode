/*
 * XREFs of sub_180042FD0 @ 0x180042FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180042F3C @ 0x180042F3C (sub_180042F3C.c)
 */

_QWORD *__fastcall sub_180042FD0(_QWORD *lpMem, char a2)
{
  sub_180042F3C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
