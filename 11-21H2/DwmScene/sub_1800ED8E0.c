/*
 * XREFs of sub_1800ED8E0 @ 0x1800ED8E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800ED784 @ 0x1800ED784 (sub_1800ED784.c)
 */

_QWORD *__fastcall sub_1800ED8E0(_QWORD *lpMem, char a2)
{
  sub_1800ED784(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
