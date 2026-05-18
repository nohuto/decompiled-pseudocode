/*
 * XREFs of sub_1800ED2F0 @ 0x1800ED2F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800ED29C @ 0x1800ED29C (sub_1800ED29C.c)
 */

_QWORD *__fastcall sub_1800ED2F0(_QWORD *lpMem, char a2)
{
  sub_1800ED29C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
