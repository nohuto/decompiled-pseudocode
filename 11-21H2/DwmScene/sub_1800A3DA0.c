/*
 * XREFs of sub_1800A3DA0 @ 0x1800A3DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A3D14 @ 0x1800A3D14 (sub_1800A3D14.c)
 */

_QWORD *__fastcall sub_1800A3DA0(_QWORD *lpMem, char a2)
{
  sub_1800A3D14(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
